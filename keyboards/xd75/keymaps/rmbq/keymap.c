#include QMK_KEYBOARD_H

#if 0
//aliases for clarity in layering
#define A_BSPC  LALT(KC_BSPC) // delete whole word in Mac
#define C_BSPC  LCTL(KC_BSPC) // delete whole word in PC
#define A_LEFT  LALT(KC_LEFT)
#define A_RGHT  LALT(KC_RGHT)
#define C_RGHT  LCTL(KC_RGHT)
#define C_LEFT  LCTL(KC_LEFT)
#define SftEnt  SFT_T(KC_ENT)
#define BS_GUI  LGUI_T(KC_BSPC)
#define BS_CTL  LCTL_T(KC_BSPC)

// internet browser tab shortcuts and window/application swapping for Mac and Win
#define GSL     LGUI(S(KC_LEFT)) // back one tab in Safari
#define GSR     LGUI(S(KC_RGHT)) // forward one tab in Safari
#define CTLPGDN LCTL(KC_PGDN)   // back one tab on Windows
#define CTLPGUP LCTL(KC_PGUP)   // forward one tab on Windows
#define G_TAB   LGUI(KC_TAB)    // Mac: switch applications
#define G_GRV   LGUI(KC_GRV)    // Mac: switch between windows within an application
#define A_TAB   LALT(KC_TAB)
#define C_TAB   LCTL(KC_TAB)

// navigation layers for both Mac OS X and Windows
#define NAV     LT(4, KC_TAB)
#define NAVPC   LT(5, KC_TAB)
#endif

#define A_BSPC  LALT(KC_BSPC)
#define A_DEL   LALT(KC_D) // delete whole word in PC
#define CL_L    LALT(LSFT(KC_1)) //Close Tabs Shortcuts firefox addon. Close left
#define CL_R    LALT(LSFT(KC_2)) //Close Tabs Shortcuts firefox addon. Close right
#define CL_O    LALT(KC_W) //Close Tabs Shortcuts firefox addon. Close others


// Layer shorthand
#define _C  0
#define _Q  1
#define SMB 2

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* COLEMAK
 * .--------------------------------------------------------------------------------------------------------------------------------------.
 * | ESC    | 1      | 2      | 3      | 4      | 5      | -_     |   `~   | =+     | 6      | 7      | 8      | 9      | 0      | BACKSP |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------|
 * | TAB    | Q      | W      | F      | P      | G      | [      |   \|   | ]      | J      | L      | U      | Y      | ;      | DEL    |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------+--------|
 * | CAPS   | A      | R      | S      | T      | D      | PgUp   | Print  | HOME   | H      | N      | E      | I      | O      | ' "    |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------------------------+--------|
 * | SFT    | Z      | X      | C      | V      | B      | PgDn   |  UP    | END    | K      | M      | ,      | .      | /      | ENTER  |
 * |--------+--------+--------+--------+--------+-----------------+--------+--------+--------+--------+-----------------+--------+--------|
 * | LCTRL  | LGUI   | LALT   | FN1    | SPACE  | SPACE  | LEFT   | DOWN   | RIGHT  | SPACE  | SPACE  | SPACE  | RALT   | RCTRL  | SFT    |
 * '--------------------------------------------------------------------------------------------------------------------------------------'
 */

 [_C] = LAYOUT_ortho_5x15(
   KC_ESC , KC_1,    KC_2,    KC_3,    KC_4,    KC_5,   KC_MINS, KC_GRV , KC_EQL,  KC_6,   KC_7,   KC_8,    KC_9,    KC_0,    KC_BSPC,
   KC_TAB , KC_Q,    KC_W,    KC_F,    KC_P,    KC_G,   KC_LBRC, KC_BSLS, KC_RBRC, KC_J,   KC_L,   KC_U,    KC_Y,    KC_SCLN, KC_DEL ,
   KC_CAPS, KC_A,    KC_R,    KC_S,    KC_T,    KC_D,   KC_PGUP, KC_PSCR, KC_HOME, KC_H,   KC_N,   KC_E,    KC_I,    KC_O,    KC_QUOT,
   KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,   KC_PGDN, KC_UP  , KC_END , KC_K,   KC_M,   KC_COMM, KC_DOT,  KC_SLSH, KC_ENT ,
   KC_LCTL, KC_LGUI, KC_LALT, MO(SMB), KC_SPC , KC_SPC, KC_LEFT, KC_DOWN, KC_RGHT, KC_SPC, KC_SPC, KC_SPC , KC_RALT, KC_RCTL, KC_RSFT
 ),
/* QWERTY
 * .--------------------------------------------------------------------------------------------------------------------------------------.
 * | ESC    | 1      | 2      | 3      | 4      | 5      | -_     |   `~   | =+     | 6      | 7      | 8      | 9      | 0      | BACKSP |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------|
 * | TAB    | Q      | W      | E      | R      | T      | [      |   \|   | ]      | Y      | U      | I      | O      | P      | DEL    |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------+--------|
 * | CAPS   | A      | S      | D      | F      | G      | PgUp   | Print  | HOME   | H      | J      | K      | L      | ;      | ' "    |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------------------------+--------|
 * | SFT    | Z      | X      | C      | V      | B      | PgDn   |  UP    | END    | N      | M      | ,      | .      | /      | ENTER  |
 * |--------+--------+--------+--------+--------+-----------------+--------+--------+--------+--------+-----------------+--------+--------|
 * | LCTRL  | LGUI   | LALT   | FN1    | SPACE  | SPACE  | LEFT   | DOWN   | RIGHT  | SPACE  | SPACE  | SPACE  | RALT   | RCTRL  | SFT    |
 * '--------------------------------------------------------------------------------------------------------------------------------------'
 */

 [_Q] = LAYOUT_ortho_5x15(
   KC_ESC , KC_1,    KC_2,    KC_3,    KC_4,    KC_5,   KC_MINS, KC_GRV , KC_EQL,  KC_6,   KC_7,   KC_8,    KC_9,    KC_0,    KC_BSPC,
   KC_TAB , KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,   KC_LBRC, KC_BSLS, KC_RBRC, KC_Y,   KC_U,   KC_I,    KC_O,    KC_P,    KC_DEL ,
   KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,   KC_PGUP, KC_PSCR, KC_HOME, KC_H,   KC_J,   KC_K,    KC_L,    KC_SCLN, KC_QUOT,
   KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,   KC_PGDN, KC_UP  , KC_END , KC_N,   KC_M,   KC_COMM, KC_DOT,  KC_SLSH, KC_ENT ,
   KC_LCTL, KC_LGUI, KC_LALT, MO(SMB), KC_SPC , KC_SPC, KC_LEFT, KC_DOWN, KC_RGHT, KC_SPC, KC_SPC, KC_SPC,  KC_RALT, KC_RCTL, KC_RSFT
 ),
/* SYMBOL
 * .--------------------------------------------------------------------------------------------------------------------------------------.
 * | F12    | F1     | F2     | F3     | F4     | F5     | F11    | F12    |        | F6     | F7     | F8     | F9     | F10    | A_BSPC |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |TG(_Q)  |        |        |        |        |        |        |        |        |        |        |        |        |        | A_DEL  |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |        | RESET  |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |
 * '--------------------------------------------------------------------------------------------------------------------------------------'
 */
 [SMB] = LAYOUT_ortho_5x15(
   _______, KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  , KC_F11 , KC_F12 , _______, KC_F6  , KC_F7  , KC_F8  , KC_F9  , KC_F10 , A_BSPC ,
   TG(_Q) , CL_L   , CL_O   , CL_R   , _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, A_DEL  ,
   _______, _______, _______, _______, _______, _______, _______, RESET  , _______, _______, _______, _______, _______, _______, _______,
   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
 ),
};

