#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌─────┬────┬───┬───┐
     * │ Esc │ 1  │ 2 │ 3 │
     * ├─────┼────┼───┼───┤
     * │Shift│ a  │ s │ d │
     * ├─────┼────┼───┼───┤
     * │Ctrl │ z  │ x │ c │
     * ├─────┼────┼───┼───┤
     * │     │Alt │   │   │
     * └─────┴────┴───┴───┘
     */
    [0] = LAYOUT_ortho_4x4(
        KC_ESC ,   KC_1   ,   KC_2,   KC_3,
        KC_LSFT,   KC_A   ,   KC_S,   KC_D,
        KC_LCTL,   KC_Z   ,   KC_X,   KC_C,
        _______,   KC_LALT,   _______,   _______
    )
};
