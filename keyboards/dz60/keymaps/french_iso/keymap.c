#include QMK_KEYBOARD_H
#include "../../../quantum/keymap_extras/keymap_french.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	LAYOUT_60_iso(
		KC_ESC,		FR_AMP,		FR_EACU,	FR_QUOT,	FR_APOS,	FR_LPRN,	FR_MINS,	FR_EGRV,	FR_UNDS,	FR_CCED,	FR_AGRV,	FR_RPRN,	FR_EQL,		KC_BSPC, \
		KC_TAB,		FR_A,		FR_Z,		KC_E,		KC_R,		KC_T,		KC_Y,		KC_U,		KC_I,		KC_O,		KC_P,		FR_CIRC,	FR_DLR, \
		KC_CAPS,	FR_Q,		KC_S,		KC_D,		KC_F,		KC_G,		KC_H,		KC_J,		KC_K,		KC_L,		FR_M,		FR_UGRV,	FR_ASTR,	KC_ENT, \
		MO(1),		FR_LESS,	FR_W,		KC_X,		KC_C,		KC_V,		KC_B,		KC_N,		FR_COMM,	FR_SCLN,	FR_COLN,	FR_EXLM,	KC_RSFT, \
		KC_LCTL,	KC_LGUI,	KC_LALT,									KC_SPC							  ,		MO(2),		KC_RGUI,	MO(3),		KC_RCTL),
		
	LAYOUT_60_iso(
		_______,	FR_1, 		FR_2, 		FR_3,		FR_4,		FR_5,		FR_6,		FR_7,		FR_8,		FR_9,		FR_0,		FR_OVRR, 	FR_PLUS,	_______, \
		_______, 	_______, 	_______, 	_______, 	_______, 	_______, 	_______, 	_______, 	_______, 	_______, 	_______,  	FR_UMLT,	FR_PND, \
		_______,  	_______, 	_______, 	_______,	_______,	_______,	_______,	_______,	_______, 	_______,	_______,	FR_PERC,	FR_MU,		_______, \
		_______, 	FR_GRTR,	_______, 	_______, 	_______, 	_______, 	_______, 	_______, 	FR_QUES, 	FR_DOT, 	FR_SLSH, 	FR_SECT,   	_______, \
		_______, 	_______,  	_______,    _______,    _______, 	_______,   	_______, 	_______),
		
	LAYOUT_60_iso(
		_______,	_______, 	FR_TILD, 	FR_HASH,	FR_LCBR,	FR_LBRC,	FR_PIPE,	FR_GRV,		FR_BSLS,	FR_CCIRC,	FR_AT,		FR_RBRC, 	FR_RCBR,	_______, \
		_______, 	_______, 	_______, 	FR_EURO, 	_______, 	_______, 	_______, 	_______, 	_______, 	_______, 	_______,  	_______,	FR_BULT, \
		_______,  	_______, 	_______, 	_______,	_______,	_______,	_______,	_______,	_______, 	_______,	_______,	_______,	_______,	_______, \
		_______, 	_______,	_______, 	_______, 	_______, 	_______, 	_______, 	_______, 	_______, 	_______, 	_______, 	_______,   	_______, \
		_______, 	_______,  	_______,    _______,    _______, 	_______,   	_______, 	_______),

	LAYOUT_60_iso(
		_______,	KC_F1, 		KC_F2, 		KC_F3,		KC_F4,		KC_F5,		KC_F6,		KC_F7,		KC_F8,		KC_F9,		KC_F10,		KC_F11,		KC_F12,		KC_DEL, \
		_______, 	_______, 	_______, 	_______, 	_______, 	_______, 	_______, 	_______, 	_______, 	_______, 	_______,  	_______, 	_______, \
		_______,  	_______, 	_______, 	_______,	_______,	_______,	_______,	_______,	_______, 	_______,	_______,	_______, 	_______,	_______, \
		_______, 	_______,	_______, 	_______, 	_______, 	_______, 	_______, 	_______, 	_______, 	_______, 	_______, 	_______,   	_______, \
		_______, 	_______,  	_______,    RESET,      _______, 	_______,   	_______, 	_______),
};