#include "..\script_component.hpp"

disableSerialization;
params ["_zoomFactor"];
private _dlgVector = GETUVAR(ACE_dlgVector, displayNull);

private _tens = (floor (_zoomFactor / 10)) mod 10;
private _ones = floor (_zoomFactor mod 10);

private _digit2 = "";
private _digit3 = "";
if (_tens > 0) then {
	_digit2 = format [QPATHTOF(rsc\vector_%1.paa), _tens];
	_digit3 = format [QPATHTOF(rsc\vector_%1.paa), _ones];
} else {
	_digit2 = format [QPATHTOF(rsc\vector_%1.paa), _ones];
};

(_dlgVector displayCtrl IDC_DIGIT_Z1) ctrlSetText QPATHTOF(rsc\vector_x.paa);
(_dlgVector displayCtrl IDC_DIGIT_Z2) ctrlSetText _digit2;
(_dlgVector displayCtrl IDC_DIGIT_Z3) ctrlSetText _digit3;

// [GVAR(illuminate)] call FUNC(illuminate);
