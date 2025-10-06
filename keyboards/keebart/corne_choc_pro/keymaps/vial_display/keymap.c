#include QMK_KEYBOARD_H

#ifdef OLED_ENABLE
#include "bitmaps.h"
#endif

enum layer_names {
    _BASE   = 0,
    _LOWER  = 1,
    _RAISE  = 2,
    _ADJUST = 3
};

#ifdef LAYOUT_split_3x6_3_ex2
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT_split_3x6_3_ex2(
        //,--------------------------------------------------------------.
        //,--------------------------------------------------------------.
        KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_LCTL, KC_RCTL, KC_Y, KC_U,
        KC_I, KC_O, KC_P, KC_BSPC,
        //|--------+--------+--------+--------+--------+--------+--------|
        //|--------+--------+--------+--------+--------+--------+--------|
        KC_LCTL, KC_A, KC_S, KC_D, KC_F, KC_G, KC_LALT, KC_RALT, KC_H, KC_J,
        KC_K, KC_L, KC_SCLN, KC_QUOT,
        //|--------+--------+--------+--------+--------+--------+--------'
        //`--------+--------+--------+--------+--------+--------+--------|
        KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT,
        KC_SLSH, KC_ESC,
        //|--------+--------+--------+--------+--------+--------+--------.
        //,--------+--------+--------+--------+--------+--------+--------|
        KC_LGUI, TL_LOWR, KC_SPC, KC_ENT, TL_UPPR, KC_RGUI
        //`--------------------------'  `--------------------------'

        ),

    [_LOWER] = LAYOUT_split_3x6_3_ex2(
        //,--------------------------------------------------------------.
        //,--------------------------------------------------------------.
        KC_TAB, KC_1, KC_2, KC_3, KC_4, KC_5, KC_LCTL, KC_RCTL, KC_6, KC_7,
        KC_8, KC_9, KC_0, KC_BSPC,
        //|--------+--------+--------+--------+--------+--------+--------|
        //|--------+--------+--------+--------+--------+--------+--------|
        KC_LCTL, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_LALT, KC_RALT,
        KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT, XXXXXXX, XXXXXXX,
        //|--------+--------+--------+--------+--------+--------+--------'
        //`--------+--------+--------+--------+--------+--------+--------|
        KC_LSFT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        //|--------+--------+--------+--------+--------+--------+--------.
        //,--------+--------+--------+--------+--------+--------+--------|
        KC_LGUI, _______, KC_SPC, KC_ENT, _______, KC_RGUI
        //`--------------------------'  `--------------------------'
        ),

    [_RAISE] = LAYOUT_split_3x6_3_ex2(
        //,--------------------------------------------------------------.
        //,--------------------------------------------------------------.
        KC_TAB, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_LCTL, KC_RCTL,
        KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_BSPC,
        //|--------+--------+--------+--------+--------+--------+--------|
        //|--------+--------+--------+--------+--------+--------+--------|
        KC_LCTL, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_LALT, KC_RALT,
        KC_MINS, KC_EQL, KC_LBRC, KC_RBRC, KC_BSLS, KC_GRV,
        //|--------+--------+--------+--------+--------+--------+--------'
        //`--------+--------+--------+--------+--------+--------+--------|
        KC_LSFT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_UNDS, KC_PLUS,
        KC_LCBR, KC_RCBR, KC_PIPE, KC_TILD,
        //|--------+--------+--------+--------+--------+--------+--------.
        //,--------+--------+--------+--------+--------+--------+--------|
        KC_LGUI, _______, KC_SPC, KC_ENT, _______, KC_RGUI
        //`--------------------------'  `--------------------------'
        ),

    [_ADJUST] = LAYOUT_split_3x6_3_ex2(
        //,--------------------------------------------------------------.
        //,--------------------------------------------------------------.
        QK_BOOT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        //|--------+--------+--------+--------+--------+--------+--------|
        //|--------+--------+--------+--------+--------+--------+--------|
        RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        //|--------+--------+--------+--------+--------+--------+--------'
        //`--------+--------+--------+--------+--------+--------+--------|
        RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        //|--------+--------+--------+--------+--------+--------+--------.
        //,--------+--------+--------+--------+--------+--------+--------|
        KC_LGUI, _______, KC_SPC, KC_ENT, _______, KC_RGUI
        //`--------------------------'  `--------------------------'
        )};
#else
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT_split_3x6_3(
        //,-----------------------------------------------------.
        //,-----------------------------------------------------.
        KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P,
        KC_BSPC,
        //|--------+--------+--------+--------+--------+--------|
        //|--------+--------+--------+--------+--------+--------|
        KC_LCTL, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN,
        KC_QUOT,
        //|--------+--------+--------+--------+--------+--------|
        //|--------+--------+--------+--------+--------+--------|
        KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT,
        KC_SLSH, KC_ESC,
        //|--------+--------+--------+--------+--------+--------+--------|
        //|--------+--------+--------+--------+--------+--------+--------|
        KC_LGUI, TL_LOWR, KC_SPC, KC_ENT, TL_UPPR, KC_RALT
        //`--------------------------'  `--------------------------'

        ),

    [_LOWER] = LAYOUT_split_3x6_3(
        //,-----------------------------------------------------.
        //,-----------------------------------------------------.
        KC_TAB, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0,
        KC_BSPC,
        //|--------+--------+--------+--------+--------+--------|
        //|--------+--------+--------+--------+--------+--------|
        KC_LCTL, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_LEFT, KC_DOWN,
        KC_UP, KC_RIGHT, XXXXXXX, XXXXXXX,
        //|--------+--------+--------+--------+--------+--------|
        //|--------+--------+--------+--------+--------+--------|
        KC_LSFT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        //|--------+--------+--------+--------+--------+--------+--------|
        //|--------+--------+--------+--------+--------+--------+--------|
        KC_LGUI, _______, KC_SPC, KC_ENT, _______, KC_RALT
        //`--------------------------'  `--------------------------'
        ),

    [_RAISE] = LAYOUT_split_3x6_3(
        //,-----------------------------------------------------.
        //,-----------------------------------------------------.
        KC_TAB, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_CIRC, KC_AMPR,
        KC_ASTR, KC_LPRN, KC_RPRN, KC_BSPC,
        //|--------+--------+--------+--------+--------+--------|
        //|--------+--------+--------+--------+--------+--------|
        KC_LCTL, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_MINS, KC_EQL,
        KC_LBRC, KC_RBRC, KC_BSLS, KC_GRV,
        //|--------+--------+--------+--------+--------+--------|
        //|--------+--------+--------+--------+--------+--------|
        KC_LSFT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_UNDS, KC_PLUS,
        KC_LCBR, KC_RCBR, KC_PIPE, KC_TILD,
        //|--------+--------+--------+--------+--------+--------+--------|
        //|--------+--------+--------+--------+--------+--------+--------|
        KC_LGUI, _______, KC_SPC, KC_ENT, _______, KC_RALT
        //`--------------------------'  `--------------------------'
        ),

    [_ADJUST] = LAYOUT_split_3x6_3(
        //,-----------------------------------------------------.
        //,-----------------------------------------------------.
        QK_BOOT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        //|--------+--------+--------+--------+--------+--------|
        //|--------+--------+--------+--------+--------+--------|
        RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        //|--------+--------+--------+--------+--------+--------|
        //|--------+--------+--------+--------+--------+--------|
        RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        //|--------+--------+--------+--------+--------+--------+--------|
        //|--------+--------+--------+--------+--------+--------+--------|
        KC_LGUI, _______, KC_SPC, KC_ENT, _______, KC_RALT
        //`--------------------------'  `--------------------------'
        )};
#endif

#ifdef ENCODER_MAP_ENABLE
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [_BASE] =
        {
            ENCODER_CCW_CW(RGB_MOD, RGB_RMOD),
            ENCODER_CCW_CW(RGB_HUI, RGB_HUD),
            ENCODER_CCW_CW(RGB_VAI, RGB_VAD),
            ENCODER_CCW_CW(RGB_SAI, RGB_SAD),
        },
    [_LOWER] =
        {
            ENCODER_CCW_CW(RGB_MOD, RGB_RMOD),
            ENCODER_CCW_CW(RGB_HUI, RGB_HUD),
            ENCODER_CCW_CW(RGB_VAI, RGB_VAD),
            ENCODER_CCW_CW(RGB_SAI, RGB_SAD),
        },
    [_RAISE] =
        {
            ENCODER_CCW_CW(RGB_MOD, RGB_RMOD),
            ENCODER_CCW_CW(RGB_HUI, RGB_HUD),
            ENCODER_CCW_CW(RGB_VAI, RGB_VAD),
            ENCODER_CCW_CW(RGB_SAI, RGB_SAD),
        },
    [_ADJUST] =
        {
            ENCODER_CCW_CW(RGB_MOD, RGB_RMOD),
            ENCODER_CCW_CW(RGB_HUI, RGB_HUD),
            ENCODER_CCW_CW(RGB_VAI, RGB_VAD),
            ENCODER_CCW_CW(RGB_SAI, RGB_SAD),
        },
};
#endif

#ifdef OLED_ENABLE

static const uint8_t OLED_WIDTH = OLED_DISPLAY_HEIGHT;
static const uint16_t SPLASH_DURATION_MS = 2500;
static const uint32_t WPM_WINDOW_MS = 30000;

#define WPM_BUFFER_SIZE 512  // must be power of 2

static uint8_t g_oled_max_char;
static uint8_t g_oled_max_line;
static bool splash_active = true;
static uint32_t splash_start_ms = 0;
static uint16_t g_last_keycode = KC_NO;
static uint32_t g_press_left = 0;
static uint32_t g_press_right = 0;
static uint32_t ts_buf[WPM_BUFFER_SIZE];
static uint16_t ts_head = 0;
static uint16_t ts_tail = 0;

void oled_print_right_aligned(const char *text, const uint8_t width) {
    uint8_t len = strlen(text);
    uint8_t pad = (len < width) ? (width - len) : 0;
    for (uint8_t i = 0; i < pad; i++) {
        oled_write_P(PSTR(" "), false);
    }
    oled_write(text, false);
}

void oled_blit_16x16_P(const char *icon, uint8_t x, uint8_t page) {
    for (uint8_t i = 0; i < 16; i++) {
        char top = pgm_read_byte(&icon[i]);         // column i, top 8 pixels
        char bot = pgm_read_byte(&icon[16 + i]);    // column i, bottom 8 pixels

        // write into linear framebuffer at (page, x+i) and (page+1, x+i)
        oled_write_raw_byte(top, page       * OLED_WIDTH + x + i);
        oled_write_raw_byte(bot, (page + 1) * OLED_WIDTH + x + i);
    }
}

void oled_blit_24x24_P(const char *icon, uint8_t x, uint8_t page) {
    for (uint8_t i = 0; i < 24; i++) {
        char top = pgm_read_byte(&icon[i]);         // column i, top 8 pixels
        char mid = pgm_read_byte(&icon[24 + i]);    // column i, middle 8 pixels
        char bot = pgm_read_byte(&icon[48 + i]);    // column i, bottom 8 pixels

        // write into linear framebuffer
        oled_write_raw_byte(top, page       * OLED_WIDTH + x + i);
        oled_write_raw_byte(mid, (page + 1) * OLED_WIDTH + x + i);
        oled_write_raw_byte(bot, (page + 2) * OLED_WIDTH + x + i);
    }
}

uint16_t unwrap_keycode(uint16_t kc) {
    if (kc >= QK_MOD_TAP && kc <= QK_MOD_TAP_MAX) {
        return QK_MOD_TAP_GET_TAP_KEYCODE(kc);
    }
    if (kc >= QK_LAYER_TAP && kc <= QK_LAYER_TAP_MAX) {
        return QK_LAYER_TAP_GET_TAP_KEYCODE(kc);
    }
    return kc;
}

static inline bool buf_empty(void) {
    return ts_head == ts_tail;
}
static inline uint16_t buf_len(void) {
    return (ts_head - ts_tail) & (WPM_BUFFER_SIZE - 1);
}
static inline void buf_push(uint32_t t) {
    ts_buf[ts_head] = t;
    ts_head = (ts_head + 1) & (WPM_BUFFER_SIZE - 1);
    if (ts_head == ts_tail) {
        // buffer full, drop the oldest
        ts_tail = (ts_tail + 1) & (WPM_BUFFER_SIZE - 1);
    }
}
static inline uint32_t buf_front(void) {
    return ts_buf[ts_tail];
}
static inline void buf_pop(void) {
    ts_tail = (ts_tail + 1) & (WPM_BUFFER_SIZE - 1);
}

bool is_printable(uint16_t kc) {
    kc = unwrap_keycode(kc);
    if ((kc >= KC_A && kc <= KC_Z) || (kc >= KC_1 && kc <= KC_0)) {
        return true;
    }
    switch (kc) {
        case KC_SPC: case KC_TAB: case KC_ENT: case KC_BSPC:
        case KC_MINS: case KC_EQL: case KC_LBRC: case KC_RBRC:
        case KC_BSLS: case KC_SCLN: case KC_QUOT: case KC_GRV:
        case KC_COMM: case KC_DOT: case KC_SLSH:
            return true;
        default:
            return false;
    }
}

uint16_t dwpm_current(void) {
    const uint32_t now = timer_read32();
    // drop timestamps older than WPM_WINDOW_MS
    while (!buf_empty() && (uint32_t)(now - buf_front()) > WPM_WINDOW_MS) {
        buf_pop();
    }
    uint16_t presses = buf_len();
    // WPM = (presses / 5) / (minutes)
    uint16_t dwpm = (uint16_t)(((uint32_t)presses * 60000u * 10u) / (5u * WPM_WINDOW_MS));
    if (dwpm > 9999u) {
        dwpm = 9999u;
    }
    return dwpm;
}

void print_current_layer(uint8_t row) {
    char layer_str[8];
    switch (get_highest_layer(layer_state)) {
        case _BASE:
            strcpy(layer_str, "Base");
            break;
        case _LOWER:
            strcpy(layer_str, "Lower");
            break;
        case _RAISE:
            strcpy(layer_str, "Raise");
            break;
        case _ADJUST:
            strcpy(layer_str, "Adjust");
            break;
        default:
            // strcpy(layer_str, "Unknown");
            // TODO: consider remove snprintf
            snprintf(layer_str, sizeof(layer_str), "%d", get_highest_layer(layer_state));
    }

    oled_set_cursor(0, row);
    oled_print_right_aligned(layer_str, g_oled_max_char);
}

void print_uptime(uint8_t row) {
    uint32_t time_ms = timer_read32();
    uint32_t total_min = time_ms / 60000u;
    uint32_t hours = total_min / 60u;
    uint32_t minutes = total_min % 60u;
    if (hours > 999u) {
        hours = 999u;
        minutes = 59u;
    }

    // TODO: Consider remove snprintf
    char buf[8];
    snprintf(buf, sizeof(buf), "%3luh%02lum", hours, minutes);
    oled_set_cursor(0, row);
    oled_print_right_aligned(buf, g_oled_max_char);
}

void print_wpm(uint8_t row) {
    uint16_t wpm = dwpm_current();
    uint16_t wpm_int = wpm / 10u;
    uint16_t wpm_frac = wpm % 10u;

    char buf[11];
    snprintf(buf, sizeof(buf), "%3u.%1u WPM", wpm_int, wpm_frac);
    oled_set_cursor(0, row);
    oled_print_right_aligned(buf, g_oled_max_char);
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed) {
        // store the last keycode pressed
        g_last_keycode = keycode;
        uint8_t col = record->event.key.col;
        if (col < MATRIX_COLS) {
            g_press_left++;
        } else {
            g_press_right++;
        }

        if (is_printable(keycode)) {
            buf_push(timer_read32());
        }
    }
    return true;
}

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    return OLED_ROTATION_90;
}

static void render_splash(void) {
    oled_clear();
    oled_set_cursor(0, 0);
    oled_write_raw_P(STARTUP_BITMAP, sizeof(STARTUP_BITMAP));
}

bool oled_task_user(void) {
    if (splash_active) {
        g_oled_max_char = oled_max_chars();
        g_oled_max_line = oled_max_lines();

        if (timer_elapsed32(splash_start_ms) > SPLASH_DURATION_MS) {
            splash_active = false;
            oled_clear();
        } else {
            render_splash();
            return false;
        }
    }

    if (is_keyboard_left()) {
        // Layer state
        oled_set_cursor(0, 0);
        oled_write_P(PSTR("Layer:"), false);
        print_current_layer(1);

        // Lock status
        led_t led_state = host_keyboard_led_state();
        if (led_state.num_lock) {
            oled_blit_16x16_P(NUM_LOCK_BITMAP, 0, 3);
        }
        if (led_state.caps_lock) {
            oled_blit_16x16_P(CAPS_LOCK_BITMAP, 24, 3);
        }
        if (led_state.scroll_lock) {
            oled_blit_16x16_P(SCROLL_LOCK_BITMAP, 48, 3);
        }

        // Last key pressed
        oled_set_cursor(0, 6);
        oled_write_P(PSTR("Last Key:"), false);
        oled_set_cursor(0, 7);
        const char *keycode_str = get_keycode_string(unwrap_keycode(g_last_keycode));
        oled_print_right_aligned(keycode_str, g_oled_max_char);

        // Split balance
        oled_set_cursor(0, 9);
        oled_write_P(PSTR("Balance:"), false);
        oled_set_cursor(0, 10);
        // TODO: implement this
        oled_print_right_aligned("?? %", g_oled_max_char);

        // QMK logo
        oled_set_cursor(7, 15);
        oled_write_P(PSTR("QMK"), false);
        static const char PROGMEM QMK_LOGO_1[] = {
            0x81, 0x82, 0x83, 0x84, 0x00
        };
        static const char PROGMEM QMK_LOGO_2[] = {
            0xA1, 0xA2, 0xA3, 0xA4, 0x00
        };
        static const char PROGMEM QMK_LOGO_3[] = {
            0xC1, 0xC2, 0xC3, 0xC4, 0x00
        };
        oled_set_cursor(0, 13);
        oled_write_P(QMK_LOGO_1, false);
        oled_set_cursor(0, 14);
        oled_write_P(QMK_LOGO_2, false);
        oled_set_cursor(0, 15);
        oled_write_P(QMK_LOGO_3, false);
    } else {
        // Uptime (only if oled is on)
        if (is_oled_on()) {
            oled_set_cursor(0, 0);
            oled_write_P(PSTR("Uptime:"), false);
            print_uptime(1);
        }

        // Typing speed
        oled_set_cursor(0, 3);
        oled_write_P(PSTR("Avg Speed"), false);
        oled_set_cursor(0, 4);
        oled_write_P(PSTR("(30 s):"), false);
        print_wpm(5);

        // split balance
        oled_set_cursor(0, 9);
        oled_write_P(PSTR("Balance:"), false);
        oled_set_cursor(0, 10);
        // TODO: implement this
        oled_print_right_aligned("?? %", g_oled_max_char);

        // Keebart logo
        oled_set_cursor(0, 14);
        oled_write_P(PSTR("KEEB"), false);
        oled_set_cursor(0, 15);
        oled_write_P(PSTR("ART"), false);
        oled_blit_24x24_P(KEEBART_BITMAP_24x24, 40, 13);

    }
    return false;
}

void keyboard_post_init_user(void) {
    gpio_set_pin_output(GP5);
    gpio_write_pin_high(GP5);
    splash_start_ms = timer_read32();
    splash_active = true;
}
#endif


