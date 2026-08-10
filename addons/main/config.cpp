class CfgPatches {
    class grp9_ctab_position_fix_main {
        name = "GRP9 cTab UI Position Fix";
        author = "Gruppe 9";
        requiredVersion = 2.18;
        requiredAddons[] = {"cba_main", "cTab"};
        units[] = {};
        weapons[] = {};
        version = 1.02;
        versionStr = "1.0.2";
        versionAr[] = {1, 0, 2};
    };
};

class CfgFunctions {
    class grp9_ctab_position_fix {
        tag = "grp9_ctab_position_fix";

        class main {
            file = "\z\grp9_ctab_position_fix\addons\main\functions";

            class applyInterfacePosition {};
        };
    };
};

class Extended_PostInit_EventHandlers {
    class grp9_ctab_position_fix_main {
        clientInit = "call compile preprocessFileLineNumbers '\z\grp9_ctab_position_fix\addons\main\XEH_postInit_client.sqf'";
    };
};

class CfgUIGrids {
    class IGUI {
        class Presets {
            class Arma3 {
                class Variables {
                    cTab_Android_dsp[] = {
                        {
                            "(safeZoneX - 0.86 * 0.17)",
                            "(safeZoneY + safeZoneH * 0.88 - (0.86 * 4 / 3) * 0.72)",
                            "0.86",
                            "1.1466666"
                        },
                        "1",
                        "1"
                    };
                    cTab_Android_dsp_alt[] = {
                        {
                            "((safeZoneX - 0.86 * 0.17) + (2 * safeZoneX + safeZoneW - 0.86 - 2 * (safeZoneX - 0.86 * 0.17)))",
                            "(safeZoneY + safeZoneH * 0.88 - (0.86 * 4 / 3) * 0.72)",
                            "0.86",
                            "1.1466666"
                        },
                        "1",
                        "1"
                    };
                    cTab_TAD_dsp[] = {
                        {
                            "(safeZoneX + 0.05 * 3 / 4)",
                            "(safeZoneY + safeZoneH - 0.86 - 0.2)",
                            "0.645",
                            "0.86"
                        },
                        "1",
                        "1"
                    };
                    cTab_TAD_dsp_alt[] = {
                        {
                            "((safeZoneX + 0.05 * 3 / 4) + (2 * safeZoneX + safeZoneW - (0.86 * 3 / 4) - 2 * (safeZoneX + 0.05 * 3 / 4)))",
                            "(safeZoneY + safeZoneH - 0.86 - 0.2)",
                            "0.645",
                            "0.86"
                        },
                        "1",
                        "1"
                    };
                    cTab_microDAGR_dsp[] = {
                        {
                            "(safeZoneX - 0.05 * 3 / 4)",
                            "(safeZoneY + safeZoneH - 0.86 - 0.2)",
                            "0.645",
                            "0.86"
                        },
                        "1",
                        "1"
                    };
                    cTab_microDAGR_dsp_alt[] = {
                        {
                            "((safeZoneX - 0.05 * 3 / 4) + (2 * safeZoneX + safeZoneW - (0.86 * 3 / 4) - 2 * (safeZoneX - 0.05 * 3 / 4)))",
                            "(safeZoneY + safeZoneH - 0.86 - 0.2)",
                            "0.645",
                            "0.86"
                        },
                        "1",
                        "1"
                    };
                };
            };
        };

        class Variables {
            class cTab_Android_dsp {
                displayName = "cTab Android";
                description = "Primary position of the cTab Android overlay";
                preview = "\cTab\img\android_background_ca.paa";
                saveToProfile[] = {0, 1, 2, 3};
            };
            class cTab_Android_dsp_alt {
                displayName = "cTab Android (Alternate)";
                description = "Alternate position used by the cTab position toggle";
                preview = "\cTab\img\android_background_ca.paa";
                saveToProfile[] = {0, 1, 2, 3};
            };
            class cTab_TAD_dsp {
                displayName = "cTab TAD";
                description = "Primary position of the cTab TAD overlay";
                preview = "\cTab\img\TAD_background_ca.paa";
                saveToProfile[] = {0, 1, 2, 3};
            };
            class cTab_TAD_dsp_alt {
                displayName = "cTab TAD (Alternate)";
                description = "Alternate position used by the cTab position toggle";
                preview = "\cTab\img\TAD_background_ca.paa";
                saveToProfile[] = {0, 1, 2, 3};
            };
            class cTab_microDAGR_dsp {
                displayName = "cTab MicroDAGR";
                description = "Primary position of the cTab MicroDAGR overlay";
                preview = "\cTab\img\microDAGR_background_ca.paa";
                saveToProfile[] = {0, 1, 2, 3};
            };
            class cTab_microDAGR_dsp_alt {
                displayName = "cTab MicroDAGR (Alternate)";
                description = "Alternate position used by the cTab position toggle";
                preview = "\cTab\img\microDAGR_background_ca.paa";
                saveToProfile[] = {0, 1, 2, 3};
            };
        };
    };
};

class RscTitles {
    class cTab_Android_dsp {
        onLoad = "_this call cTab_fnc_onIfOpen; ['cTab_Android_dsp'] call grp9_ctab_position_fix_fnc_applyInterfacePosition;";
    };

    class cTab_TAD_dsp {
        onLoad = "_this call cTab_fnc_onIfOpen; ['cTab_TAD_dsp'] call grp9_ctab_position_fix_fnc_applyInterfacePosition;";
    };

    class cTab_microDAGR_dsp {
        onLoad = "_this call cTab_fnc_onIfOpen; ['cTab_microDAGR_dsp'] call grp9_ctab_position_fix_fnc_applyInterfacePosition;";
    };
};
