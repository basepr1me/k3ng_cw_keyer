#ifndef keyer_h
#define keyer_h

// Do not change these !

// Variable macros
#define STRAIGHT 1
#define IAMBIC_B 2
#define IAMBIC_A 3
#define BUG 4
#define ULTIMATIC 5
#define SINGLE_PADDLE 6

#define PADDLE_NORMAL 0
#define PADDLE_REVERSE 1

#define KEYER_NORMAL 0
#define BEACON 1
#define KEYER_COMMAND_MODE 2

#define OMIT_LETTERSPACE 1

#define SIDETONE_OFF 0
#define SIDETONE_ON 1
#define SIDETONE_PADDLE_ONLY 2

#define SENDING_NOTHING 0
#define SENDING_DIT 1
#define SENDING_DAH 2

#define SPEED_NORMAL 0
#define SPEED_QRSS 1

#define CW 0
#define HELL 1
#define AMERICAN_MORSE 2

#ifdef FEATURE_PS2_KEYBOARD
  #define PS2_KEYBOARD_NORMAL 0
#endif //FEATURE_PS2_KEYBOARD

#define SERIAL_CLI 0
#define SERIAL_WINKEY_EMULATION 1

#define SERIAL_SEND_BUFFER_SPECIAL_START 13
#define SERIAL_SEND_BUFFER_WPM_CHANGE 14        
#define SERIAL_SEND_BUFFER_PTT_ON 15            
#define SERIAL_SEND_BUFFER_PTT_OFF 16           
#define SERIAL_SEND_BUFFER_TIMED_KEY_DOWN 17    
#define SERIAL_SEND_BUFFER_TIMED_WAIT 18        
#define SERIAL_SEND_BUFFER_NULL 19              
#define SERIAL_SEND_BUFFER_PROSIGN 20           
#define SERIAL_SEND_BUFFER_HOLD_SEND 21         
#define SERIAL_SEND_BUFFER_HOLD_SEND_RELEASE 22 
#define SERIAL_SEND_BUFFER_MEMORY_NUMBER 23
#define SERIAL_SEND_BUFFER_TX_CHANGE 24
#define SERIAL_SEND_BUFFER_SPECIAL_END 25

#if defined(OPTION_PROSIGN_SUPPORT)
  #define PROSIGN_START 127
  #define PROSIGN_AA 128
  #define PROSIGN_AS 129
  #define PROSIGN_BK 130
  #define PROSIGN_CL 131
  #define PROSIGN_CT 132
  #define PROSIGN_KN 133
  #define PROSIGN_NJ 134
  #define PROSIGN_SK 135
  #define PROSIGN_SN 136
  #define PROSIGN_HH 137    // iz0rus
  #define PROSIGN_END 138  // iz0rus
#endif

#define SERIAL_SEND_BUFFER_NORMAL 0
#define SERIAL_SEND_BUFFER_TIMED_COMMAND 1
#define SERIAL_SEND_BUFFER_HOLD 2

#ifdef FEATURE_WINKEY_EMULATION
#define WINKEY_NO_COMMAND_IN_PROGRESS 0
#define WINKEY_UNBUFFERED_SPEED_COMMAND 1
#define WINKEY_UNSUPPORTED_COMMAND 2
#define WINKEY_POINTER_COMMAND 3
#define WINKEY_ADMIN_COMMAND 4
#define WINKEY_PAUSE_COMMAND 5
#define WINKEY_KEY_COMMAND 6
#define WINKEY_SETMODE_COMMAND 7
#define WINKEY_SIDETONE_FREQ_COMMAND 8
#define WINKEY_ADMIN_COMMAND_ECHO 9
#define WINKEY_BUFFERED_SPEED_COMMAND 10
#define WINKEY_DAH_TO_DIT_RATIO_COMMAND 11
#define WINKEY_KEYING_COMPENSATION_COMMAND 12
#define WINKEY_FIRST_EXTENSION_COMMAND 13
#define WINKEY_PTT_TIMES_PARM1_COMMAND 14
#define WINKEY_PTT_TIMES_PARM2_COMMAND 15
#define WINKEY_SET_POT_PARM1_COMMAND 16
#define WINKEY_SET_POT_PARM2_COMMAND 17
#define WINKEY_SET_POT_PARM3_COMMAND 18
#define WINKEY_SOFTWARE_PADDLE_COMMAND 19
#define WINKEY_CANCEL_BUFFERED_SPEED_COMMAND 20
#define WINKEY_BUFFFERED_PTT_COMMMAND 21
#define WINKEY_HSCW_COMMAND 22
#define WINKEY_BUFFERED_HSCW_COMMAND 23
#define WINKEY_WEIGHTING_COMMAND 24
#define WINKEY_KEY_BUFFERED_COMMAND 25
#define WINKEY_WAIT_BUFFERED_COMMAND 26
#define WINKEY_POINTER_01_COMMAND 27
#define WINKEY_POINTER_02_COMMAND 28
#define WINKEY_POINTER_03_COMMAND 29
#define WINKEY_FARNSWORTH_COMMAND 30
#define WINKEY_MERGE_COMMAND 31
#define WINKEY_MERGE_PARM_2_COMMAND 32
#define WINKEY_SET_PINCONFIG_COMMAND 33
#define WINKEY_EXTENDED_COMMAND 34
#ifdef OPTION_WINKEY_2_SUPPORT
#define WINKEY_SEND_MSG 35
#endif //OPTION_WINKEY_2_SUPPORT
#define WINKEY_LOAD_SETTINGS_PARM_1_COMMAND 101
#define WINKEY_LOAD_SETTINGS_PARM_2_COMMAND 102
#define WINKEY_LOAD_SETTINGS_PARM_3_COMMAND 103
#define WINKEY_LOAD_SETTINGS_PARM_4_COMMAND 104
#define WINKEY_LOAD_SETTINGS_PARM_5_COMMAND 105
#define WINKEY_LOAD_SETTINGS_PARM_6_COMMAND 106
#define WINKEY_LOAD_SETTINGS_PARM_7_COMMAND 107
#define WINKEY_LOAD_SETTINGS_PARM_8_COMMAND 108
#define WINKEY_LOAD_SETTINGS_PARM_9_COMMAND 109
#define WINKEY_LOAD_SETTINGS_PARM_10_COMMAND 110
#define WINKEY_LOAD_SETTINGS_PARM_11_COMMAND 111
#define WINKEY_LOAD_SETTINGS_PARM_12_COMMAND 112
#define WINKEY_LOAD_SETTINGS_PARM_13_COMMAND 113
#define WINKEY_LOAD_SETTINGS_PARM_14_COMMAND 114
#define WINKEY_LOAD_SETTINGS_PARM_15_COMMAND 115

#define WINKEY_HOUSEKEEPING 0
#define SERVICE_SERIAL_BYTE 1
#endif //FEATURE_WINKEY_EMULATION

#define UNDEFINED_SENDING 0
#define AUTOMATIC_SENDING 1
#define MANUAL_SENDING 2
#define AUTOMATIC_SENDING_INTERRUPTED 3

#define ULTIMATIC_NORMAL 0
#define ULTIMATIC_DIT_PRIORITY 1
#define ULTIMATIC_DAH_PRIORITY 2


#define PRINTCHAR 0
#define NOPRINT 1

#define DONT_RAISE_ERROR_MSG 0
#define RAISE_ERROR_MSG 1

#if !defined(HID_PROTOCOL_KEYBOARD) && !defined(HID_PROTOCOL_MOUSE)
  #define HID_PROTOCOL_KEYBOARD 1
  #define HID_PROTOCOL_MOUSE 2
#endif

#define WORDSWORTH_2_CHAR_WORDS 2
#define WORDSWORTH_3_CHAR_WORDS 3
#define WORDSWORTH_4_CHAR_WORDS 4
#define WORDSWORTH_NAMES 5
#define WORDSWORTH_QSO_WORDS 6
#define WORDSWORTH_MIXED 99

#define WORDSWORTH_WORDSPACE 1
#define WORDSWORTH_WPM 2
#define WORDSWORTH_REPETITION 3

#define CALLSIGN_INTERNATIONAL 0
#define CALLSIGN_US 1
#define CALLSIGN_EUROPEAN 2
#define CALLSIGN_CANADA 3

#define ECHO_PROGRESSIVE_5 100
#define ECHO_2_CHAR_WORDS 101
#define ECHO_3_CHAR_WORDS 102
#define ECHO_4_CHAR_WORDS 103
#define ECHO_NAMES 104
#define ECHO_QSO_WORDS 105
#define ECHO_MIXED 199

#define PRACTICE_NON_INTERACTIVE 0
#define PRACTICE_INTERACTIVE 1

#define RANDOM_LETTER_GROUPS 1
#define RANDOM_NUMBER_GROUPS 2
#define RANDOM_MIXED_GROUPS 3

#endif //keyer_h