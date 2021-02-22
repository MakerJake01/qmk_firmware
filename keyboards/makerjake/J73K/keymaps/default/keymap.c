/* Copyright 2020 MakerJake
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H

// Defines names for use in layer keycodes and the keymap

// Defines the keycodes used by our macros in process_record_user

enum unicode_names {
    BANG,
    IRONY,
    SNEK,
    MACABIG,
    MACASMALL,
    MACEBIG,
    MACESMALL,
    MACIBIG,
    MACISMALL,
    MACOBIG,
    MACOSMALL,
    MACUBIG,
    MACUSMALL,
    CIRCBIG,
    CIRCSMALL,
    CIRGBIG,
    CIRGSMALL,
    CIRHBIG,
    CIRHSMALL,
    CIRJBIG,
    CIRJSMALL,
    CIRSBIG,
    CIRSSMALL,
    BREUBIG,
    BREUSMALL
};

const uint32_t PROGMEM unicode_map[] = {
    [BANG]  = 0x203D,  // ‽
    [IRONY] = 0x2E2E,  // ⸮
    [SNEK]  =    0x1F40D, // 🐍
    [MACABIG]  =  0x100, // Ā
    [MACASMALL] = 0x101, 
    [MACEBIG]  =  0x112,
    [MACESMALL] = 0x113,
    [MACIBIG]   = 0x12A,
    [MACISMALL] = 0x12B,
    [MACOBIG]   = 0x14C,
    [MACOSMALL] = 0x14D,
    [MACUBIG]   = 0x1D5,
    [MACUSMALL] = 0x1D6,
    [CIRCBIG]   = 0x108,
    [CIRCSMALL] = 0x109,
    [CIRGBIG]   = 0x11C,
    [CIRGSMALL] = 0x11D,
    [CIRHBIG]   = 0x124,
    [CIRHSMALL] = 0x125,
    [CIRJBIG]   = 0x134,
    [CIRJSMALL] = 0x135,
    [CIRSBIG]   = 0x15C,
    [CIRSSMALL] = 0x15C,
    [BREUBIG]   = 0x16C,
    [BREUSMALL] = 0x16D

};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_MINS, KC_GRAVE, KC_EQL,  KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_LBRC, KC_BSLS, KC_RBRC, KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_QUOT,
        KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_HOME, KC_DEL,  KC_PGUP, KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_ENT,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_END,  KC_UP  , KC_PGDN, KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
        KC_LCTL, KC_LGUI, KC_LALT, MO(1), KC_SPC,           KC_LEFT, KC_DOWN, KC_RIGHT, KC_SPC,           MO(2), KC_RALT, KC_RGUI, KC_RCTL
    ),
    [1] = LAYOUT(
        KC_TRNS,  X(BANG),                 X(SNEK),                     KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_KP_MINUS, KC_KP_SLASH, KC_PPLS , KC_TRNS,    KC_TRNS,   KC_TRNS,                KC_TRNS,    KC_TRNS,    KC_DEL,
        KC_TRNS,  KC_TRNS,                 KC_VOLU,       XP(MACESMALL,MACEBIG),    KC_TRNS,    KC_TRNS,    KC_KP_7,        KC_KP_8,       KC_KP_9,     KC_TRNS,    XP(MACUSMALL,MACUBIG),    XP(MACISMALL,MACIBIG),   XP(MACOSMALL,MACOBIG),    KC_TRNS,    KC_TRNS,
        KC_TRNS,  XP(MACASMALL,MACABIG),   KC_VOLD,                     KC_MPLY,    KC_TRNS,    KC_TRNS,    KC_KP_4,        KC_KP_5,       KC_KP_6,     KC_TRNS,    KC_TRNS,    KC_TRNS,                 KC_TRNS,    KC_TRNS,    KC_TRNS,
        KC_TRNS,  KC_TRNS,                 KC_TRNS,                     KC_TRNS,    KC_TRNS,     KC_TRNS,   KC_KP_1,        KC_KP_2,       KC_KP_3,     KC_TRNS,    KC_TRNS,    KC_TRNS,                 KC_TRNS,    KC_TRNS,    KC_TRNS,
        KC_TRNS,  KC_TRNS,                 KC_TRNS,                     KC_TRNS,    KC_TRNS,                KC_KP_0,        KC_KP_0,       KC_DOT,   KC_TRNS,                KC_TRNS,                  KC_TRNS,    KC_TRNS,    KC_TRNS
    ),
    [2] = LAYOUT(
        KC_TRNS,  KC_F1,      KC_F2,                    KC_F3,                     KC_F4,     KC_F5,                   KC_F6, KC_TRNS, KC_F7 ,     KC_F8,                      KC_F9,                 KC_F10,    KC_F11,    KC_F12,        KC_DEL,
        KC_TRNS,  KC_TRNS,    KC_TRNS,                  KC_TRNS,                  KC_TRNS,    KC_TRNS,                 KC_KP_7,    KC_KP_8,    KC_KP_9,     KC_TRNS,                    XP(BREUSMALL,BREUBIG),               KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,
        KC_TRNS,  KC_TRNS,    XP(CIRSSMALL,CIRSBIG),    KC_TRNS,                  KC_TRNS,    XP(CIRGSMALL,CIRGBIG),   KC_KP_4,    KC_KP_5,    KC_KP_6,     XP(CIRHSMALL,CIRHSMALL),    XP(CIRJSMALL,CIRJBIG), KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,
        KC_TRNS,  KC_TRNS,    KC_TRNS,                  XP(CIRCSMALL,CIRCBIG),    KC_TRNS,    KC_TRNS,                 KC_KP_1,    KC_KP_2,    KC_KP_3,     KC_TRNS,                    KC_TRNS,               KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,
        KC_TRNS,  KC_TRNS,    KC_TRNS,                  KC_TRNS,                  KC_TRNS,                             KC_KP_0,    KC_KP_0,    KC_KP_DOT,   KC_TRNS,                                           KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS
    )

};


 