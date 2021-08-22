#include QMK_KEYBOARD_H
#include "muse.h"

/* Windows shorts */
#define KC_CAD LALT(LCTL(KC_DEL))

/* macOS shorts */
#define KC_MC LGUI(LCTL(LSFT(KC_COMM)))
#define KC_MC_LEFT LGUI(LCTL(KC_COMM))
#define KC_MC_RIGHT LGUI(LCTL(KC_DOT))
#define KC_ITERM_TOGGLE LGUI(LCTL(LSFT(KC_DOT)))

/* Custom macros */

enum custom_keycodes {
    TEST_MACRO = SAFE_RANGE,
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
    case TEST_MACRO:
        if (record->event.pressed) {
            // when keycode is pressed
            SEND_STRING("Hakkapeliitta\n");
        } else {
            // when keycode is released
        }
        break;
    }
    return true;
};


/* Keymap */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {


/* Default layer */
[0] = LAYOUT_ortho_4x12(
		KC_ESC, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC,
		KC_TAB, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT,
		KC_LSFT, KC_COMM, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_BSPC,
		MO(7), KC_LCTL, KC_LALT, KC_LGUI, MO(4), KC_SPC, KC_SPC, MO(3), KC_NO, KC_LEFT, KC_RGHT, KC_ENT
		),

/* Not used */
[1] = LAYOUT_ortho_4x12(
		KC_TAB, KC_Q, KC_W, KC_F, KC_P, KC_G, KC_J, KC_L, KC_U, KC_Y, KC_SCLN, KC_BSPC,
		KC_ESC, KC_A, KC_R, KC_S, KC_T, KC_D, KC_H, KC_N, KC_E, KC_I, KC_O, KC_QUOT,
		KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_K, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_ENT,
		BL_STEP, KC_LCTL, KC_LALT, KC_LGUI, MO(3), KC_SPC, KC_SPC, MO(4), KC_LEFT, KC_DOWN, KC_UP, KC_RGHT),

/* Not used */
[2] = LAYOUT_ortho_4x12(
		KC_TAB, KC_QUOT, KC_COMM, KC_DOT, KC_P, KC_Y, KC_F, KC_G, KC_C, KC_R, KC_L, KC_BSPC,
	       	KC_ESC, KC_A, KC_O, KC_E, KC_U, KC_I, KC_D, KC_H, KC_T, KC_N, KC_S, KC_SLSH,
		KC_LSFT, KC_SCLN, KC_Q, KC_J, KC_K, KC_X, KC_B, KC_M, KC_W, KC_V, KC_Z, KC_ENT,
	       	BL_STEP, KC_LCTL, KC_LALT, KC_LGUI, MO(3), KC_SPC, KC_SPC, MO(4), KC_LEFT, KC_DOWN, KC_UP, KC_RGHT),

/* LAYER 3, FN/SHIFT */
[3] = LAYOUT_ortho_4x12(
		KC_AT, KC_EXLM, RALT(KC_2), KC_HASH, KC_DLR, KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, LSFT(KC_MINS), RSFT(KC_RBRC),
		KC_NUHS, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, LSA(KC_7), RALT(KC_8), RALT(KC_9), KC_NUBS, KC_NO,
	  	KC_TRNS, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_NO, LSA(KC_8), LSA(KC_9), LSFT(KC_NUBS), KC_SLSH,
	  	KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, MO(6), KC_TRNS, KC_TRNS, KC_TRNS, KC_MNXT, KC_VOLD, KC_VOLU, KC_MPLY),

/* LAYER 4, NUMROW LAYER */
[4] = LAYOUT_ortho_4x12(
		KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_NO,
	  	KC_NO, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_NO, KC_EQL, KC_NO, KC_NO, KC_NO,
		KC_TRNS, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, MO(6), KC_MNXT, KC_VOLD, KC_VOLU, KC_MPLY),

/* Not used */
[5] = LAYOUT_ortho_4x12(
		KC_1, KC_1, KC_1, KC_1, KC_1, KC_1, KC_1, KC_1, KC_1, KC_1, KC_1, KC_1,
		KC_NO, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC,
		KC_NO, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT,
		TO(0), KC_NO, KC_NO, KC_C, KC_V, KC_NO, KC_NO, KC_N, KC_M, KC_NO, KC_NO, KC_NO),

/* Not used */
[6] = LAYOUT_ortho_4x12(
		KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
		KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS,
		KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

/* LAYER 7, NUMPAD LAYER */
[7] = LAYOUT_ortho_4x12(
		KC_NO, KC_MC, KC_MC_LEFT, KC_MC_RIGHT, KC_NO, KC_NO, KC_NO, KC_NO, KC_7, KC_8, KC_9, KC_PSLS,
		KC_NO, KC_ITERM_TOGGLE, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_4, KC_5, KC_6, KC_PAST,
		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_1, KC_2, KC_3, KC_PMNS,
		KC_TRNS, KC_NO, KC_NO, KC_NO, MO(8), KC_NO, KC_NO, KC_NO, KC_0, KC_COMM, RSFT(KC_0), KC_PPLS),

/* LAYER 8, ARROW KEYS AND PGUP/PGDN */
[8] = LAYOUT_ortho_4x12(
		KC_CAD, KC_NO, KC_NO, KC_NO, RESET, KC_NO, KC_NO, KC_NO, KC_NO, KC_INS, KC_HOME, KC_PGUP,
		TEST_MACRO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_DEL, KC_END, KC_PGDN,
		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_UP, KC_NO,
		KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_LEFT, KC_DOWN, KC_RGHT)
};
