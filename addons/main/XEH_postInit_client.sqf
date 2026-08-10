if (!hasInterface) exitWith {};
if (missionNamespace getVariable ["grp9_ctab_position_fix_initialized", false]) exitWith {};

missionNamespace setVariable ["grp9_ctab_position_fix_initialized", true];
missionNamespace setVariable ["grp9_ctab_position_fix_lastState", []];

[{
    if (isNil "cTabIfOpen" || {count cTabIfOpen < 2}) exitWith {
        missionNamespace setVariable ["grp9_ctab_position_fix_lastState", []];
    };

    if (isNil "cTab_fnc_isDialog" || {isNil "cTab_fnc_getSettings"}) exitWith {};

    private _displayName = cTabIfOpen select 1;
    if ([_displayName] call cTab_fnc_isDialog) exitWith {
        missionNamespace setVariable ["grp9_ctab_position_fix_lastState", []];
    };

    disableSerialization;
    private _display = uiNamespace getVariable [_displayName, displayNull];
    if (isNull _display) exitWith {};

    private _useAlternatePosition = [_displayName, "dspIfPosition"] call cTab_fnc_getSettings;
    if (isNil "_useAlternatePosition") then {
        _useAlternatePosition = false;
    };

    private _state = [_displayName, _useAlternatePosition, _display];
    if (_state isEqualTo (missionNamespace getVariable ["grp9_ctab_position_fix_lastState", []])) exitWith {};

    if ([_displayName] call grp9_ctab_position_fix_fnc_applyInterfacePosition) then {
        missionNamespace setVariable ["grp9_ctab_position_fix_lastState", _state];
        diag_log format [
            "[GRP9 cTab UI Position Fix] Applied %1 position to %2.",
            ["primary", "alternate"] select _useAlternatePosition,
            _displayName
        ];
    };
}, 0.05] call CBA_fnc_addPerFrameHandler;

diag_log "[GRP9 cTab UI Position Fix] Initialized position watcher.";
