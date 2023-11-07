// Copyright 2021 QMK / NachoxMacho
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┌───┬───┬───┬───┐
     * │Mut│Esc│Tab│MO1│Bsp│
     * ├───┼───┼───┼───┼───┤
     * │ , │Num│ / │ * │ - │
     * ├───┼───┼───┼───┼───┤
     * │Gui│ 7 │ 8 │ 9 │   │
     * ├───┼───┼───┼───┤ + │
     * │Alt│ 4 │ 5 │ 6 │   │
     * ├───┼───┼───┼───┼───┤
     * │Shi│ 1 │ 2 │ 3 │   │
     * ├───┼───┴───┼───┤Ent│
     * │Ctr│ 0     │ . │   │
     * └───┴───────┴───┴───┘
     */
    [0] = LAYOUT(
        KC_MUTE,    KC_ESC,     KC_GRV,     MO(1),      KC_BSPC,
        MO(2),      KC_NUM,     KC_PSLS,    KC_PAST,    KC_PMNS,
        KC_TAB,     KC_P7,      KC_P8,      KC_P9,      KC_PPLS,
        KC_LALT,    KC_P4,      KC_P5,      KC_P6,      
        KC_LSFT,    KC_P1,      KC_P2,      KC_P3,      KC_PENT,
        KC_COMM,    KC_P0,                  KC_PDOT
    )
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU)  }
};
#endif
