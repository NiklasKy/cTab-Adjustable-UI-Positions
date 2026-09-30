class CfgPatches {
    class ctab_uip_main {
        name = "cTab - Adjustable UI Positions";
        author = "[GRP9] Niklas Ky";
        requiredVersion = 2.18;
        requiredAddons[] = {"cba_main"};
        units[] = {};
        weapons[] = {};
        version = 1.0;
        versionStr = "1.0.2";
        versionAr[] = {1, 0, 2};
    };
};

class CfgFunctions {
    class ctab_uip {
        tag = "ctab_uip";

        class main {
            file = "\z\ctab_uip\addons\main\functions";

            class applyInterfacePosition {};
        };
    };
};

class Extended_PostInit_EventHandlers {
    class ctab_uip_main {
        clientInit = "call compile preprocessFileLineNumbers '\z\ctab_uip\addons\main\XEH_postInit_client.sqf'";
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
                preview = "";
                saveToProfile[] = {0, 1, 2, 3};
            };
            class cTab_Android_dsp_alt {
                displayName = "cTab Android (Alternate)";
                description = "Alternate position used by the cTab position toggle";
                preview = "";
                saveToProfile[] = {0, 1, 2, 3};
            };
            class cTab_TAD_dsp {
                displayName = "cTab TAD";
                description = "Primary position of the cTab TAD overlay";
                preview = "";
                saveToProfile[] = {0, 1, 2, 3};
            };
            class cTab_TAD_dsp_alt {
                displayName = "cTab TAD (Alternate)";
                description = "Alternate position used by the cTab position toggle";
                preview = "";
                saveToProfile[] = {0, 1, 2, 3};
            };
            class cTab_microDAGR_dsp {
                displayName = "cTab MicroDAGR";
                description = "Primary position of the cTab MicroDAGR overlay";
                preview = "";
                saveToProfile[] = {0, 1, 2, 3};
            };
            class cTab_microDAGR_dsp_alt {
                displayName = "cTab MicroDAGR (Alternate)";
                description = "Alternate position used by the cTab position toggle";
                preview = "";
                saveToProfile[] = {0, 1, 2, 3};
            };
        };
    };
};
