﻿
enum {
	// key codes
	KC_A = 4,
	KC_B = 5,
	KC_C = 6,
	KC_D = 7,
	KC_E = 8,
	KC_F = 9,
	KC_G = 10,
	KC_H = 11,
	KC_I = 12,
	KC_J = 13,
	KC_K = 14,
	KC_L = 15,
	KC_M = 16,
	KC_N = 17,
	KC_O = 18,
	KC_P = 19,
	KC_Q = 20,
	KC_R = 21,
	KC_S = 22,
	KC_T = 23,
	KC_U = 24,
	KC_V = 25,
	KC_W = 26,
	KC_X = 27,
	KC_Y = 28,
	KC_Z = 29,
	KC_1 = 30,
	KC_2 = 31,
	KC_3 = 32,
	KC_4 = 33,
	KC_5 = 34,
	KC_6 = 35,
	KC_7 = 36,
	KC_8 = 37,
	KC_9 = 38,
	KC_0 = 39,
	KC_ENTER = 40,
	KC_ESCAPE = 41,
	KC_BACKSPACE = 42,
	KC_TAB = 43,
	KC_SPACEBAR = 44,
	KC_UNDERSCORE = 45,
	KC_PLUS = 46,
	KC_OPEN_BRACKET = 47,
	KC_CLOSE_BRACKET = 48,  //
	KC_BACKSLASH = 49, // backslash and pipe
	KC_HASH = 50,    // hash and tilde
	KC_COLON = 51,  // semicolon
	KC_QUOTE = 52,  // quote and single quote
	KC_TILDE = 53,  // grave accent
	KC_COMMA = 54,  // , >
	KC_DOT = 55,    // . >
	KC_SLASH = 56,  // / ?
	KC_CAPS_LOCK = 57,
	KC_F1 = 58,
	KC_F2 = 59,
	KC_F3 = 60,
	KC_F4 = 61,
	KC_F5 = 62,
	KC_F6 = 63,
	KC_F7 = 64,
	KC_F8 = 65,
	KC_F9 = 66,
	KC_F10 = 67,
	KC_F11 = 68,
	KC_F12 = 69,

	KC_PRINTSCREEN = 70,
	KC_SCROLL_LOCK = 71,
	KC_PAUSE = 72,
	KC_INSERT = 73,
	KC_HOME = 74,
	KC_PAGEUP = 75,
	KC_DELETE = 76,
	KC_END = 77,
	KC_PAGEDOWN = 78,
	KC_RIGHT = 79,
	KC_LEFT = 80,
	KC_DOWN = 81,
	KC_UP = 82,
	KC_KP_NUM_LOCK = 83,
	KC_KP_DIVIDE = 84,
	KC_KP_AT = 85,
	KC_KP_MULTIPLY = 85,
	KC_KP_MINUS = 86,
	KC_KP_PLUS = 87,
	KC_KP_ENTER = 88,
	KC_KP_1 = 89,
	KC_KP_2 = 90,
	KC_KP_3 = 91,
	KC_KP_4 = 92,
	KC_KP_5 = 93,
	KC_KP_6 = 94,
	KC_KP_7 = 95,
	KC_KP_8 = 96,
	KC_KP_9 = 97,
	KC_KP_0 = 98,
	KC_KP_DOT = 99,
	KC_NON_US_BACKSLASH_AND_SLASH = 100,

	//KC_APPLICATION = 0x65,
	KC_FN = 0x65,
	KC_POWER = 0x66,

	KC_F13 = 0x68,
	KC_F14 = 0x69,
	KC_F15 = 0x6a,
	KC_F16 = 0x6b,
	KC_F17 = 0x6c,
	KC_F18 = 0x6d,
	KC_F19 = 0x6e,
	KC_F20 = 0x6f,
	KC_F21 = 0x70,
	KC_F22 = 0x71,
	KC_F23 = 0x72,
	KC_F24 = 0x73,

	KC_EXECUTE = 0x74,
	KC_HELP = 0x75,
	KC_MENU = 0x76,
	KC_SELECT = 0x77,
	KC_STOP = 0x78,
	KC_AGAIN = 0x79,
	KC_UNDO = 0x7a,
	KC_CUT = 0x7b,
	KC_COPY = 0x7c,
	KC_PASTE = 0x7d,
	KC_FIND = 0x7e,
	KC_MUTE = 0x7f,
	KC_VOLUME_UP = 0x80,
	KC_VOLUME_DOWN = 0x81,


	// modifier keys val
	KC_LCTRL = 0xe0,
	KC_LSHIFT = 0xe1,
	KC_LALT = 0xe2,
	KC_LGUI = 0xe3,
	KC_RCTRL = 0xe4,
	KC_RSHIFT = 0xe5,
	KC_RALT = 0xe6,
	KC_RGUI = 0xe7,

	// modifier bit sets
	KC_MODIFIER_NONE = 0x00,
	KC_LCTRL_VAL = 0x01,
	KC_LSHIFT_VAL = 0x02,
	KC_LALT_VAL = 0x04,
	KC_LGUI_VAL = 0x08,
	KC_RCTRL_VAL = 0x10,
	KC_RSHIFT_VAL = 0x20,
	KC_RALT_VAL = 0x40,
	KC_RGUI_VAL = 0x80,

	// media keys vals
	KC_MEDIA_SCAN_NEXT_VAL = 0xB5,
	KC_MEDIA_SCAN_PREV_VAL = 0xB6,
	KC_MEDIA_STOP_VAL = 0xB7,
	KC_MEDIA_EJECT_VAL = 0xB8,
	KC_MEDIA_PLAY_VAL = 0xCD,
	KC_MEDIA_MUTE_VAL = 0xE2,
	KC_MEDIA_VOLUME_UP_VAL = 0xE9,
	KC_MEDIA_VOLUME_DOWN_VAL = 0xEA,

	//	customize keys
	KC_GAME = 0xf0,
	KC_BACKLIGHT = 0xf1,
	KC_INSERT_SW = 0xf2,
	KC_MEDIA_SCAN_NEXT = 0xf3,
	KC_MEDIA_SCAN_PREV = 0xf4,
	KC_MEDIA_STOP = 0xf5,
	KC_MEDIA_EJECT = 0xf6,
	KC_MEDIA_PLAY = 0xf7,
	KC_MEDIA_MUTE = 0xf8,
	KC_MEDIA_VOLUME_UP = 0xf9,
	KC_MEDIA_VOLUME_DOWN = 0xfa,
};
