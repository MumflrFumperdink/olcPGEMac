#ifndef _COCOA_WINDOWING_H_
#define _COCOA_WINDOWING_H_

#include <cstddef> // NOTE(Xavier): (2017.11.13) For size_t.

extern "C" void init_application ();
extern "C" void close_application ();

extern "C" void create_window ( const char *title, int width, int height );
extern "C" void close_window ();
extern "C" void process_window_events ();
extern "C" void refresh_window ();

extern "C" void set_cursor_hidden ( bool state );
extern "C" void set_window_fullscreen ( bool state );
extern "C" void set_window_name ( const char* title);
extern "C" void set_window_resizable ( bool resizable);
extern "C" void set_window_complete_fullscreen ( bool state );
extern "C" void set_window_size ( float width, float height );
extern "C" void set_window_position ( float x, float y );

//////////////////////////////
extern "C" void set_window_background_color ( float r, float g, float b, float a );
extern "C" void set_window_background_enable_srgb ( bool state );
extern "C" void set_window_title_bar_hidden ( bool state );
extern "C" void set_window_title_hidden ( bool state );
extern "C" void set_window_transparency ( bool state );

extern "C" bool window_is_focused();
/////////////////////////////

extern "C" bool get_key ( size_t keyCode );
extern "C" bool get_key_down ( size_t keyCode );
extern "C" bool get_key_up ( size_t keyCode );
extern "C" bool get_modifier_key ( size_t keyCode );
extern "C" bool get_modifier_key_down ( size_t keyCode );
extern "C" bool get_modifier_key_up ( size_t keyCode );

extern "C" bool get_mouse_button ( size_t button );
extern "C" bool get_mouse_button_down ( size_t button );
extern "C" bool get_mouse_button_up ( size_t button );
extern "C" float get_mouse_position_x ();
extern "C" float get_mouse_position_y ();
extern "C" float get_mouse_scroll_x ();
extern "C" float get_mouse_scroll_y ();

extern "C" bool get_window_is_closing ();
extern "C" float get_window_width ();
extern "C" float get_window_height ();
extern "C" float get_window_hidpi_width ();
extern "C" float get_window_hidpi_height ();

extern "C" float get_screen_width ();
extern "C" float get_screen_height ();

extern "C" const char* get_current_working_directory();
extern "C" const char* get_application_support_directory ( const char *appName = nullptr );
extern "C" void create_directory_at ( const char* dir );
extern "C" void remove_file_at ( const char* filename );

enum ModifierKeys : size_t
{
    COMMAND = 0,
    OPTION = 1,
    CONTROL = 2,
    SHIFT = 3
};

namespace Key {

    enum Keys : size_t
    {
        KEY_NONE = 0,

        KEY_A = 'a',
        KEY_B = 'b',
        KEY_C = 'c',
        KEY_D = 'd',
        KEY_E = 'e',
        KEY_F = 'f',
        KEY_G = 'g',
        KEY_H = 'h',
        KEY_I = 'i',
        KEY_J = 'j',
        KEY_K = 'k',
        KEY_L = 'l',
        KEY_M = 'm',
        KEY_N = 'n',
        KEY_O = 'o',
        KEY_P = 'p',
        KEY_Q = 'q',
        KEY_R = 'r',
        KEY_S = 's',
        KEY_T = 't',
        KEY_U = 'u',
        KEY_V = 'v',
        KEY_W = 'w',
        KEY_X = 'x',
        KEY_Y = 'y',
        KEY_Z = 'z',

        KEY_0 = 48,
        KEY_1 = 49,
        KEY_2 = 50,
        KEY_3 = 51,
        KEY_4 = 52,
        KEY_5 = 53,
        KEY_6 = 54,
        KEY_7 = 55,
        KEY_8 = 56,
        KEY_9 = 57,

        KEY_PLUS = '+',
        KEY_MINUS = '-',
        KEY_STAR = '*',
        KEY_EQUALS = '=',
        KEY_UNDERSCORE = '_',
        KEY_RIGHT_ROUNDBRACKET = ')',
        KEY_LEFT_ROUNDBRACKET = '(',
        KEY_RIGHT_CURLYBRACKET = '}',
        KEY_LEFT_CURLYBRACKET = '{',
        KEY_RIGHT_SQUAREBRACKET = ']',
        KEY_LEFT_SQUAREBRACKET = '[',
        KEY_AMPERSAN = '&',
        KEY_CARROT = '^',
        KEY_PERCENTSIGN = '%',
        KEY_DOLLARSIGN = '$',
        KEY_POUND = '#',
        KEY_AT = '@',
        KEY_EXCLIMATION = '!',
        KEY_TILDA = '~',
        // NOTE(Xavier): (2017.11.13) The '`' key is still missing.
        KEY_SEMICOLON = ';',
        KEY_COLON = ':',
        KEY_SINGLEQUOTE = '\'',
        KEY_DOUBLEQUOTE = '\"',
        KEY_BACKSLASH = '\\',
        KEY_FORWARDSLASH = '/',
        KEY_QUESTIONMARK = '?',
        KEY_COMMA = ',',
        KEY_FULLSTOP = '.',
        KEY_LESSTHAN = '<',
        KEY_GREATERTHAN = '>',
        // NOTE(Xavier): (2017.11.13) The '|' key is still missing.

        KEY_ENTER = 13,
        KEY_TAB = 9,
        KEY_DELETE = 127,
        KEY_ESCAPE = 27,
        KEY_RETURN = 3,
        KEY_SPACE = ' ',

        KEY_UP = 0xF700,
        KEY_DOWN = 0xF701,
        KEY_LEFT = 0xF702,
        KEY_RIGHT = 0xF703,

        KEY_UP_ = 128,
        KEY_DOWN_ = 129,
        KEY_LEFT_ = 130,
        KEY_RIGHT_ = 131,

        KEY_F1 = 0xF704,
        KEY_F2 = 0xF705,
        KEY_F3 = 0xF706,
        KEY_F4 = 0xF707,
        KEY_F5 = 0xF708,
        KEY_F6 = 0xF709,
        KEY_F7 = 0xF70A,
        KEY_F8 = 0xF70B,
        KEY_F9 = 0xF70C,
        KEY_F10 = 0xF70D,
        KEY_F11 = 0xF70E,
        KEY_F12 = 0xF70F,

        KEY_F1_ = 132,
        KEY_F2_ = 133,
        KEY_F3_ = 134,
        KEY_F4_ = 135,
        KEY_F5_ = 136,
        KEY_F6_ = 137,
        KEY_F7_ = 138,
        KEY_F8_ = 139,
        KEY_F9_ = 140,
        KEY_F10_ = 141,
        KEY_F11_ = 142,
        KEY_F12_ = 143,

        KEY_INSERT = 0xF727,
        KEY_DEL = 0xF728,
        KEY_HOME = 0xF729,
        KEY_BEGIN = 0xF72A,
        KEY_END = 0xF72B,
        KEY_PGUP = 0xF72C,
        KEY_PGDN = 0xF72D,

        KEY_INSERT_ = 144,
        KEY_DEL_ = 145,
        KEY_HOME_ = 146,
        KEY_BEGIN_ = 147,
        KEY_END_ = 148,
        KEY_PGUP_ = 149,
        KEY_PGDN_ = 150,

        KEY_SCROLL = 0xF72F,
        KEY_PAUSE = 0xF730,

        KEY_SCROLL_ = 150,
        KEY_PAUSE_ = 151
    };

    static const Keys All[] = {KEY_NONE, KEY_A, KEY_B, KEY_C, KEY_D, KEY_E, KEY_F, KEY_G, KEY_H, KEY_I, KEY_J, KEY_K, KEY_L, KEY_M, KEY_N, KEY_O, KEY_P, KEY_Q, KEY_R, KEY_S, KEY_T, KEY_U, KEY_V, KEY_W, KEY_X, KEY_Y, KEY_Z, KEY_0, KEY_1, KEY_2, KEY_3, KEY_4, KEY_5, KEY_6, KEY_7, KEY_8, KEY_9, KEY_F1_, KEY_F2_, KEY_F3_, KEY_F4_, KEY_F5_, KEY_F6_, KEY_F7_, KEY_F8_, KEY_F9_, KEY_F10_, KEY_F11_, KEY_F12_, KEY_UP_, KEY_DOWN_, KEY_LEFT_, KEY_RIGHT_, KEY_SPACE, KEY_TAB};
}

enum Mouse : size_t
{
    LEFT = 0,
    RIGHT = 1,
};

#endif
