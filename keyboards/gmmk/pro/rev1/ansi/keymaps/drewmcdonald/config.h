#pragma once

#ifdef DEBOUNCE
    #undef DEBOUNCE  // unset the default of 5
    #define DEBOUNCE 8
#endif

#ifdef RGB_MATRIX_ENABLE
    #define RGB_DISABLE_TIMEOUT 600000     // 10 minutes (10 * 60 * 1000ms)
    #define RGB_DISABLE_WHEN_USB_SUSPENDED
    #define RGBLIGHT_SLEEP
#endif

#define TAPPING_TERM 175
#define TAPPING_TERM_PER_KEY
