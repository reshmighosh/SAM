#include <iostream>
#include <sstream>
#include <fstream>

#include <ssc/sscapi.h>

#include "startup_extractor.h"
#include "ui_form_extractor.h"
#include "equation_extractor.h"
#include "config_extractor.h"
#include "data_structures.h"
#include "export_config.h"

std::unordered_map<std::string, std::vector<std::string>> SAM_cmod_to_inputs;
std::unordered_map<std::string, std::vector<std::string>> SAM_cmod_to_outputs;


std::string active_config;

int main(int argc, char *argv[]){
    // startup.lk file path should be provided via command line
    const std::string& filename = "/Users/dguittet/SAM-Development/sam/deploy/runtime/startup.lk";

    if (argc < 2){
        std::cout << "startup.lk script file required.\n";
        return 1;
    }

    std::ifstream ifs(filename.c_str());
    if(!ifs.is_open()){
        std::cout << "cannot open file";
        return 1;
    }

    // from startup script, load file and extract information for each config
    std::string content = static_cast<std::stringstream const&>(std::stringstream() << ifs.rdbuf()).str();

    startup_extractor su_e;
    su_e.load_startup_script(content);
    std::vector<std::string> unique_ui_form_names = su_e.get_unique_ui_forms();

    // get all the SSC_INPUT & SSC_INOUT for all used compute_modules
    load_primary_cmod_inputs();


    // from each ui_form file, extract the config-independent defaults, equations and callback scripts
    std::string ui_path =  "../deploy/runtime/ui/";
    SAM_ui_extracted_db.populate_ui_data(ui_path, unique_ui_form_names);

    // parse the equations
    for (size_t i = 0; i < unique_ui_form_names.size(); i++){
        std::string ui_name = unique_ui_form_names[i];
        equation_extractor eqn_ext(ui_name);
        eqn_ext.parse_script(SAM_ui_extracted_db.find(ui_name)->get_eqn_script());
    }

    // parsing the callbacks requires all ui forms in a config
    active_config = "";
    for (auto it = SAM_config_to_primary_modules.begin(); it != SAM_config_to_primary_modules.end(); ++it){
        // only do technology configs
        if (it->first.find("None") == std::string::npos)
            continue;
        active_config = it->first;
        // no battery defaults
        if (active_config == "Battery-None"){
            continue;
        }

        // focus on this one
        if (active_config != "Flat Plate PV-None"){
            continue;
        }

        config_extractor ce(it->first);
        ce.map_equations();
        ce.register_callback_functions();
        std::cout << "\n\n\n\n";
        SAM_config_to_variable_graph[active_config]->print_dot();
    }

    // for each configuration,  per input page
    return 1;

    // output all data in python syntax
    std::cout << "\"\"\"\n";
    std::cout << "\tFile generated by export_config.cpp. Do not edit directly.\n";
    std::cout << "\tExports maps for:\n";
    std::cout << "\t\tconfig_to_input_pages\n";
    std::cout << "\t\tconfig_to_modules\n";
    std::cout << "\t\tconfig_to_eqn_variables\n";
    std::cout << "\t\tconfig_to_cb_cmods\n";
    std::cout << "\tSSC Version: " << ssc_version() << "\n";
    time_t now = time(0);
    std::cout << "\tDate: " << ctime(&now) <<"\n";
    std::cout << "\"\"\"\n\n";
//    su_e.print_config_to_input_pages();

    std::cout << "\n\n\n";
//    su_e.print_config_to_modules();

    std::cout << "# List of Variables that are used in equations #\n\n";
    print_ui_form_to_eqn_variable();
}

