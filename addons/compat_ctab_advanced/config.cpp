class CfgPatches {
    class ctab_uip_compat_ctab_advanced {
        name = "cTab UIP - cTAB Advanced Compatibility";
        author = "[GRP9] Niklas Ky";
        requiredVersion = 2.18;
        requiredAddons[] = {
            "ctab_uip_compat_ctab",
            "ctab_main",
            "ctab"
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
                preview = "\cTab\img\android_s7_ca.paa";
            };

            class cTab_Android_dsp_alt {
                preview = "\cTab\img\android_s7_ca.paa";
            };
        };
    };
};
