if (!hasInterface) exitWith {};
if (missionNamespace getVariable ["ctab_uip_initialized", false]) exitWith {};

missionNamespace setVariable ["ctab_uip_initialized", true];
missionNamespace setVariable ["ctab_uip_lastState", []];

[{
    if (isNil "cTabIfOpen" || {count cTabIfOpen < 2}) exitWith {
        missionNamespace setVariable ["ctab_uip_lastState", []];
    };

    if (isNil "cTab_fnc_isDialog" || {isNil "cTab_fnc_getSettings"}) exitWith {};

    private _displayName = cTabIfOpen select 1;
    if ([_displayName] call cTab_fnc_isDialog) exitWith {
        missionNamespace setVariable ["ctab_uip_lastState", []];
    };

    disableSerialization;
    private _display = uiNamespace getVariable [_displayName, displayNull];
    if (isNull _display) exitWith {};

    private _useAlternatePosition = [_displayName, "dspIfPosition"] call cTab_fnc_getSettings;
    if (isNil "_useAlternatePosition") then {
        _useAlternatePosition = false;
    };

    private _state = [_displayName, _useAlternatePosition, _display];
    if (_state isEqualTo (missionNamespace getVariable ["ctab_uip_lastState", []])) exitWith {};

    if ([_displayName] call ctab_uip_fnc_applyInterfacePosition) then {
        missionNamespace setVariable ["ctab_uip_lastState", _state];
        diag_log format [
            "[cTab UIP] Applied %1 position to %2.",
            ["primary", "alternate"] select _useAlternatePosition,
            _displayName
        ];
    };
}, 0.05] call CBA_fnc_addPerFrameHandler;

diag_log "[cTab UIP] Initialized position watcher.";
