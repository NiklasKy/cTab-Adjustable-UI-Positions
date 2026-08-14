params [["_displayName", "", [""]]];

if (_displayName isEqualTo "") exitWith {false};
if ([_displayName] call cTab_fnc_isDialog) exitWith {false};

disableSerialization;

private _display = uiNamespace getVariable [_displayName, displayNull];
if (isNull _display) exitWith {false};

private _backgroundPositionInfo = [_displayName] call cTab_fnc_getBackgroundPosition;
_backgroundPositionInfo params ["_currentBackgroundPosition", "_configBackgroundPosition"];

if (count _configBackgroundPosition < 4) exitWith {
    diag_log format ["[cTab UIP] Could not resolve background config position for %1.", _displayName];
    false
};

private _useAlternatePosition = [_displayName, "dspIfPosition"] call cTab_fnc_getSettings;
if (isNil "_useAlternatePosition") then {
    _useAlternatePosition = false;
};

private _configX = _configBackgroundPosition select 0;
private _configY = _configBackgroundPosition select 1;
private _configWidth = _configBackgroundPosition select 2;
private _alternateDefaultX = 2 * safeZoneX + safeZoneW - _configWidth - _configX;
private _profileKey = format ["IGUI_%1", _displayName];

private _primaryPosition = [
    profileNamespace getVariable [format ["%1_X", _profileKey], _configX],
    profileNamespace getVariable [format ["%1_Y", _profileKey], _configY]
];
private _alternatePosition = [
    profileNamespace getVariable [format ["%1_alt_X", _profileKey], _alternateDefaultX],
    profileNamespace getVariable [format ["%1_alt_Y", _profileKey], _configY]
];
private _targetPosition = [_primaryPosition, _alternatePosition] select _useAlternatePosition;
private _offset = [
    (_targetPosition select 0) - _configX,
    (_targetPosition select 1) - _configY
];

private _displayConfigContainers = "true" configClasses (configFile >> "RscTitles" >> _displayName);

{
    if (isClass _x) then {
        {
            if (isClass _x && {isNumber (_x >> "idc")}) then {
                private _idc = getNumber (_x >> "idc");

                if (_idc > 0) then {
                    private _control = _display displayCtrl _idc;

                    if !(isNull _control) then {
                        private _configuredPosition = [
                            getNumber (_x >> "x"),
                            getNumber (_x >> "y")
                        ];
                        private _newPosition = [
                            (_configuredPosition select 0) + (_offset select 0),
                            (_configuredPosition select 1) + (_offset select 1)
                        ];

                        _control ctrlSetPosition _newPosition;
                        _control ctrlCommit 0;
                    };
                };
            };
        } forEach ("true" configClasses _x);
    };
} forEach _displayConfigContainers;

true
