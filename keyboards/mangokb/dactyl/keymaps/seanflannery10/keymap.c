#include QMK_KEYBOARD_H

#define _COLEMAK_DH 0
#define _LOWER 1
#define _RAISE 2

#define RAISE OSL(_RAISE)
#define LOWER OSL(_LOWER)

#define OS_LSFT OSM(MOD_LSFT)
#define OS_RSFT OSM(MOD_RSFT)

#define MT_R LCTL_T(KC_R)
#define MT_S LALT_T(KC_S)
#define MT_T LGUI_T(KC_T)

#define MT_I RCTL_T(KC_I)
#define MT_E RALT_T(KC_E)
#define MT_N RGUI_T(KC_N)

#define COPY LGUI(KC_C)
#define PASTE LGUI(KC_V)
#define CUT LGUI(KC_X)
#define UNDO LGUI(KC_Z)
#define REDO LSG(KC_Z)
#define SALL LGUI(KC_A)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_COLEMAK_DH] = LAYOUT_5x6(
        KC_EQL , KC_1   , KC_2   , KC_3   , KC_4   , KC_5   ,                       KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , KC_MINS,
        KC_TAB , KC_Q   , KC_W   , KC_F   , KC_P   , KC_B   ,                       KC_J   , KC_L   , KC_U   , KC_Y   , KC_SCLN, KC_BSLS,
        KC_ESC , KC_A   , MT_R   , MT_S   , MT_T   , KC_G   ,                       KC_M   , MT_N   , MT_E   , MT_I   , KC_O   , KC_QUOT,
        OS_LSFT, KC_Z   , KC_X   , KC_C   , KC_D   , KC_V   ,                       KC_K   , KC_H   , KC_COMM, KC_DOT , KC_SLSH, OS_RSFT,
                          KC_GRV , KC_BSLS,                                                           KC_LBRC, KC_RBRC ,
                                            RAISE  , KC_BSPC, KC_HOME ,    KC_ENT , KC_SPC, LOWER  ,
                                                     KC_BSPC, KC_DEL  ,    KC_ENT , KC_SPC
    ),

    [_LOWER] = LAYOUT_5x6(
        KC_TILD, KC_EXLM, KC_AT  , KC_HASH, KC_DLR , KC_PERC,                       KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_DEL ,
        _______, _______, _______, _______, _______, _______,                       _______, KC_P7  , KC_P8  , KC_P9  , _______, _______,
        _______, _______, _______, _______, _______, _______,                       _______, KC_P4  , KC_P5  , KC_P6  , _______, _______,
        _______, _______, _______, _______, _______, _______,                       _______, KC_P1  , KC_P2  , KC_P3  , _______, _______,
                          _______, _______,                                                           KC_P0  , _______,
                                            _______, _______, _______,     _______, _______, _______,
                                                     _______, _______,     _______, _______
    ),

    [_RAISE] = LAYOUT_5x6(
        KC_F12 , KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  ,                       KC_F6  , KC_F7  , KC_F8  , KC_F9  , KC_F10 , KC_F11 ,
        _______, _______, _______, _______, _______, _______,                       _______, _______, _______, _______, _______, _______,
        _______, SALL   , CUT    , COPY   , PASTE  , _______,                       KC_LEFT, KC_DOWN, KC_UP  , KC_RGHT, _______, _______,
        _______, _______, _______, UNDO   , REDO   , _______,                       _______, _______, _______, _______, _______, _______,
                          _______, _______,                                                           CG_SWAP, CG_NORM,
                                            _______, _______, _______,     _______, _______, _______,
                                                     _______, _______,     _______, _______
    ),
};
