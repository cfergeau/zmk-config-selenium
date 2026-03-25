// Selenium keymap:
// https://github.com/OneDeadKey/selenium


// Do not modify this file to change your options.

// If you want to change an option for all your keyboards, uncomment the
// corresponding lines in the selenium.keymap file.

// If you want to change an option for one or several of your keyboards, but
// not for all, define the corresponding alias, adding the prefix SPECIFIC_ to
// its name, in the keyboard specific file. For example, say you want the
// option KB_LAYOUT_QWERTY_LAFAYETTE for your ferris, you would add a line like
// that (but uncommented) in the ferris.keyboard file (DO NOT USE IT HERE!):
// #define SPECIFIC_KB_LAYOUT_QWERTY_LAFAYETTE


/******************************************************************************
 * Layout-specific actions and symbols.
******************************************************************************/

#ifdef SPECIFIC_KB_LAYOUT_QWERTY_LAFAYETTE
  #ifndef KB_LAYOUT_QWERTY_LAFAYETTE
    #define KB_LAYOUT_QWERTY_LAFAYETTE
  #endif
  #ifdef KB_LAYOUT_AZERTY
    #undef KB_LAYOUT_AZERTY
  #endif
  #ifdef KB_LAYOUT_ERGOL
    #undef KB_LAYOUT_ERGOL
  #endif
#endif

#ifdef SPECIFIC_KB_LAYOUT_AZERTY
  #ifndef KB_LAYOUT_AZERTY
    #define KB_LAYOUT_AZERTY
  #endif
  #ifdef KB_LAYOUT_ERGOL
    #undef KB_LAYOUT_ERGOL
  #endif
  #ifdef KB_LAYOUT_QWERTY_LAFAYETTE
    #undef KB_LAYOUT_QWERTY_LAFAYETTE
  #endif
#endif

#ifdef SPECIFIC_KB_LAYOUT_ERGOL
  #ifndef KB_LAYOUT_ERGOL
    #define KB_LAYOUT_ERGOL
  #endif
  #ifdef KB_LAYOUT_QWERTY_LAFAYETTE
    #undef KB_LAYOUT_QWERTY_LAFAYETTE
  #endif
  #ifdef SPECIFIC_KB_LAYOUT_AZERTY
    #undef SPECIFIC_KB_LAYOUT_AZERTY
  #endif
#endif

#ifdef SPECIFIC_MACOS
  #ifndef MACOS
    #define MACOS
  #endif
#endif


/******************************************************************************
 * Hold-Taps
******************************************************************************/

#ifdef SPECIFIC_HT_NONE
  #ifndef HT_NONE
    #define HT_NONE
  #endif
  #ifdef HT_THUMB_TAPS
    #undef HT_THUMB_TAPS
  #endif
  #ifdef HT_HOME_ROW_MODS
    #undef HT_HOME_ROW_MODS
  #endif
  #ifdef HT_TWO_THUMB_KEYS
    #undef HT_TWO_THUMB_KEYS
  #endif
#endif

#ifdef SPECIFIC_HT_THUMB_TAPS
  #ifndef HT_THUMB_TAPS
    #define HT_THUMB_TAPS
  #endif
  #ifdef HT_HOME_ROW_MODS
    #undef HT_HOME_ROW_MODS
  #endif
  #ifdef HT_TWO_THUMB_KEYS
    #undef HT_TWO_THUMB_KEYS
  #endif
  #ifdef HT_NONE
    #undef HT_NONE
  #endif
#endif

#ifdef SPECIFIC_HT_HOME_ROW_MODS
  #ifndef HT_HOME_ROW_MODS
    #define HT_HOME_ROW_MODS
  #endif
  #ifdef HT_TWO_THUMB_KEYS
    #undef HT_TWO_THUMB_KEYS
  #endif
  #ifdef HT_NONE
    #undef HT_NONE
  #endif
  #ifdef HT_THUMB_TAPS
    #undef HT_THUMB_TAPS
  #endif
#endif

#ifdef SPECIFIC_HT_TWO_THUMB_KEYS
  #ifndef HT_TWO_THUMB_KEYS
    #define HT_TWO_THUMB_KEYS
  #endif
  #ifdef HT_NONE
    #undef HT_NONE
  #endif
  #ifdef HT_THUMB_TAPS
    #undef HT_THUMB_TAPS
  #endif
  #ifdef HT_HOME_ROW_MODS
    #undef HT_HOME_ROW_MODS
  #endif
#endif

#ifdef SPECIFIC_TAPPING_TERM
  #undef TAPPING_TERM
  #define TAPPING_TERM SPECIFIC_TAPPING_TERM
#endif

#ifdef SPECIFIC_SHORT_TAPPING_TERM
  #undef SHORT_TAPPING_TERM
  #define SHORT_TAPPING_TERM SPECIFIC_SHORT_TAPPING_TERM
#endif

#ifdef SPECIFIC_QUICK_TAP
  #undef QUICK_TAP
  #define QUICK_TAP SPECIFIC_QUICK_TAP
#endif


/******************************************************************************
 * Other Options
*****************************************************************************/

#ifdef SPECIFIC_VIM_NAVIGATION
  #ifndef VIM_NAVIGATION
    #define VIM_NAVIGATION
  #endif
#endif

#ifdef SPECIFIC_HRM_SHIFT
  #ifndef HRM_SHIFT
    #define HRM_SHIFT
  #endif
#endif

#ifdef SPECIFIC_LEFT_HAND_SPACE
  #ifndef LEFT_HAND_SPACE
    #define LEFT_HAND_SPACE
  #endif
#endif

#ifdef SPECIFIC_HUMMINGBIRD
  #ifndef HUMMINGBIRD
    #define HUMMINGBIRD
  #endif
#endif
