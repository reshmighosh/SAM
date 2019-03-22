static var_info _cm_vtab_linear_fresnel_dsg_iph[] = {
	// VARTYPE	DATATYPE	NAME	LABEL	UNITS	META	GROUP	REQUIRED_IF	CONSTRAINTS	UI_HINTS
{ 	SSC_INPUT, 	SSC_STRING, 	"file_name", 	"local weather file path", 	"", 	"", 	"Location and Resource", 	"*", 	"LOCAL_FILE", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"I_bn_des", 	"Design point irradiation value", 	"W/m2", 	"", 	"System Design", 	"*", 	"", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"T_cold_ref", 	"Reference HTF outlet temperature at design", 	"C", 	"", 	"System Design", 	"*", 	"", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"P_turb_des", 	"Design-point turbine inlet pressure", 	"bar", 	"", 	"System Design", 	"*", 	"", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"T_hot", 	"Hot HTF inlet temperature, from storage tank", 	"C", 	"", 	"System Design", 	"*", 	"", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"x_b_des", 	"Design point boiler outlet steam quality", 	"none", 	"", 	"System Design", 	"*", 	"", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"q_pb_des", 	"Design heat input to the power block", 	"MW", 	"", 	"System Design", 	"*", 	"", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"fP_hdr_c", 	"Average design-point cold header pressure drop fraction", 	"none", 	"", 	"Solar Field", 	"*", 	"", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"fP_sf_boil", 	"Design-point pressure drop across the solar field boiler fraction", 	"none", 	"", 	"Solar Field", 	"*", 	"", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"fP_hdr_h", 	"Average design-point hot header pressure drop fraction", 	"none", 	"", 	"Solar Field", 	"*", 	"", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"nModBoil", 	"Number of modules in the boiler section", 	"none", 	"", 	"Solar Field", 	"*", 	"INTEGER", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"nLoops", 	"Number of loops", 	"none", 	"", 	"Solar Field", 	"*", 	"", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"eta_pump", 	"Feedwater pump efficiency", 	"none", 	"", 	"Solar Field", 	"*", 	"", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"theta_stow", 	"stow angle", 	"deg", 	"", 	"Solar Field", 	"*", 	"", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"theta_dep", 	"deploy angle", 	"deg", 	"", 	"Solar Field", 	"*", 	"", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"T_fp", 	"Freeze protection temperature (heat trace activation temperature)", 	"C", 	"", 	"Solar Field", 	"*", 	"", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"Pipe_hl_coef", 	"Loss coefficient from the header.. runner pipe.. and non-HCE pipin", 	"W/m2-K", 	"", 	"Solar Field", 	"*", 	"", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"SCA_drives_elec", 	"Tracking power.. in Watts per m2", 	"W/m2", 	"", 	"Solar Field", 	"*", 	"", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"ColAz", 	"Collector azimuth angle", 	"deg", 	"", 	"Solar Field", 	"*", 	"", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"e_startup", 	"Thermal inertia contribution per sq meter of solar field", 	"kJ/K-m2", 	"", 	"Solar Field", 	"*", 	"", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"T_amb_des_sf", 	"Design-point ambient temperature", 	"C", 	"", 	"Solar Field", 	"*", 	"", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"V_wind_max", 	"Maximum allowable wind velocity before safety stow", 	"m/s", 	"", 	"Solar Field", 	"*", 	"", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"csp.lf.sf.water_per_wash", 	"Water usage per wash", 	"L/m2_aper", 	"", 	"Solar Field", 	"*", 	"", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"csp.lf.sf.washes_per_year", 	"Mirror washing frequency", 	"-/year", 	"", 	"Solar Field", 	"*", 	"", 	""},
{ 	SSC_INPUT, 	SSC_MATRIX, 	"A_aperture", 	"(boiler, SH) Reflective aperture area of the collector module", 	"m^2", 	"", 	"Collector and Receiver", 	"*", 	"", 	""},
{ 	SSC_INPUT, 	SSC_MATRIX, 	"L_col", 	"(boiler, SH) Active length of the superheater section collector module", 	"m", 	"", 	"Collector and Receiver", 	"*", 	"", 	""},
{ 	SSC_INPUT, 	SSC_MATRIX, 	"OptCharType", 	"(boiler, SH) The optical characterization method", 	"none", 	"", 	"Collector and Receiver", 	"*", 	"", 	""},
{ 	SSC_INPUT, 	SSC_MATRIX, 	"IAM_T", 	"(boiler, SH) Transverse Incident angle modifiers (0,1,2,3,4 order terms)", 	"none", 	"", 	"Collector and Receiver", 	"*", 	"", 	""},
{ 	SSC_INPUT, 	SSC_MATRIX, 	"IAM_L", 	"(boiler, SH) Longitudinal Incident angle modifiers (0,1,2,3,4 order terms)", 	"none", 	"", 	"Collector and Receiver", 	"*", 	"", 	""},
{ 	SSC_INPUT, 	SSC_MATRIX, 	"TrackingError", 	"(boiler, SH) User-defined tracking error derate", 	"none", 	"", 	"Collector and Receiver", 	"*", 	"", 	""},
{ 	SSC_INPUT, 	SSC_MATRIX, 	"GeomEffects", 	"(boiler, SH) User-defined geometry effects derate", 	"none", 	"", 	"Collector and Receiver", 	"*", 	"", 	""},
{ 	SSC_INPUT, 	SSC_MATRIX, 	"rho_mirror_clean", 	"(boiler, SH) User-defined clean mirror reflectivity", 	"none", 	"", 	"Collector and Receiver", 	"*", 	"", 	""},
{ 	SSC_INPUT, 	SSC_MATRIX, 	"dirt_mirror", 	"(boiler, SH) User-defined dirt on mirror derate", 	"none", 	"", 	"Collector and Receiver", 	"*", 	"", 	""},
{ 	SSC_INPUT, 	SSC_MATRIX, 	"error", 	"(boiler, SH) User-defined general optical error derate", 	"none", 	"", 	"Collector and Receiver", 	"*", 	"", 	""},
{ 	SSC_INPUT, 	SSC_MATRIX, 	"HLCharType", 	"(boiler, SH) Flag indicating the heat loss model type {1=poly.; 2=Forristall}", 	"none", 	"", 	"Collector and Receiver", 	"*", 	"", 	""},
{ 	SSC_INPUT, 	SSC_MATRIX, 	"HL_dT", 	"(boiler, SH) Heat loss coefficient - HTF temperature (0,1,2,3,4 order terms)", 	"W/m-K^order", 	"", 	"Collector and Receiver", 	"*", 	"", 	""},
{ 	SSC_INPUT, 	SSC_MATRIX, 	"HL_W", 	"(boiler, SH) Heat loss coef adj wind velocity (0,1,2,3,4 order terms)", 	"1/(m/s)^order", 	"", 	"Collector and Receiver", 	"*", 	"", 	""},
{ 	SSC_INPUT, 	SSC_MATRIX, 	"D_2", 	"(boiler, SH) The inner absorber tube diameter", 	"m", 	"", 	"Collector and Receiver", 	"*", 	"", 	""},
{ 	SSC_INPUT, 	SSC_MATRIX, 	"D_3", 	"(boiler, SH) The outer absorber tube diameter", 	"m", 	"", 	"Collector and Receiver", 	"*", 	"", 	""},
{ 	SSC_INPUT, 	SSC_MATRIX, 	"D_4", 	"(boiler, SH) The inner glass envelope diameter", 	"m", 	"", 	"Collector and Receiver", 	"*", 	"", 	""},
{ 	SSC_INPUT, 	SSC_MATRIX, 	"D_5", 	"(boiler, SH) The outer glass envelope diameter", 	"m", 	"", 	"Collector and Receiver", 	"*", 	"", 	""},
{ 	SSC_INPUT, 	SSC_MATRIX, 	"D_p", 	"(boiler, SH) The diameter of the absorber flow plug (optional)", 	"m", 	"", 	"Collector and Receiver", 	"*", 	"", 	""},
{ 	SSC_INPUT, 	SSC_MATRIX, 	"Rough", 	"(boiler, SH) Roughness of the internal surface", 	"m", 	"", 	"Collector and Receiver", 	"*", 	"", 	""},
{ 	SSC_INPUT, 	SSC_MATRIX, 	"Flow_type", 	"(boiler, SH) The flow type through the absorber", 	"none", 	"", 	"Collector and Receiver", 	"*", 	"", 	""},
{ 	SSC_INPUT, 	SSC_MATRIX, 	"AbsorberMaterial", 	"(boiler, SH) Absorber material type", 	"none", 	"", 	"Collector and Receiver", 	"*", 	"", 	""},
{ 	SSC_INPUT, 	SSC_MATRIX, 	"HCE_FieldFrac", 	"(boiler, SH) The fraction of the field occupied by this HCE type (4: # field fracs)", 	"none", 	"", 	"Collector and Receiver", 	"*", 	"", 	""},
{ 	SSC_INPUT, 	SSC_MATRIX, 	"alpha_abs", 	"(boiler, SH) Absorber absorptance (4: # field fracs)", 	"none", 	"", 	"Collector and Receiver", 	"*", 	"", 	""},
{ 	SSC_INPUT, 	SSC_MATRIX, 	"b_eps_HCE1", 	"(temperature) Absorber emittance (eps)", 	"none", 	"", 	"Collector and Receiver", 	"*", 	"", 	""},
{ 	SSC_INPUT, 	SSC_MATRIX, 	"b_eps_HCE2", 	"(temperature) Absorber emittance (eps)", 	"none", 	"", 	"Collector and Receiver", 	"*", 	"", 	""},
{ 	SSC_INPUT, 	SSC_MATRIX, 	"b_eps_HCE3", 	"(temperature) Absorber emittance (eps)", 	"none", 	"", 	"Collector and Receiver", 	"*", 	"", 	""},
{ 	SSC_INPUT, 	SSC_MATRIX, 	"b_eps_HCE4", 	"(temperature) Absorber emittance (eps)", 	"none", 	"", 	"Collector and Receiver", 	"*", 	"", 	""},
{ 	SSC_INPUT, 	SSC_MATRIX, 	"sh_eps_HCE1", 	"(temperature) Absorber emittance (eps)", 	"none", 	"", 	"Collector and Receiver", 	"*", 	"", 	""},
{ 	SSC_INPUT, 	SSC_MATRIX, 	"sh_eps_HCE2", 	"(temperature) Absorber emittance (eps)", 	"none", 	"", 	"Collector and Receiver", 	"*", 	"", 	""},
{ 	SSC_INPUT, 	SSC_MATRIX, 	"sh_eps_HCE3", 	"(temperature) Absorber emittance (eps)", 	"none", 	"", 	"Collector and Receiver", 	"*", 	"", 	""},
{ 	SSC_INPUT, 	SSC_MATRIX, 	"sh_eps_HCE4", 	"(temperature) Absorber emittance (eps)", 	"none", 	"", 	"Collector and Receiver", 	"*", 	"", 	""},
{ 	SSC_INPUT, 	SSC_MATRIX, 	"alpha_env", 	"(boiler, SH) Envelope absorptance (4: # field fracs)", 	"none", 	"", 	"Collector and Receiver", 	"*", 	"", 	""},
{ 	SSC_INPUT, 	SSC_MATRIX, 	"EPSILON_4", 	"(boiler, SH) Inner glass envelope emissivities (Pyrex) (4: # field fracs)", 	"none", 	"", 	"Collector and Receiver", 	"*", 	"", 	""},
{ 	SSC_INPUT, 	SSC_MATRIX, 	"Tau_envelope", 	"(boiler, SH) Envelope transmittance (4: # field fracs)", 	"none", 	"", 	"Collector and Receiver", 	"*", 	"", 	""},
{ 	SSC_INPUT, 	SSC_MATRIX, 	"GlazingIntactIn", 	"(boiler, SH) The glazing intact flag {true=0; false=1} (4: # field fracs)", 	"none", 	"", 	"Collector and Receiver", 	"*", 	"", 	""},
{ 	SSC_INPUT, 	SSC_MATRIX, 	"AnnulusGas", 	"(boiler, SH) Annulus gas type {1=air; 26=Ar; 27=H2} (4: # field fracs)", 	"none", 	"", 	"Collector and Receiver", 	"*", 	"", 	""},
{ 	SSC_INPUT, 	SSC_MATRIX, 	"P_a", 	"(boiler, SH) Annulus gas pressure (4: # field fracs)", 	"torr", 	"", 	"Collector and Receiver", 	"*", 	"", 	""},
{ 	SSC_INPUT, 	SSC_MATRIX, 	"Design_loss", 	"(boiler, SH) Receiver heat loss at design (4: # field fracs)", 	"W/m", 	"", 	"Collector and Receiver", 	"*", 	"", 	""},
{ 	SSC_INPUT, 	SSC_MATRIX, 	"Shadowing", 	"(boiler, SH) Receiver bellows shadowing loss factor (4: # field fracs)", 	"none", 	"", 	"Collector and Receiver", 	"*", 	"", 	""},
{ 	SSC_INPUT, 	SSC_MATRIX, 	"Dirt_HCE", 	"(boiler, SH) Loss due to dirt on the receiver envelope (4: # field fracs)", 	"none", 	"", 	"Collector and Receiver", 	"*", 	"", 	""},
{ 	SSC_INPUT, 	SSC_MATRIX, 	"b_OpticalTable", 	"Values of the optical efficiency table", 	"none", 	"", 	"Collector and Receiver", 	"*", 	"", 	""},
{ 	SSC_INPUT, 	SSC_MATRIX, 	"sh_OpticalTable", 	"Values of the optical efficiency table", 	"none", 	"", 	"Collector and Receiver", 	"*", 	"", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"heat_sink_dP_frac", 	"Fractional pressure drop through heat sink", 	"", 	"", 	"System Design", 	"*", 	"", 	""},
{ 	SSC_OUTPUT, 	SSC_ARRAY, 	"time_hr", 	"Time at end of timestep", 	"hr", 	"", 	"", 	"*", 	"", 	""},
{ 	SSC_OUTPUT, 	SSC_ARRAY, 	"month", 	"Resource Month", 	"", 	"", 	"", 	"*", 	"", 	""},
{ 	SSC_OUTPUT, 	SSC_ARRAY, 	"hour_day", 	"Resource Hour of Day", 	"", 	"", 	"", 	"*", 	"", 	""},
{ 	SSC_OUTPUT, 	SSC_ARRAY, 	"solazi", 	"Resource Solar Azimuth", 	"deg", 	"", 	"", 	"*", 	"", 	""},
{ 	SSC_OUTPUT, 	SSC_ARRAY, 	"solzen", 	"Resource Solar Zenith", 	"deg", 	"", 	"", 	"*", 	"", 	""},
{ 	SSC_OUTPUT, 	SSC_ARRAY, 	"beam", 	"Resource Beam normal irradiance", 	"W/m2", 	"", 	"", 	"*", 	"", 	""},
{ 	SSC_OUTPUT, 	SSC_ARRAY, 	"tdry", 	"Resource Dry bulb temperature", 	"C", 	"", 	"", 	"*", 	"", 	""},
{ 	SSC_OUTPUT, 	SSC_ARRAY, 	"twet", 	"Resource Wet bulb temperature", 	"C", 	"", 	"", 	"*", 	"", 	""},
{ 	SSC_OUTPUT, 	SSC_ARRAY, 	"wspd", 	"Resource Wind Speed", 	"m/s", 	"", 	"", 	"*", 	"", 	""},
{ 	SSC_OUTPUT, 	SSC_ARRAY, 	"pres", 	"Resource Pressure", 	"mbar", 	"", 	"", 	"*", 	"", 	""},
{ 	SSC_OUTPUT, 	SSC_ARRAY, 	"theta_traverse", 	"Field traverse incidence angle", 	"deg", 	"", 	"", 	"*", 	"", 	""},
{ 	SSC_OUTPUT, 	SSC_ARRAY, 	"theta_longitudinal", 	"Field traverse incidence angle", 	"deg", 	"", 	"", 	"*", 	"", 	""},
{ 	SSC_OUTPUT, 	SSC_ARRAY, 	"eta_opt_ave", 	"Field optical efficiency before defocus", 	"deg", 	"", 	"", 	"*", 	"", 	""},
{ 	SSC_OUTPUT, 	SSC_ARRAY, 	"defocus", 	"Field collector focus fraction", 	"", 	"", 	"", 	"*", 	"", 	""},
{ 	SSC_OUTPUT, 	SSC_ARRAY, 	"q_inc_sf_tot", 	"Field thermal power incident", 	"MWt", 	"", 	"", 	"*", 	"", 	""},
{ 	SSC_OUTPUT, 	SSC_ARRAY, 	"q_dot_rec_inc", 	"Receiver thermal power incident", 	"MWt", 	"", 	"", 	"*", 	"", 	""},
{ 	SSC_OUTPUT, 	SSC_ARRAY, 	"q_dot_rec_thermal_loss", 	"Receiver thermal losses", 	"MWt", 	"", 	"", 	"*", 	"", 	""},
{ 	SSC_OUTPUT, 	SSC_ARRAY, 	"q_dot_rec_abs", 	"Receiver thermal power absorbed", 	"MWt", 	"", 	"", 	"*", 	"", 	""},
{ 	SSC_OUTPUT, 	SSC_ARRAY, 	"q_dot_piping_loss", 	"Field piping thermal losses", 	"MWt", 	"", 	"", 	"*", 	"", 	""},
{ 	SSC_OUTPUT, 	SSC_ARRAY, 	"e_dot_field_int_energy", 	"Field change in material/htf internal energy", 	"MWt", 	"", 	"", 	"*", 	"", 	""},
{ 	SSC_OUTPUT, 	SSC_ARRAY, 	"q_dot_sf_out", 	"Field thermal power leaving in steam", 	"MWt", 	"", 	"", 	"*", 	"", 	""},
{ 	SSC_OUTPUT, 	SSC_ARRAY, 	"q_dot_freeze_prot", 	"Field freeze protection required", 	"MWt", 	"", 	"", 	"*", 	"", 	""},
{ 	SSC_OUTPUT, 	SSC_ARRAY, 	"m_dot_loop", 	"Receiver mass flow rate", 	"kg/s", 	"", 	"", 	"*", 	"", 	""},
{ 	SSC_OUTPUT, 	SSC_ARRAY, 	"m_dot_field", 	"Field total mass flow rate", 	"kg/s", 	"", 	"", 	"*", 	"", 	""},
{ 	SSC_OUTPUT, 	SSC_ARRAY, 	"T_field_cold_in", 	"Field timestep-averaged inlet temperature", 	"C", 	"", 	"", 	"*", 	"", 	""},
{ 	SSC_OUTPUT, 	SSC_ARRAY, 	"T_rec_cold_in", 	"Loop timestep-averaged inlet temperature", 	"C", 	"", 	"", 	"*", 	"", 	""},
{ 	SSC_OUTPUT, 	SSC_ARRAY, 	"T_rec_hot_out", 	"Loop timestep-averaged outlet temperature", 	"C", 	"", 	"", 	"*", 	"", 	""},
{ 	SSC_OUTPUT, 	SSC_ARRAY, 	"x_rec_hot_out", 	"Loop timestep-averaged outlet quality", 	"", 	"", 	"", 	"*", 	"", 	""},
{ 	SSC_OUTPUT, 	SSC_ARRAY, 	"T_field_hot_out", 	"Field timestep-averaged outlet temperature", 	"C", 	"", 	"", 	"*", 	"", 	""},
{ 	SSC_OUTPUT, 	SSC_ARRAY, 	"x_field_hot_out", 	"Field timestep-averaged outlet quality", 	"", 	"", 	"", 	"*", 	"", 	""},
{ 	SSC_OUTPUT, 	SSC_ARRAY, 	"deltaP_field", 	"Field pressure drop", 	"bar", 	"", 	"", 	"*", 	"", 	""},
{ 	SSC_OUTPUT, 	SSC_ARRAY, 	"W_dot_sca_track", 	"Field collector tracking power", 	"MWe", 	"", 	"", 	"*", 	"", 	""},
{ 	SSC_OUTPUT, 	SSC_ARRAY, 	"W_dot_field_pump", 	"Field htf pumping power", 	"MWe", 	"", 	"", 	"*", 	"", 	""},
{ 	SSC_OUTPUT, 	SSC_ARRAY, 	"q_dot_to_heat_sink", 	"Heat sink thermal power", 	"MWt", 	"", 	"", 	"*", 	"", 	""},
{ 	SSC_OUTPUT, 	SSC_ARRAY, 	"W_dot_heat_sink_pump", 	"Heat sink pumping power", 	"MWe", 	"", 	"", 	"*", 	"", 	""},
{ 	SSC_OUTPUT, 	SSC_ARRAY, 	"W_dot_parasitic_tot", 	"System total electrical parasitic", 	"MWe", 	"", 	"", 	"*", 	"", 	""},
{ 	SSC_OUTPUT, 	SSC_ARRAY, 	"op_mode_1", 	"1st operating mode", 	"", 	"", 	"", 	"*", 	"", 	""},
{ 	SSC_OUTPUT, 	SSC_ARRAY, 	"op_mode_2", 	"2nd op. mode, if applicable", 	"", 	"", 	"", 	"*", 	"", 	""},
{ 	SSC_OUTPUT, 	SSC_ARRAY, 	"op_mode_3", 	"3rd op. mode, if applicable", 	"", 	"", 	"", 	"*", 	"", 	""},
{ 	SSC_OUTPUT, 	SSC_NUMBER, 	"annual_energy", 	"Annual Net Thermal Energy Production w/ avail derate", 	"kWt-hr", 	"", 	"", 	"*", 	"", 	""},
{ 	SSC_OUTPUT, 	SSC_NUMBER, 	"annual_field_energy", 	"Annual Gross Thermal Energy Production w/ avail derate", 	"kWt-hr", 	"", 	"", 	"*", 	"", 	""},
{ 	SSC_OUTPUT, 	SSC_NUMBER, 	"annual_thermal_consumption", 	"Annual thermal freeze protection required", 	"kWt-hr", 	"", 	"", 	"*", 	"", 	""},
{ 	SSC_OUTPUT, 	SSC_NUMBER, 	"annual_electricity_consumption", 	"Annual electricity consumptoin w/ avail derate", 	"kWe-hr", 	"", 	"", 	"*", 	"", 	""},
{ 	SSC_OUTPUT, 	SSC_NUMBER, 	"annual_total_water_use", 	"Total Annual Water Usage", 	"m^3", 	"", 	"", 	"*", 	"", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"adjust:constant", 	"Constant loss adjustment", 	"%", 	"", 	"", 	"*", 	"MAX=100", 	""},
{ 	SSC_INPUT, 	SSC_ARRAY, 	"adjust:hourly", 	"Hourly loss adjustments", 	"%", 	"", 	"", 	"?", 	"LENGTH=8760", 	""},
{ 	SSC_INPUT, 	SSC_MATRIX, 	"adjust:periods", 	"Period-based loss adjustments", 	"%", 	"n x 3 matrix [ start, end, loss ]", 	"", 	"?", 	"COLS=3", 	""},
{ 	SSC_OUTPUT, 	SSC_ARRAY, 	"gen", 	"System power generated", 	"kW", 	"", 	"", 	"*", 	"", 	""},
var_info_invalid};