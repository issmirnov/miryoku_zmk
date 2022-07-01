// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku
// generated -*- buffer-read-only: t -*-
// target: zmk

#pragma once




#define ZMK_COMBO_MAX_KEYS_PER_COMBO 4
#define ZMK_COMBO_MAX_COMBOS_PER_KEY 5
#define ZMK_COMBO_MAX_PRESSED_COMBOS 4

// Disable layer indicator widget.
// #define CONFIG_CUSTOM_WIDGET_LAYER_STATUS n


// Layer 0 is in main BEAKL config.

// Layer 1
#define MIRYOKU_ALTERNATIVES_BUTTON \
U_UND,             U_CUT,             U_CPY,             U_PST,             U_RDO,             U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         &none,             &none,             &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
U_UND,             U_CUT,             U_CPY,             U_PST,             U_RDO,             U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
U_NP,              U_NP,              U_BTN2,            U_BTN3,            U_BTN1,            U_BTN1,            U_BTN3,            U_BTN2,            U_NP,              U_NP

// Layer 2
#define MIRYOKU_ALTERNATIVES_NAV \
&bootloader,       U_NA,              U_NA,              U_NA,              U_NA,              U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,              &kp CAPS,          &kp LEFT,          &kp DOWN,          &kp UP,            &kp RIGHT,         \
U_NA,              &kp RALT,          U_NA,              U_NA,              U_NA,              &kp INS,           &kp HOME,          &kp PG_DN,         &kp PG_UP,         &kp END,           \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp RET,           &kp BSPC,          &kp DEL,           U_NP,              U_NP


// Layer 3
#define MIRYOKU_ALTERNATIVES_MOUSE \
&bootloader,       U_NA,              U_NA,              U_NA,              U_NA,              U_NA,              &kp DOT,           &kp SLASH,         &kp CARET,         &kp PERCENT,             \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,              &kp UNDERSCORE,    &kp COLON,         &kp TILDE,         &kp BACKSLASH,     &kp PIPE,            \
U_NA,              &kp RALT,          U_NA,              U_NA,              U_NA,              U_NA,              &kp HASH,          &kp GRAVE,         &kp ASTERISK,      U_NA,            \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              U_BTN1,            U_BTN3,            U_BTN2,            U_NP,              U_NP


// Layer 4
#define MIRYOKU_ALTERNATIVES_MEDIA \
&rgb_ug RGB_EFF,   &rgb_ug RGB_HUI,   &rgb_ug RGB_SAI,   &rgb_ug RGB_BRI,   &rgb_ug RGB_TOG,   U_NA,              U_NA,              U_NA,              U_NA,              &bootloader,       \
&kp C_PREV,        &kp C_VOL_DN,      &kp C_VOL_UP,      &kp C_NEXT,        &out OUT_TOG,      U_NA,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
&bt BT_SEL 0,      &bt BT_SEL 1,      &bt BT_SEL 2,      &bt BT_SEL 3,      &bt BT_CLR,        U_NA,              U_NA,              U_NA,              &kp RALT,          U_NA,              \
U_NP,              U_NP,              &kp C_MUTE,        &kp C_PP,          &kp C_STOP,        U_NA,              U_NA,              U_NA,              U_NP,              U_NP


// Layer 5
#define MIRYOKU_ALTERNATIVES_NUM \
&kp COLON,         &kp SLASH,         &kp COMMA,         &kp DOT,           &kp ASTERISK,      &kp COMMA,          &kp NUM_7,         &kp NUM_8,         &kp NUM_9,         &kp EQL,        \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,              &kp NUM_0,          &kp NUM_4,         &kp NUM_5,         &kp NUM_6,         U_NA,           \
&bootloader,       &kp RALT,          U_NA,              U_NA,              U_NA,              &kp DOT,            &kp NUM_1,         &kp NUM_2,         &kp NUM_3,         &kp ENTER,        \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp ENTER,          &kp NUM_0,         &kp DOT,           U_NP,              U_NP


// Layer 6
#define MIRYOKU_ALTERNATIVES_SYM \
&kp CARET,         &kp AT,           &kp EXCL,          &kp QMARK,         &kp PLUS,          U_NA,              U_NA,              U_NA,              U_NA,              &bootloader,       \
&kp COLON,         &kp MINUS,        &kp LPAR,          &kp RPAR,          &kp PIPE,          U_NA,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
&kp LESS_THAN,     &kp GREATER_THAN, &kp LBKT,          &kp RBKT,          &kp AMPERSAND,     U_NA,              U_NA,              U_NA,              &kp RALT,          U_NA,              \
U_NP,              U_NP,             &kp DOLLAR,        &kp EQL,         &kp SEMICOLON,     U_NA,              U_NA,              U_NA,              U_NP,              U_NP


// Layer 7
#define MIRYOKU_ALTERNATIVES_FUN \
&kp F12,           &kp F7,            &kp F8,            &kp F9,            &kp PSCRN,         U_NA,              U_NA,              U_NA,              U_NA,              &bootloader,       \
&kp F11,           &kp F4,            &kp F5,            &kp F6,            &kp SLCK,          U_NA,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
&kp F10,           &kp F1,            &kp F2,            &kp F3,            &kp PAUSE_BREAK,   U_NA,              U_NA,              U_NA,              &kp RALT,          U_NA,              \
U_NP,              U_NP,              &kp K_APP,         &kp SPC,           &kp TAB,           U_NA,              U_NA,              U_NA,              U_NP,              U_NP
