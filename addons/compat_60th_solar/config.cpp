class CfgPatches {
    class ctab_uip_compat_60th_solar {
        name = "cTab UIP - 60th Solar cTab Compatibility";
        author = "[GRP9] Niklas Ky";
        requiredVersion = 2.18;
        requiredAddons[] = {
            "ctab_uip_main",
            "solar_60th_equipment_cTab"
        };
        skipWhenMissingDependencies = 1;
        units[] = {};
        weapons[] = {};
        version = 1.0;
        versionStr = "1.0.2";
        versionAr[] = {1, 0, 2};
    };
};

class CfgUIGrids {
    class IGUI {
        class Variables {
            class cTab_Android_dsp {
                preview = "\z\solar_60th\addons\equipment\cTab\img\android_background_ca.paa";
            };

            class cTab_Android_dsp_alt {
                preview = "\z\solar_60th\addons\equipment\cTab\img\android_background_ca.paa";
            };

            class cTab_TAD_dsp {
                preview = "\z\solar_60th\addons\equipment\cTab\img\tad_background_ca.paa";
            };

            class cTab_TAD_dsp_alt {
                preview = "\z\solar_60th\addons\equipment\cTab\img\tad_background_ca.paa";
            };

            class cTab_microDAGR_dsp {
                preview = "\z\solar_60th\addons\equipment\cTab\img\microdagr_background_ca.paa";
            };

            class cTab_microDAGR_dsp_alt {
                preview = "\z\solar_60th\addons\equipment\cTab\img\microdagr_background_ca.paa";
            };
        };
    };
};

class RscTitles {
    class cTab_Android_dsp {
        onLoad = "_this call cTab_fnc_onIfOpen; ['cTab_Android_dsp'] call ctab_uip_fnc_applyInterfacePosition;";
    };

    class cTab_TAD_dsp {
        onLoad = "_this call cTab_fnc_onIfOpen; ['cTab_TAD_dsp'] call ctab_uip_fnc_applyInterfacePosition;";
    };

    class cTab_microDAGR_dsp {
        onLoad = "_this call cTab_fnc_onIfOpen; ['cTab_microDAGR_dsp'] call ctab_uip_fnc_applyInterfacePosition;";
    };
};
