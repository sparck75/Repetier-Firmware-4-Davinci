/*
    This file is part of Repetier-Firmware.

    Repetier-Firmware is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Repetier-Firmware is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with Repetier-Firmware.  If not, see <http://www.gnu.org/licenses/>.

*/

#if !defined(UI_DISPLAY_CHARSET) || UI_DISPLAY_CHARSET>3
#define UI_DISPLAY_CHARSET 1
#endif

//Symbolic character values for specific symbols.
//May be overridden for different controllers, charactersets, etc.
#define cUP "\001"
#define cDEG "\002"
#define cSEL "\003"
#define cUNSEL "\004"
#define cTEMP "\005"
#define cFOLD "\006"
#define bFOLD 6
#define cARROW "\176"

#if UI_DISPLAY_CHARSET == 0 // ASCII fallback
#define CHAR_RIGHT '-'
#define CHAR_SELECTOR '>'
#define CHAR_SELECTED '*'
#define STR_auml "ae"
#define STR_Auml "Ae"
#define STR_uuml "ue"
#define STR_Uuml "Ue"
#define STR_ouml "oe"
#define STR_Ouml "Oe"
#define STR_szlig "ss"
#endif

#if UI_DISPLAY_CHARSET == 1 // HD44870 charset with knji chars
#define CHAR_RIGHT 0x7e
#define CHAR_SELECTOR '>'
#define CHAR_SELECTED '*'
#define STR_auml "\xe1"
#define STR_Auml "Ae"
#define STR_uuml "\365"
#define STR_Uuml "Ue"
#define STR_ouml "\357"
#define STR_Ouml "Oe"
#define STR_szlig "\342"
#endif

#if UI_DISPLAY_CHARSET == 2 // Western charset
#define CHAR_RIGHT 0xbc
#define CHAR_SELECTOR 0xf6
#define CHAR_SELECTED '*'
#define STR_auml "\204"
#define STR_Auml "\216"
#define STR_uuml "\201"
#define STR_Uuml "\212"
#define STR_ouml "\204"
#define STR_Ouml "\211"
#define STR_szlig "160"
#endif


#if UI_DISPLAY_CHARSET==3 // U8glib
#define CHAR_RIGHT 187 //>>
#define CHAR_SELECTOR 255 //'>'
#define CHAR_SELECTED 254 //'*'
#define STR_auml "\344"
#define STR_Auml "\304"
#define STR_uuml "\374"
#define STR_Uuml "\334"
#define STR_ouml "\366"
#define STR_Ouml "\326"
#define STR_szlig "\337"
#endif

#define LANGUAGE_EN_ID 0
#define LANGUAGE_DE_ID 1
#define LANGUAGE_NL_ID 2
#define LANGUAGE_PT_ID 3
#define LANGAUGE_IT_ID 4
#define LANGUAGE_ES_ID 5
#define LANGUAGE_SE_ID 6
#define LANGUAGE_FR_ID 7
#define LANGUAGE_CZ_ID 8
#define LANGUAGE_PL_ID 9

#define NUM_LANGUAGES_KNOWN 10
#define NUM_TRANSLATED_WORDS 401

// For selectable translations we refer to each text by a id which gets
// defined here. The list starts at 0 and defines the position in the
// translation index.

#define UI_TEXT_ON_ID 0
#define UI_TEXT_OFF_ID 1
#define UI_TEXT_NA_ID 2
#define UI_TEXT_YES_ID 3
#define UI_TEXT_NO_ID 4
#define UI_TEXT_PRINT_POS_ID 5
#define UI_TEXT_PRINTING_ID 6
#define UI_TEXT_IDLE_ID 7
#define UI_TEXT_NOSDCARD_ID 8
#define UI_TEXT_ERROR_ID 9
#define UI_TEXT_BACK_ID 10
#define UI_TEXT_QUICK_SETTINGS_ID 11
#define UI_TEXT_ERRORMSG_ID 12
#define UI_TEXT_CONFIGURATION_ID 13
#define UI_TEXT_POSITION_ID 14
#define UI_TEXT_EXTRUDER_ID 15
#define UI_TEXT_SD_CARD_ID 16
#define UI_TEXT_DEBUGGING_ID 17
#define UI_TEXT_HOME_DELTA_ID 18
#define UI_TEXT_HOME_ALL_ID 19
#define UI_TEXT_HOME_X_ID 20
#define UI_TEXT_HOME_Y_ID 21
#define UI_TEXT_HOME_Z_ID 22
#define UI_TEXT_PREHEAT_PLA_ID 23
#define UI_TEXT_PREHEAT_ABS_ID 24
#define UI_TEXT_LIGHTS_ONOFF_ID 25
#define UI_TEXT_COOLDOWN_ID 26
#define UI_TEXT_SET_TO_ORIGIN_ID 27
#define UI_TEXT_DISABLE_STEPPER_ID 28
#define UI_TEXT_X_POSITION_ID 29
#define UI_TEXT_X_POS_FAST_ID 30
#define UI_TEXT_Y_POSITION_ID 31
#define UI_TEXT_Y_POS_FAST_ID 32
#define UI_TEXT_Z_POSITION_ID 33
#define UI_TEXT_Z_POS_FAST_ID 34
#define UI_TEXT_E_POSITION_ID 35
#define UI_TEXT_BED_TEMP_ID 36
#define UI_TEXT_EXTR0_TEMP_ID 37
#define UI_TEXT_EXTR1_TEMP_ID 38
#define UI_TEXT_EXTR2_TEMP_ID 39
#define UI_TEXT_EXTR0_OFF_ID 40
#define UI_TEXT_EXTR1_OFF_ID 41
#define UI_TEXT_EXTR2_OFF_ID 42
#define UI_TEXT_EXTR0_SELECT_ID 43
#define UI_TEXT_EXTR1_SELECT_ID 44
#define UI_TEXT_EXTR2_SELECT_ID 45
#define UI_TEXT_EXTR_ORIGIN_ID 46
#define UI_TEXT_PRINT_X_ID 47
#define UI_TEXT_PRINT_Y_ID 48
#define UI_TEXT_PRINT_Z_ID 49
#define UI_TEXT_PRINT_Z_DELTA_ID 50
#define UI_TEXT_MOVE_X_ID 51
#define UI_TEXT_MOVE_Y_ID 52
#define UI_TEXT_MOVE_Z_ID 53
#define UI_TEXT_MOVE_Z_DELTA_ID 54
#define UI_TEXT_JERK_ID 55
#define UI_TEXT_ZJERK_ID 56
#define UI_TEXT_ACCELERATION_ID 57
#define UI_TEXT_STORE_TO_EEPROM_ID 58
#define UI_TEXT_LOAD_EEPROM_ID 59
#define UI_TEXT_DBG_ECHO_ID 60
#define UI_TEXT_DBG_INFO_ID 61
#define UI_TEXT_DBG_ERROR_ID 62
#define UI_TEXT_DBG_DRYRUN_ID 63
#define UI_TEXT_OPS_OFF_ID 64
#define UI_TEXT_OPS_CLASSIC_ID 65
#define UI_TEXT_OPS_FAST_ID 66
#define UI_TEXT_OPS_RETRACT_ID 67
#define UI_TEXT_OPS_BACKSLASH_ID 68
#define UI_TEXT_OPS_MINDIST_ID 69
#define UI_TEXT_OPS_MOVE_AFTER_ID 70
#define UI_TEXT_ANTI_OOZE_ID 71
#define UI_TEXT_PRINT_FILE_ID 72
#define UI_TEXT_PAUSE_PRINT_ID 73
#define UI_TEXT_CONTINUE_PRINT_ID 74
#define UI_TEXT_UNMOUNT_CARD_ID 75
#define UI_TEXT_MOUNT_CARD_ID 76
#define UI_TEXT_DELETE_FILE_ID 77
#define UI_TEXT_FEEDRATE_ID 78
#define UI_TEXT_FEED_MAX_X_ID 79
#define UI_TEXT_FEED_MAX_Y_ID 80
#define UI_TEXT_FEED_MAX_Z_ID 81
#define UI_TEXT_FEED_MAX_Z_DELTA_ID 82
#define UI_TEXT_FEED_HOME_X_ID 83
#define UI_TEXT_FEED_HOME_Y_ID 84
#define UI_TEXT_FEED_HOME_Z_ID 85
#define UI_TEXT_FEED_HOME_Z_DELTA_ID 86
#define UI_TEXT_ACTION_XPOSITION4A_ID 87
#define UI_TEXT_ACTION_XPOSITION4B_ID 88
#define UI_TEXT_ACTION_XPOSITION4C_ID 89
#define UI_TEXT_ACTION_XPOSITION4D_ID 90
#define UI_TEXT_ACTION_YPOSITION4A_ID 91
#define UI_TEXT_ACTION_YPOSITION4B_ID 92
#define UI_TEXT_ACTION_YPOSITION4C_ID 93
#define UI_TEXT_ACTION_YPOSITION4D_ID 94
#define UI_TEXT_ACTION_ZPOSITION4A_ID 95
#define UI_TEXT_ACTION_ZPOSITION4B_ID 96
#define UI_TEXT_ACTION_ZPOSITION4C_ID 97
#define UI_TEXT_ACTION_ZPOSITION4D_ID 98
#define UI_TEXT_ACTION_XPOSITION_FAST4A_ID 99
#define UI_TEXT_ACTION_XPOSITION_FAST4B_ID 100
#define UI_TEXT_ACTION_XPOSITION_FAST4C_ID 101
#define UI_TEXT_ACTION_XPOSITION_FAST4D_ID 102
#define UI_TEXT_ACTION_YPOSITION_FAST4A_ID 103
#define UI_TEXT_ACTION_YPOSITION_FAST4B_ID 104
#define UI_TEXT_ACTION_YPOSITION_FAST4C_ID 105
#define UI_TEXT_ACTION_YPOSITION_FAST4D_ID 106
#define UI_TEXT_ACTION_ZPOSITION_FAST4A_ID 107
#define UI_TEXT_ACTION_ZPOSITION_FAST4B_ID 108
#define UI_TEXT_ACTION_ZPOSITION_FAST4C_ID 109
#define UI_TEXT_ACTION_ZPOSITION_FAST4D_ID 110
#define UI_TEXT_ACTION_EPOSITION_FAST2A_ID 111
#define UI_TEXT_ACTION_EPOSITION_FAST2B_ID 112
#define UI_TEXT_ACTION_XPOSITION2A_ID 113
#define UI_TEXT_ACTION_XPOSITION2B_ID 114
#define UI_TEXT_ACTION_YPOSITION2A_ID 115
#define UI_TEXT_ACTION_YPOSITION2B_ID 116
#define UI_TEXT_ACTION_ZPOSITION2A_ID 117
#define UI_TEXT_ACTION_ZPOSITION2B_ID 118
#define UI_TEXT_ACTION_XPOSITION_FAST2A_ID 119
#define UI_TEXT_ACTION_XPOSITION_FAST2B_ID 120
#define UI_TEXT_ACTION_YPOSITION_FAST2A_ID 121
#define UI_TEXT_ACTION_YPOSITION_FAST2B_ID 122
#define UI_TEXT_ACTION_ZPOSITION_FAST2A_ID 123
#define UI_TEXT_ACTION_ZPOSITION_FAST2B_ID 124
#define UI_TEXT_FANSPEED_ID 125
#define UI_TEXT_ACTION_FANSPEED_ID 126
#define UI_TEXT_FAN_OFF_ID 127
#define UI_TEXT_FAN_25_ID 128
#define UI_TEXT_FAN_50_ID 129
#define UI_TEXT_FAN_75_ID 130
#define UI_TEXT_FAN_FULL_ID 131
#define UI_TEXT_STEPPER_INACTIVE_ID 132
#define UI_TEXT_STEPPER_INACTIVE2A_ID 133
#define UI_TEXT_STEPPER_INACTIVE2B_ID 134
#define UI_TEXT_POWER_INACTIVE_ID 135
#define UI_TEXT_POWER_INACTIVE2A_ID 136
#define UI_TEXT_POWER_INACTIVE2B_ID 137
#define UI_TEXT_GENERAL_ID 138
#define UI_TEXT_BAUDRATE_ID 139
#define UI_TEXT_EXTR_STEPS_ID 140
#define UI_TEXT_EXTR_START_FEED_ID 141
#define UI_TEXT_EXTR_MAX_FEED_ID 142
#define UI_TEXT_EXTR_ACCEL_ID 143
#define UI_TEXT_EXTR_WATCH_ID 144
#define UI_TEXT_EXTR_ADVANCE_L_ID 145
#define UI_TEXT_EXTR_ADVANCE_K_ID 146
#define UI_TEXT_EXTR_MANAGER_ID 147
#define UI_TEXT_EXTR_PGAIN_ID 148
#define UI_TEXT_EXTR_DEADTIME_ID 149
#define UI_TEXT_EXTR_DMAX_DT_ID 150
#define UI_TEXT_EXTR_IGAIN_ID 151
#define UI_TEXT_EXTR_DGAIN_ID 152
#define UI_TEXT_EXTR_DMIN_ID 153
#define UI_TEXT_EXTR_DMAX_ID 154
#define UI_TEXT_EXTR_PMAX_ID 155
#define UI_TEXT_STRING_HM_BANGBANG_ID 156
#define UI_TEXT_STRING_HM_PID_ID 157
#define UI_TEXT_STRING_ACTION_ID 158
#define UI_TEXT_HEATING_EXTRUDER_ID 159
#define UI_TEXT_HEATING_BED_ID 160
#define UI_TEXT_KILLED_ID 161
#define UI_TEXT_STEPPER_DISABLED_ID 162
#define UI_TEXT_EEPROM_STOREDA_ID 163
#define UI_TEXT_EEPROM_STOREDB_ID 164
#define UI_TEXT_EEPROM_LOADEDA_ID 165
#define UI_TEXT_EEPROM_LOADEDB_ID 166
#define UI_TEXT_UPLOADING_ID 167
#define UI_TEXT_PAGE_BUFFER_ID 168
#define UI_TEXT_PAGE_EXTRUDER_ID 169
#define UI_TEXT_PAGE_EXTRUDER1_ID 170
#define UI_TEXT_PAGE_EXTRUDER2_ID 171
#define UI_TEXT_PAGE_EXTRUDER3_ID 172
#define UI_TEXT_PAGE_BED_ID 173
#define UI_TEXT_SPEED_MULTIPLY_ID 174
#define UI_TEXT_FLOW_MULTIPLY_ID 175
#define UI_TEXT_SHOW_MEASUREMENT_ID 176
#define UI_TEXT_RESET_MEASUREMENT_ID 177
#define UI_TEXT_SET_MEASURED_ORIGIN_ID 178
#define UI_TEXT_ZCALIB_ID 179
#define UI_TEXT_SET_P1_ID 180
#define UI_TEXT_SET_P2_ID 181
#define UI_TEXT_SET_P3_ID 182
#define UI_TEXT_CALCULATE_LEVELING_ID 183
#define UI_TEXT_LEVEL_ID 184
#define UI_TEXT_EXTR_WAIT_RETRACT_TEMP_ID 185
#define UI_TEXT_EXTR_WAIT_RETRACT_UNITS_ID 186
#define UI_TEXT_SD_REMOVED_ID 187
#define UI_TEXT_SD_INSERTED_ID 188
#define UI_TEXT_PRINTER_READY_ID 189
#define UI_TEXT_PRINTTIME_DAYS_ID 190
#define UI_TEXT_PRINTTIME_HOURS_ID 191
#define UI_TEXT_PRINTTIME_MINUTES_ID 192
#define UI_TEXT_PRINT_TIME_ID 193
#define UI_TEXT_PRINT_FILAMENT_ID 194
#define UI_TEXT_PRINTED_ID 195
#define UI_TEXT_POWER_ID 196
#define UI_TEXT_STRING_HM_DEADTIME_ID 197
#define UI_TEXT_STRING_HM_SLOWBANG_ID 198
#define UI_TEXT_STOP_PRINT_ID 199
#define UI_TEXT_Z_BABYSTEPPING_ID 200
#define UI_TEXT_CHANGE_FILAMENT_ID 201
#define UI_TEXT_WIZ_CH_FILAMENT1_ID 202
#define UI_TEXT_WIZ_CH_FILAMENT2_ID 203
#define UI_TEXT_WIZ_CH_FILAMENT3_ID 204
#define UI_TEXT_CLICK_DONE_ID 205
#define UI_TEXT_AUTOLEVEL_ONOFF_ID 206
#define UI_TEXT_SERVOPOS_ID 207
#define UI_TEXT_IGNORE_M106_ID 208
#define UI_TEXT_WIZ_REHEAT1_ID 209
#define UI_TEXT_WIZ_REHEAT2_ID 210
#define UI_TEXT_WIZ_WAITTEMP1_ID 211
#define UI_TEXT_WIZ_WAITTEMP2_ID 212
#define UI_TEXT_EXTRUDER_JAM_ID 213
#define UI_TEXT_STANDBY_ID 214
#define UI_TEXT_BED_COATING_ID 215
#define UI_TEXT_BED_COATING_SET1_ID 216
#define UI_TEXT_BED_COATING_SET2_ID 217
#define UI_TEXT_NOCOATING_ID 218
#define UI_TEXT_BUILDTAK_ID 219
#define UI_TEXT_KAPTON_ID 220
#define UI_TEXT_BLUETAPE_ID 221
#define UI_TEXT_PETTAPE_ID 222
#define UI_TEXT_GLUESTICK_ID 223
#define UI_TEXT_CUSTOM_ID 224
#define UI_TEXT_COATING_CUSTOM_ID 225
#define UI_TEXT_LANGUAGE_ID 226
#define UI_TEXT_MAINPAGE6_1_ID 227
#define UI_TEXT_MAINPAGE6_2_ID 228
#define UI_TEXT_MAINPAGE6_3_ID 229
#define UI_TEXT_MAINPAGE6_4_ID 230
#define UI_TEXT_MAINPAGE6_5_ID 231
#define UI_TEXT_MAINPAGE6_6_ID 232
#define UI_TEXT_MAINPAGE_TEMP_BED_ID 233
#define UI_TEXT_MAINPAGE_BED_ID 234
#define UI_TEXT_MAINPAGE_Z_BUF_ID 235
#define UI_TEXT_MAINPAGE_MUL_EUSAGE_ID 236
#define UI_TEXT_MAINPAGE_XY_ID 237
#define UI_TEXT_PRINT_TIME_VALUE_ID 238
#define UI_TEXT_PRINT_FILAMENT_VALUE_ID 239
#define UI_TEXT_METER_PRINTED_ID 240
#define UI_TEXT_STATUS_ID 241
#define UI_TEXT_EMPTY_ID 242
#define UI_TEXT_TEMP_SET_ID 243
#define UI_TEXT_CURRENT_TEMP_ID 244
#define UI_TEXT_COATING_THICKNESS_ID 245
#define UI_TEXT_EXTR3_TEMP_ID 246
#define UI_TEXT_EXTR4_TEMP_ID 247
#define UI_TEXT_EXTR5_TEMP_ID 248
#define UI_TEXT_EXTR3_OFF_ID 249
#define UI_TEXT_EXTR4_OFF_ID 250
#define UI_TEXT_EXTR5_OFF_ID 251
#define UI_TEXT_EXTR3_SELECT_ID 252
#define UI_TEXT_EXTR4_SELECT_ID 253
#define UI_TEXT_EXTR5_SELECT_ID 254
#define UI_TEXT_DITTO_0_ID 255
#define UI_TEXT_DITTO_1_ID 256
#define UI_TEXT_DITTO_2_ID 257
#define UI_TEXT_DITTO_3_ID 258
#define UI_TEXT_ZPROBE_HEIGHT_ID 259
#define UI_TEXT_OFFSETS_ID 260
#define UI_TEXT_X_OFFSET_ID 261
#define UI_TEXT_Y_OFFSET_ID 262
#define UI_TEXT_Z_OFFSET_ID 263
#define UI_TEXT_LOAD_FILAMENT_ID 264
#define UI_TEXT_UNLOAD_FILAMENT_ID 265
#define UI_TEXT_FIL_SENSOR_ONOFF_ID 266
#define UI_TEXT_CLEANING_DRIPBOX_ID 267
#define UI_TEXT_CLEAN_DRIPBOX_ID 268
#define UI_TEXT_CLEAN_DRIPBOX_3_ID 269
#define UI_TEXT_EXTR_XOFF_ID 270
#define UI_TEXT_EXTR_YOFF_ID 271
#define UI_TEXT_LOAD_RIGHT_FILAMENT_ID 272
#define UI_TEXT_UNLOAD_RIGHT_FILAMENT_ID 273
#define UI_TEXT_LOAD_LEFT_FILAMENT_ID 274
#define UI_TEXT_UNLOAD_LEFT_FILAMENT_ID 275
#define UI_TEXT_FEED_LOADING_FILAMENT_ID 276
#define UI_TEXT_FEED_UNLOADING_FILAMENT_ID 277
#define UI_TEXT_LOADING_UNLOADING_DISTANCE_ID 278
#define UI_TEXT_BED_DOWN_ID 279
#define UI_TEXT_WIFI_ONOFF_ID 280
#define UI_TEXT_REDO_ACTION_ID 281
#define UI_TEXT_X_LENGTH_ID 282
#define UI_TEXT_Y_LENGTH_ID 283
#define UI_TEXT_Z_LENGTH_ID 284
#define UI_TEXT_EXT_TEMP_ABS_ID 285
#define UI_TEXT_EXT_TEMP_PLA_ID 286
#define UI_TEXT_BED_TEMP_ABS_ID 287
#define UI_TEXT_BED_TEMP_PLA_ID 288
#define UI_TEXT_ALERT_NO_FILAMENTA_ID 289
#define UI_TEXT_ALERT_NO_FILAMENTB_ID 290
#define UI_TEXT_ALERT_NO_FILAMENTC_ID 291
#define UI_TEXT_ALERT_NO_FILAMENTD_ID 292
#define UI_TEXT_MANUAL_BED_LEVEL_PAGE_1A_ID 293
#define UI_TEXT_MANUAL_BED_LEVEL_PAGE_1B_ID 294
#define UI_TEXT_MANUAL_BED_LEVEL_PAGE_1C_ID 295
#define UI_TEXT_MANUAL_BED_LEVEL_PAGE_1D_ID 296
#define UI_TEXT_MANUAL_BED_LEVEL_PAGE_2A_ID 297
#define UI_TEXT_MANUAL_BED_LEVEL_PAGE_2B_ID 298
#define UI_TEXT_MANUAL_BED_LEVEL_PAGE_2C_ID 299
#define UI_TEXT_MANUAL_BED_LEVEL_PAGE_2D_ID 300
#define UI_TEXT_MANUAL_BED_LEVEL_PAGE_3A_ID 301
#define UI_TEXT_MANUAL_BED_LEVEL_PAGE_3B_ID 302
#define UI_TEXT_MANUAL_BED_LEVEL_PAGE_3C_ID 303
#define UI_TEXT_MANUAL_BED_LEVEL_PAGE_3D_ID 304
#define UI_TEXT_MANUAL_BED_LEVEL_PAGE_4A_ID 305
#define UI_TEXT_MANUAL_BED_LEVEL_PAGE_4B_ID 306
#define UI_TEXT_MANUAL_BED_LEVEL_PAGE_4C_ID 307
#define UI_TEXT_MANUAL_BED_LEVEL_PAGE_4D_ID 308
#define UI_TEXT_MANUAL_BED_LEVEL_PAGE_5A_ID 309
#define UI_TEXT_MANUAL_BED_LEVEL_PAGE_5B_ID 310
#define UI_TEXT_MANUAL_BED_LEVEL_PAGE_5C_ID 311
#define UI_TEXT_MANUAL_BED_LEVEL_PAGE_5D_ID 312
#define UI_TEXT_MANUAL_BED_LEVEL_PAGE_6A_ID 313
#define UI_TEXT_MANUAL_BED_LEVEL_PAGE_6B_ID 314
#define UI_TEXT_MANUAL_BED_LEVEL_PAGE_6C_ID 315
#define UI_TEXT_MANUAL_BED_LEVEL_PAGE_6D_ID 316
#define UI_TEXT_MANUAL_BED_LEVEL_PAGE_7A_ID 317
#define UI_TEXT_MANUAL_BED_LEVEL_PAGE_7B_ID 318
#define UI_TEXT_MANUAL_BED_LEVEL_PAGE_7C_ID 319
#define UI_TEXT_MANUAL_BED_LEVEL_PAGE_7D_ID 320
#define UI_TEXT_MANUAL_BED_LEVEL_PAGE_8A_ID 321
#define UI_TEXT_MANUAL_BED_LEVEL_PAGE_8B_ID 322
#define UI_TEXT_MANUAL_BED_LEVEL_PAGE_8C_ID 323
#define UI_TEXT_MANUAL_BED_LEVEL_PAGE_8D_ID 324
#define UI_TEXT_MANUAL_BED_LEVEL_PAGE_9A_ID 325
#define UI_TEXT_MANUAL_BED_LEVEL_PAGE_9B_ID 326
#define UI_TEXT_MANUAL_BED_LEVEL_PAGE_9C_ID 327
#define UI_TEXT_MANUAL_BED_LEVEL_PAGE_9D_ID 328
#define UI_TEXT_MANUAL_BED_LEVEL_PAGE_10A_ID 329
#define UI_TEXT_MANUAL_BED_LEVEL_PAGE_10B_ID 330
#define UI_TEXT_MANUAL_BED_LEVEL_PAGE_10C_ID 331
#define UI_TEXT_MANUAL_BED_LEVEL_PAGE_10D_ID 332
#define UI_TEXT_X_MIN_SETTING_ID 333
#define UI_TEXT_Y_MIN_SETTING_ID 334
#define UI_TEXT_Z_MIN_SETTING_ID 335
#define UI_TEXT_TOP_COVER_OPEN_ID 336
#define UI_TEXT_TOP_SENSOR_ONOFF_ID 337
#define UI_TEXT_VERSION_MENU_ID 338
#define UI_TEXT_COOLDOWN_MENU_ID 339
#define UI_TEXT_WAIT_OK_ID 340
#define UI_TEXT_FAILED_ID 341
#define UI_TEXT_PLEASE_WAIT_ID 342
#define UI_TEXT_MANUAL_LEVEL_ID 343
#define UI_TEXT_WARNING_ID 344
#define UI_TEXT_EXTRUDER_COLD_ID 345
#define UI_TEXT_HEAT_EXTRUDER_ID 346
#define UI_TEXT_WRITE_DEBUG_ID 347
#define UI_TEXT_POWER_SAVE_MENU_ID 348
#define UI_TEXT_MAINTENANCE_ID 349
#define UI_TEXT_SETTINGS_ID 350
#define UI_TEXT_LOAD_UNLOAD_ID 351
#define UI_TEXT_BED_ID 352
#define UI_TEXT_BED_OFF_ID 353
#define UI_TEXT_LIGHT_OFF_AFTER_ID 354
#define UI_TEXT_LIGHT_OFF_AFTER2A_ID 355
#define UI_TEXT_LIGHT_OFF_AFTER2B_ID 356
#define UI_TEXT_WARNING_POS_X_UNKNOWN_ID 357
#define UI_TEXT_WARNING_POS_Y_UNKNOWN_ID 358
#define UI_TEXT_WARNING_POS_Z_UNKNOWN_ID 359
#define UI_TEXT_MOVING_ID 360
#define UI_TEXT_PREPARING_ID 361
#define UI_TEXT_KEEP_LIGHT_ON_ID 362
#define UI_TEXT_LOADING_FILAMENT_ID 363
#define UI_TEXT_UNLOADING_FILAMENT_ID 364
#define UI_TEXT_LOADUNLOAD_FILAMENT_ID 365
#define UI_TEXT_AUTOLEVEL_ID 366
#define UI_TEXT_Z_PROBE_FAILED_ID 367
#define UI_TEXT_SAVE_ID 368
#define UI_TEXT_ZMIN_ID 369
#define UI_TEXT_ZPROBING_ID 370
#define UI_TEXT_ZPOSITION_ID 371
#define UI_TEXT_DO_YOU_ID 372
#define UI_TEXT_CLEAN1_ID 373
#define UI_TEXT_CLEAN2_ID 374
#define UI_TEXT_DISPLAY_MODE_ID 375
#define UI_TEXT_EASY_MODE_ID 376
#define UI_TEXT_ADVANCED_MODE_ID 377
#define UI_TEXT_POWER_SAVE_ID 378
#define UI_TEXT_BADGE_LIGHT_ONOFF_ID 379
#define UI_TEXT_SOUND_ONOF_ID 380
#define UI_TEXT_YES_SELECTED_ID 381
#define UI_TEXT_NO_SELECTED_ID 382
#define UI_TEXT_PLEASE_CONFIRM_ID 383
#define UI_TEXT_CANCEL_ACTION_ID 384
#define UI_TEXT_CONTINUE_ACTION_ID 385
#define UI_TEXT_CANCELED_ID 386
#define UI_TEXT_CONFIRMED_ID 387
#define UI_TEXT_CLEAN_NOZZLE_ID 388
#define UI_TEXT_CLEANING_NOZZLE_ID 389
#define UI_TEXT_CLEAN_DRIPBOX_1_ID 390
#define UI_TEXT_CLEAN_DRIPBOX_2_ID 391
#define UI_TEXT_PUSH_FILAMENT_ID 392
#define UI_TEXT_WAIT_FILAMENT_ID 393
#define UI_TEXT_LOAD_FAILSAFE2_ID 394
#define UI_TEXT_LOAD_FAILSAFE_ID 395
#define UI_TEXT_HEATING_ID 396
#define UI_TEXT_WAIT_FOR_OK_ID 397
#define UI_TEXT_MAIN_LINE1_ID 398
#define UI_TEXT_MAIN_LINE2_ID 399
#define UI_TEXT_AUTOLEVEL_MATRIX_ID 400



// Universal definitions

#define UI_TEXT_SEL              cSEL
#define UI_TEXT_NOSEL            cUNSEL
#define UI_TEXT_CONFIRMATION     "%C1","%C2","%C3","%C4"

// At first all terms in english are defined. After that the selected language
// can overwrite the definition. That way new strings are at least in english
// available.

#define UI_TEXT_ON_EN               " On"
#define UI_TEXT_OFF_EN              "Off"
#define UI_TEXT_NA_EN               "N/A" // Output for not available
#define UI_TEXT_YES_EN              "Yes"
#define UI_TEXT_NO_EN               "No"
#define UI_TEXT_PRINT_POS_EN        "Printing..."
#define UI_TEXT_PRINTING_EN         "Printing"
#define UI_TEXT_IDLE_EN             "Idle"
#define UI_TEXT_NOSDCARD_EN         "No SD card"
#define UI_TEXT_ERROR_EN            "**** ERROR ****"
#define UI_TEXT_BACK_EN             "Back " cUP
#define UI_TEXT_QUICK_SETTINGS_EN   "Quick settings"
#define UI_TEXT_ERRORMSG_EN         "%oe"
#define UI_TEXT_CONFIGURATION_EN    "Configuration"
#define UI_TEXT_POSITION_EN         "Position"
#define UI_TEXT_EXTRUDER_EN         "Extruder"
#define UI_TEXT_SD_CARD_EN          "SD card"
#define UI_TEXT_DEBUGGING_EN        "Debugging"
#define UI_TEXT_HOME_DELTA_EN       "Home delta"
#define UI_TEXT_HOME_ALL_EN         "Home all"
#define UI_TEXT_HOME_X_EN           "Home X"
#define UI_TEXT_HOME_Y_EN           "Home Y"
#define UI_TEXT_HOME_Z_EN           "Home Z"
#define UI_TEXT_PREHEAT_PLA_EN      "Preheat PLA   %B1"
#define UI_TEXT_PREHEAT_ABS_EN      "Preheat ABS   %B2"
#define UI_TEXT_LIGHTS_ONOFF_EN     "Lights:     %lo"
#define UI_TEXT_COOLDOWN_EN         "Cooldown"
#define UI_TEXT_SET_TO_ORIGIN_EN    "Set to origin"
#define UI_TEXT_DISABLE_STEPPER_EN  "Disable stepper"
#define UI_TEXT_X_POSITION_EN       "X position"
#define UI_TEXT_X_POS_FAST_EN       "X pos. fast"
#define UI_TEXT_Y_POSITION_EN       "Y position"
#define UI_TEXT_Y_POS_FAST_EN       "Y pos. fast"
#define UI_TEXT_Z_POSITION_EN       "Z position"
#define UI_TEXT_Z_POS_FAST_EN       "Z pos. fast"
#define UI_TEXT_E_POSITION_EN       "Extr. position"
#define UI_TEXT_BED_TEMP_EN         "Bed :%eb/%Eb" cDEG "C"
#if NUM_EXTRUDER == 1
#define UI_TEXT_EXTR0_TEMP_EN       "Ext :%e0/%E0" cDEG "C"
#else
#define UI_TEXT_EXTR0_TEMP_EN       "Ext1 :%e0/%E0" cDEG "C"
#endif
#define UI_TEXT_EXTR1_TEMP_EN       "Ext2 :%e1/%E1" cDEG "C"
#define UI_TEXT_EXTR2_TEMP_EN       "Ext3 :%e2/%E2" cDEG "C"
#if NUM_EXTRUDER == 1
#define UI_TEXT_EXTR0_OFF_EN        "SwitchOff Ext %B4"
#else
#define UI_TEXT_EXTR0_OFF_EN        "SwitchOff Ext1 %B4"
#endif
#define UI_TEXT_EXTR1_OFF_EN        "SwitchOff Ext2%B5"
#define UI_TEXT_EXTR2_OFF_EN        "SwitchOff Ext3%B6"
#define UI_TEXT_EXTR0_SELECT_EN     "%X0Select Extr.1"
#define UI_TEXT_EXTR1_SELECT_EN     "%X1Select Extr.2"
#define UI_TEXT_EXTR2_SELECT_EN     "%X2Select Extr.3"
#define UI_TEXT_EXTR_ORIGIN_EN      "Set Origin"
#define UI_TEXT_PRINT_X_EN "Print X:%ax"
#define UI_TEXT_PRINT_Y_EN "Print Y:%ay"
#define UI_TEXT_PRINT_Z_EN "Print Z:%az"
#define UI_TEXT_PRINT_Z_DELTA_EN "Print:%az"
#define UI_TEXT_MOVE_X_EN "Move X:   %aX"
#define UI_TEXT_MOVE_Y_EN "Move Y:   %aY"
#define UI_TEXT_MOVE_Z_EN "Move Z:   %aZ"
#define UI_TEXT_MOVE_Z_DELTA_EN "Move:     %aZ"
#define UI_TEXT_JERK_EN "Jerk:     %aj"
#define UI_TEXT_ZJERK_EN "Z-Jerk:   %aJ"
#define UI_TEXT_ACCELERATION_EN "Acceleration"
#define UI_TEXT_STORE_TO_EEPROM_EN "Store \176 EEPROM"
#define UI_TEXT_LOAD_EEPROM_EN "Load \177 EEPROM"
#define UI_TEXT_DBG_ECHO_EN "Echo:       %do"
#define UI_TEXT_DBG_INFO_EN "Info:       %di"
#define UI_TEXT_DBG_ERROR_EN "Errors:     %de"
#define UI_TEXT_DBG_DRYRUN_EN "Dry run:    %dd"
#define UI_TEXT_OPS_OFF_EN "%O0 OPS Off"
#define UI_TEXT_OPS_CLASSIC_EN "%O1 OPS Classic"
#define UI_TEXT_OPS_FAST_EN "%O2 OPS Fast"
#define UI_TEXT_OPS_RETRACT_EN "Retract:    %Or"
#define UI_TEXT_OPS_BACKSLASH_EN "Backsl.:    %Ob"
#define UI_TEXT_OPS_MINDIST_EN "Min.dist:   %Od"
#define UI_TEXT_OPS_MOVE_AFTER_EN "Move after: %Oa"
#define UI_TEXT_ANTI_OOZE_EN "Anti Ooze"
#define UI_TEXT_PRINT_FILE_EN "Print file"
#define UI_TEXT_PAUSE_PRINT_EN "Pause Print"
#define UI_TEXT_CONTINUE_PRINT_EN "Continue Print"
#define UI_TEXT_UNMOUNT_CARD_EN "Unmount Card"
#define UI_TEXT_MOUNT_CARD_EN "Mount Card"
#define UI_TEXT_DELETE_FILE_EN "Delete file"
#define UI_TEXT_FEEDRATE_EN "Feedrate"
#define UI_TEXT_FEED_MAX_X_EN "Max X:    %fx"
#define UI_TEXT_FEED_MAX_Y_EN "Max Y:    %fy"
#define UI_TEXT_FEED_MAX_Z_EN "Max Z:    %fz"
#define UI_TEXT_FEED_MAX_Z_DELTA_EN "Max:      %fz"
#define UI_TEXT_FEED_HOME_X_EN "Home X:   %fX"
#define UI_TEXT_FEED_HOME_Y_EN "Home Y:   %fY"
#define UI_TEXT_FEED_HOME_Z_EN "Home Z:   %fZ"
#define UI_TEXT_FEED_HOME_Z_DELTA_EN "Home:     %fZ"
#define UI_TEXT_ACTION_XPOSITION4A_EN "X:%x0 mm"
#define UI_TEXT_ACTION_XPOSITION4B_EN "Min endstop:%sx"
#define UI_TEXT_ACTION_XPOSITION4C_EN "Max endstop:%sX"
#define UI_TEXT_ACTION_XPOSITION4D_EN ""
#define UI_TEXT_ACTION_YPOSITION4A_EN "Y:%x1 mm"
#define UI_TEXT_ACTION_YPOSITION4B_EN "Min endstop:%sy"
#define UI_TEXT_ACTION_YPOSITION4C_EN "Max endstop:%sY"
#define UI_TEXT_ACTION_YPOSITION4D_EN ""
#define UI_TEXT_ACTION_ZPOSITION4A_EN "Z:%x2 mm"
#define UI_TEXT_ACTION_ZPOSITION4B_EN "Min endstop:%sz"
#define UI_TEXT_ACTION_ZPOSITION4C_EN "Max endstop:%sZ"
#define UI_TEXT_ACTION_ZPOSITION4D_EN ""
#define UI_TEXT_ACTION_XPOSITION_FAST4A_EN "X:%x0 mm"
#define UI_TEXT_ACTION_XPOSITION_FAST4B_EN "Min endstop:%sx"
#define UI_TEXT_ACTION_XPOSITION_FAST4C_EN "Max endstop:%sX"
#define UI_TEXT_ACTION_XPOSITION_FAST4D_EN ""
#define UI_TEXT_ACTION_YPOSITION_FAST4A_EN "Y:%x1 mm"
#define UI_TEXT_ACTION_YPOSITION_FAST4B_EN "Min endstop:%sy"
#define UI_TEXT_ACTION_YPOSITION_FAST4C_EN "Max endstop:%sY"
#define UI_TEXT_ACTION_YPOSITION_FAST4D_EN ""
#define UI_TEXT_ACTION_ZPOSITION_FAST4A_EN "Z:%x2 mm"
#define UI_TEXT_ACTION_ZPOSITION_FAST4B_EN "Min endstop:%sz"
#define UI_TEXT_ACTION_ZPOSITION_FAST4C_EN "Max endstop:%sZ"
#define UI_TEXT_ACTION_ZPOSITION_FAST4D_EN ""
#define UI_TEXT_ACTION_EPOSITION_FAST2A_EN "E:%x3 mm"
#define UI_TEXT_ACTION_EPOSITION_FAST2B_EN "1 click = 1 mm"
#define UI_TEXT_ACTION_XPOSITION2A_EN "X:%x0 mm"
#define UI_TEXT_ACTION_XPOSITION2B_EN "Min:%sx Max:%sX"
#define UI_TEXT_ACTION_YPOSITION2A_EN "Y:%x1 mm"
#define UI_TEXT_ACTION_YPOSITION2B_EN "Min:%sy Max:%sY"
#define UI_TEXT_ACTION_ZPOSITION2A_EN "Z:%x2 mm"
#define UI_TEXT_ACTION_ZPOSITION2B_EN "Min:%sz Max:%sZ"
#define UI_TEXT_ACTION_XPOSITION_FAST2A_EN "X:%x0 mm"
#define UI_TEXT_ACTION_XPOSITION_FAST2B_EN "Min:%sx Max:%sX"
#define UI_TEXT_ACTION_YPOSITION_FAST2A_EN "Y:%x1 mm"
#define UI_TEXT_ACTION_YPOSITION_FAST2B_EN "Min:%sy Max:%sY"
#define UI_TEXT_ACTION_ZPOSITION_FAST2A_EN "Z:%x2 mm"
#define UI_TEXT_ACTION_ZPOSITION_FAST2B_EN "Min:%sz Max:%sZ"
#define UI_TEXT_FANSPEED_EN "Fan speed"
#define UI_TEXT_ACTION_FANSPEED_EN "Fan speed:%Fs%%%"
#define UI_TEXT_FAN_OFF_EN "Turn Fan Off"
#define UI_TEXT_FAN_25_EN "Set Fan 25%%%"
#define UI_TEXT_FAN_50_EN "Set Fan 50%%%"
#define UI_TEXT_FAN_75_EN "Set Fan 75%%%"
#define UI_TEXT_FAN_FULL_EN "Set Fan Full"
#define UI_TEXT_STEPPER_INACTIVE_EN "Steppers Inact"
#define UI_TEXT_STEPPER_INACTIVE2A_EN "Dis. After:%is"
#define UI_TEXT_STEPPER_INACTIVE2B_EN "[min] 0=Off"
#define UI_TEXT_POWER_INACTIVE_EN "Max. Inact."
#define UI_TEXT_POWER_INACTIVE2A_EN "Dis. After:%ip"
#define UI_TEXT_POWER_INACTIVE2B_EN "[min] 0=Off"
#define UI_TEXT_GENERAL_EN "General"
#define UI_TEXT_BAUDRATE_EN "Baudrate:%oc"
#define UI_TEXT_EXTR_STEPS_EN "Steps/MM: %Se"
#define UI_TEXT_EXTR_START_FEED_EN "Start FR: %Xf"
#define UI_TEXT_EXTR_MAX_FEED_EN "Max FR:   %XF"
#define UI_TEXT_EXTR_ACCEL_EN "Accel:    %XA"
#define UI_TEXT_EXTR_WATCH_EN "Stab.Time:%Xw"
#define UI_TEXT_EXTR_ADVANCE_L_EN "Advance L.: %Xl"
#define UI_TEXT_EXTR_ADVANCE_K_EN "Advance Q.: %Xa"
#define UI_TEXT_EXTR_MANAGER_EN "Ctrl:%Xh"
#define UI_TEXT_EXTR_PGAIN_EN "PID P:  %Xp"
#define UI_TEXT_EXTR_DEADTIME_EN "Deadtime:%Xp"
#define UI_TEXT_EXTR_DMAX_DT_EN "Control PWM:%XM"
#define UI_TEXT_EXTR_IGAIN_EN "PID I:  %Xi"
#define UI_TEXT_EXTR_DGAIN_EN "PID D:  %Xd"
#define UI_TEXT_EXTR_DMIN_EN "Drive Min:  %Xm"
#define UI_TEXT_EXTR_DMAX_EN "Drive Max:  %XM"
#define UI_TEXT_EXTR_PMAX_EN "PID Max:    %XD"
#define UI_TEXT_STRING_HM_BANGBANG_EN "BangBang"
#define UI_TEXT_STRING_HM_PID_EN "PID"
#define UI_TEXT_STRING_ACTION_EN "Action:%la"
#define UI_TEXT_HEATING_EXTRUDER_EN "Heating Extruder%Ne"
#define UI_TEXT_HEATING_BED_EN "Heating Bed"
#define UI_TEXT_KILLED_EN "Stopped"
#define UI_TEXT_STEPPER_DISABLED_EN "Stepper Disabled"
#define UI_TEXT_EEPROM_STOREDA_EN "Configuration"
#define UI_TEXT_EEPROM_STOREDB_EN "stored \176 EEPROM"
#define UI_TEXT_EEPROM_LOADEDA_EN "Configuration"
#define UI_TEXT_EEPROM_LOADEDB_EN "loaded \177 EEPROM"
#define UI_TEXT_UPLOADING_EN "Uploading..."
#define UI_TEXT_PAGE_BUFFER_EN "Buffer:%oB"
#define UI_TEXT_PAGE_EXTRUDER_EN " E:%ec/%Ec" cDEG "C" cARROW "%oC"
#define UI_TEXT_PAGE_EXTRUDER1_EN "E1:%e0/%E0" cDEG "C" cARROW "%o0"
#define UI_TEXT_PAGE_EXTRUDER2_EN "E2:%e1/%E1" cDEG "C" cARROW "%o1"
#define UI_TEXT_PAGE_EXTRUDER3_EN "E3:%e2/%E2" cDEG "C" cARROW "%o2"
#define UI_TEXT_PAGE_BED_EN " B:%eb/%Eb" cDEG "C" cARROW "%ob"
#define UI_TEXT_SPEED_MULTIPLY_EN "Speed Mul.:%om%%%"
#define UI_TEXT_FLOW_MULTIPLY_EN "Flow Mul.: %of%%%"
#define UI_TEXT_SHOW_MEASUREMENT_EN "Show meas."
#define UI_TEXT_RESET_MEASUREMENT_EN "Reset meas."
#define UI_TEXT_SET_MEASURED_ORIGIN_EN "Set Z=0"
#define UI_TEXT_ZCALIB_EN "Z Calib."
#define UI_TEXT_SET_P1_EN "Set P1"
#define UI_TEXT_SET_P2_EN "Set P2"
#define UI_TEXT_SET_P3_EN "Set P3"
#define UI_TEXT_CALCULATE_LEVELING_EN "Calculate Leveling"
#define UI_TEXT_LEVEL_EN "Level delta"
#define UI_TEXT_EXTR_WAIT_RETRACT_TEMP_EN "Wait T.:%XT" cDEG "C"
#define UI_TEXT_EXTR_WAIT_RETRACT_UNITS_EN "Wait U.: %XU mm"
#define UI_TEXT_SD_REMOVED_EN "SD Card removed"
#define UI_TEXT_SD_INSERTED_EN "SD Card inserted"
#define UI_TEXT_PRINTER_READY_EN "Printer ready."
#define UI_TEXT_PRINTTIME_DAYS_EN " days_EN "
#define UI_TEXT_PRINTTIME_HOURS_EN ":"
#define UI_TEXT_PRINTTIME_MINUTES_EN ""
#define UI_TEXT_PRINT_TIME_EN "Printing time"
#define UI_TEXT_PRINT_FILAMENT_EN "Filament printed"
#define UI_TEXT_PRINTED_EN "printed"
#define UI_TEXT_POWER_EN "ATX power on/off"
#define UI_TEXT_STRING_HM_DEADTIME_EN "Dead Time"
#define UI_TEXT_STRING_HM_SLOWBANG_EN "SlowBang"
#define UI_TEXT_STOP_PRINT_EN "Stop Print"
#define UI_TEXT_Z_BABYSTEPPING_EN "Z Babystep.:%oYmm"
#define UI_TEXT_CHANGE_FILAMENT_EN "Change filament"
#define UI_TEXT_WIZ_CH_FILAMENT1_EN "Change filament"
#define UI_TEXT_WIZ_CH_FILAMENT2_EN "Rotate to move"
#define UI_TEXT_WIZ_CH_FILAMENT3_EN "filament up/down"
#define UI_TEXT_CLICK_DONE_EN "Click when done"
#define UI_TEXT_AUTOLEVEL_ONOFF_EN "Autolevel: %ll"
#define UI_TEXT_SERVOPOS_EN "Servo pos.: %oS"
#define UI_TEXT_IGNORE_M106_EN "Ignore M106 cmd %Fi"
#define UI_TEXT_WIZ_REHEAT1_EN "Click to reheat"
#define UI_TEXT_WIZ_REHEAT2_EN "extruders."
#define UI_TEXT_WIZ_WAITTEMP1_EN "Wait for target"
#define UI_TEXT_WIZ_WAITTEMP2_EN "temperatures ..."
#define UI_TEXT_EXTRUDER_JAM_EN "Extruder Jam"
#define UI_TEXT_STANDBY_EN "Standby"
#define UI_TEXT_BED_COATING_EN "Bed coating"
#define UI_TEXT_BED_COATING_SET1_EN "Bed coating set to"
#define UI_TEXT_BED_COATING_SET2_EN ""
#define UI_TEXT_NOCOATING_EN "No coating"
#define UI_TEXT_BUILDTAK_EN "BuildTak"
#define UI_TEXT_KAPTON_EN "Kapton"
#define UI_TEXT_BLUETAPE_EN "Blue paper tape"
#define UI_TEXT_PETTAPE_EN "Green PET tape"
#define UI_TEXT_GLUESTICK_EN "Glue stick"
#define UI_TEXT_CUSTOM_EN "Custom"
#define UI_TEXT_COATING_CUSTOM_EN "Custom:%BCmm"
#define UI_TEXT_LANGUAGE_EN "Language"
#if NUM_EXTRUDER > 2 || MIXING_EXTRUDER != 0
  #define UI_TEXT_MAINPAGE6_1_EN "\xa %ec/%Ec\xb0 X:%x0"
#else
  #define UI_TEXT_MAINPAGE6_1_EN "\xa %e0/%E0\xb0 X:%x0"
#endif // NUM_EXTRUDER
#if NUM_EXTRUDER == 2 && MIXING_EXTRUDER == 0
  #define UI_TEXT_MAINPAGE6_2_EN "\xa %e1/%E1\xb0 Y:%x1"
#elif HAVE_HEATED_BED
  #define UI_TEXT_MAINPAGE6_2_EN "\xe %eb/%Eb\xb0 Y:%x1"
#else
  #define UI_TEXT_MAINPAGE6_2_EN "             Y:%x1"
#endif
#if HAVE_HEATED_BED && NUM_EXTRUDER == 2 && MIXING_EXTRUDER == 0
 #define UI_TEXT_MAINPAGE6_3_EN "\xe %eb/%Eb\xb0 Z:%x2"
#elif FEATURE_DITTO_PRINTING
  #define UI_TEXT_MAINPAGE6_3_EN "Copies: %ed    Z:%x2"
#else
  #define UI_TEXT_MAINPAGE6_3_EN "Flow:\xfd %of%%%   Z:%x2"
#endif
#define UI_TEXT_MAINPAGE6_4_EN "Mul: %om%%% \xfd   E: %x4m"
#define UI_TEXT_MAINPAGE6_5_EN "Buf: %oB"
#define UI_TEXT_MAINPAGE6_6_EN "%os"
#define UI_TEXT_MAINPAGE_TEMP_BED_EN cTEMP "%ec/%Ec" cDEG "B%eB/%Eb" cDEG
#define UI_TEXT_MAINPAGE_BED_EN "B%eB/%Eb" cDEG
#define UI_TEXT_MAINPAGE_Z_BUF_EN "Z:%x2  Buf : %oB"
#define UI_TEXT_MAINPAGE_MUL_EUSAGE_EN "Mul: %om   E:%x4"
#define UI_TEXT_MAINPAGE_XY_EN "X:%x0 Y:%x1"
#define UI_TEXT_PRINT_TIME_VALUE_EN "%Ut"
#define UI_TEXT_PRINT_FILAMENT_VALUE_EN "%Uf m"
#define UI_TEXT_METER_PRINTED_EN "%Uf m " UI_TEXT_PRINTED_EN
#define UI_TEXT_STATUS_EN "%os"
#define UI_TEXT_EMPTY_EN ""
#define UI_TEXT_TEMP_SET_EN cTEMP "%ec/%Ec" cDEG
#define UI_TEXT_CURRENT_TEMP_EN cTEMP "%ec" cDEG
#define UI_TEXT_COATING_THICKNESS_EN " %BCmm"
#define UI_TEXT_EXTR3_TEMP_EN "Temp. 4 :%e3/%E3" cDEG "C"
#define UI_TEXT_EXTR4_TEMP_EN "Temp. 5 :%e4/%E4" cDEG "C"
#define UI_TEXT_EXTR5_TEMP_EN "Temp. 6 :%e5/%E5" cDEG "C"
#define UI_TEXT_EXTR3_OFF_EN "Turn extr. 4 off"
#define UI_TEXT_EXTR4_OFF_EN "Turn extr. 5 off"
#define UI_TEXT_EXTR5_OFF_EN "Turn extr. 6 off"
#define UI_TEXT_EXTR3_SELECT_EN "%X3 Select extr. 4"
#define UI_TEXT_EXTR4_SELECT_EN "%X4 Select extr. 5"
#define UI_TEXT_EXTR5_SELECT_EN "%X5 Select extr. 6"
#define UI_TEXT_DITTO_0_EN "%D0 No copies"
#define UI_TEXT_DITTO_1_EN "%D1 1 copy"
#define UI_TEXT_DITTO_2_EN "%D2 2 copies"
#define UI_TEXT_DITTO_3_EN "%D3 3 copies"
#define UI_TEXT_ZPROBE_HEIGHT_EN "Z-probe height:%zh"
#define UI_TEXT_OFFSETS_EN "Set print offsets"
#define UI_TEXT_X_OFFSET_EN "Set X offset:%T0mm"
#define UI_TEXT_Y_OFFSET_EN "Set Y offset:%T1mm"
#define UI_TEXT_Z_OFFSET_EN "Set Z offset:%T2mm"
#define UI_TEXT_LOAD_FILAMENT_EN "Load Filament"
#define UI_TEXT_UNLOAD_FILAMENT_EN "Unload Filament"
#if NUM_EXTRUDER == 1
#define UI_TEXT_FIL_SENSOR_ONOFF_EN "Fil.Sensor: %sf"
#define UI_TEXT_CLEANING_DRIPBOX_EN "Cleaning Dripbox"
#define UI_TEXT_CLEAN_DRIPBOX_EN "Clean Dripbox"
#define UI_TEXT_CLEAN_DRIPBOX_3_EN "Dripbox"
#define UI_TEXT_EXTR_XOFF_EN "Xoffset:%Xx"
#define UI_TEXT_EXTR_YOFF_EN "Yoffset:%Xy"
#else
#define UI_TEXT_FIL_SENSOR_ONOFF_EN "Fil.Sensors:%sf"
#define UI_TEXT_CLEAN_DRIPBOX_EN "Clean Dripboxes"
#define UI_TEXT_CLEANING_DRIPBOX_EN "Cleaning Dripboxes"
#define UI_TEXT_CLEAN_DRIPBOX_3_EN "Dripboxes"
#define UI_TEXT_EXTR_XOFF_EN "Xoffst:%Xx"
#define UI_TEXT_EXTR_YOFF_EN "Yoffst:%Xy"
#endif
#define UI_TEXT_LOAD_RIGHT_FILAMENT_EN "Load Right \005"
#define UI_TEXT_UNLOAD_RIGHT_FILAMENT_EN "Unload Right \005"
#define UI_TEXT_LOAD_LEFT_FILAMENT_EN "Load Left \005"
#define UI_TEXT_UNLOAD_LEFT_FILAMENT_EN "Unload Left \005"
#define UI_TEXT_FEED_LOADING_FILAMENT_EN "Load Fil.:%fl"
#define UI_TEXT_FEED_UNLOADING_FILAMENT_EN "Unload F.:%fu"
#define UI_TEXT_LOADING_UNLOADING_DISTANCE_EN "Load dist.: %fd"
#define UI_TEXT_BED_DOWN_EN "Bed Down"
#define UI_TEXT_WIFI_ONOFF_EN "Wifi:       %wo"
#define UI_TEXT_REDO_ACTION_EN "Do it again ?"
#define UI_TEXT_X_LENGTH_EN "X Length:%Lxmm"
#define UI_TEXT_Y_LENGTH_EN "Y Length:%Lymm"
#define UI_TEXT_Z_LENGTH_EN "Z Length:%Lzmm"
#define UI_TEXT_EXT_TEMP_ABS_EN "T\002Ext.ABS:%t1\002C"
#define UI_TEXT_EXT_TEMP_PLA_EN "T\002Ext.PLA:%t2\002C"
#define UI_TEXT_BED_TEMP_ABS_EN "T\002Bed ABS:%t3\002C"
#define UI_TEXT_BED_TEMP_PLA_EN "T\002Bed PLA:%t4\002C"
#define UI_TEXT_ALERT_NO_FILAMENTA_EN "Extruder%Ne has no"
#define UI_TEXT_ALERT_NO_FILAMENTB_EN "filament !"
#define UI_TEXT_ALERT_NO_FILAMENTC_EN "Push Ok to go to"
#define UI_TEXT_ALERT_NO_FILAMENTD_EN "change filament"
#define UI_TEXT_MANUAL_BED_LEVEL_PAGE_1A_EN "Find the 3 knobs"
#define UI_TEXT_MANUAL_BED_LEVEL_PAGE_1B_EN "on the bottom of"
#define UI_TEXT_MANUAL_BED_LEVEL_PAGE_1C_EN "platform and"
#define UI_TEXT_MANUAL_BED_LEVEL_PAGE_1D_EN "tighten 4 turns."
#define UI_TEXT_MANUAL_BED_LEVEL_PAGE_2A_EN "I am going to"
#define UI_TEXT_MANUAL_BED_LEVEL_PAGE_2B_EN "move extruder to"
#define UI_TEXT_MANUAL_BED_LEVEL_PAGE_2C_EN "some positions"
#define UI_TEXT_MANUAL_BED_LEVEL_PAGE_2D_EN "for adjustment."
#define UI_TEXT_MANUAL_BED_LEVEL_PAGE_3A_EN "In each position"
#define UI_TEXT_MANUAL_BED_LEVEL_PAGE_3B_EN "we will need to"
#define UI_TEXT_MANUAL_BED_LEVEL_PAGE_3C_EN "adjust 2 knobs"
#define UI_TEXT_MANUAL_BED_LEVEL_PAGE_3D_EN "at same time."
#define UI_TEXT_MANUAL_BED_LEVEL_PAGE_4A_EN "Nozzle is on the"
#define UI_TEXT_MANUAL_BED_LEVEL_PAGE_4B_EN "right height if"
#define UI_TEXT_MANUAL_BED_LEVEL_PAGE_4C_EN "can just slide"
#define UI_TEXT_MANUAL_BED_LEVEL_PAGE_4D_EN "a sheet of paper"
#define UI_TEXT_MANUAL_BED_LEVEL_PAGE_5A_EN "between nozzle"
#define UI_TEXT_MANUAL_BED_LEVEL_PAGE_5B_EN "and plate. Grab"
#define UI_TEXT_MANUAL_BED_LEVEL_PAGE_5C_EN "a sheet of paper"
#define UI_TEXT_MANUAL_BED_LEVEL_PAGE_5D_EN "to proceed."
#define UI_TEXT_MANUAL_BED_LEVEL_PAGE_6A_EN "Adjust the front"
#define UI_TEXT_MANUAL_BED_LEVEL_PAGE_6B_EN "knob(s) so paper"
#define UI_TEXT_MANUAL_BED_LEVEL_PAGE_6C_EN "just slides amid"
#define UI_TEXT_MANUAL_BED_LEVEL_PAGE_6D_EN "nozzle and plate"
#define UI_TEXT_MANUAL_BED_LEVEL_PAGE_7A_EN "Adjust the back"
#define UI_TEXT_MANUAL_BED_LEVEL_PAGE_7B_EN "knob(s) so paper"
#define UI_TEXT_MANUAL_BED_LEVEL_PAGE_7C_EN "just slides amid"
#define UI_TEXT_MANUAL_BED_LEVEL_PAGE_7D_EN "nozzle and plate"
#define UI_TEXT_MANUAL_BED_LEVEL_PAGE_8A_EN "Adjust the back"
#define UI_TEXT_MANUAL_BED_LEVEL_PAGE_8B_EN "and right knobs"
#define UI_TEXT_MANUAL_BED_LEVEL_PAGE_8C_EN "until paper just"
#define UI_TEXT_MANUAL_BED_LEVEL_PAGE_8D_EN "slides."
#define UI_TEXT_MANUAL_BED_LEVEL_PAGE_9A_EN "Adjust the back"
#define UI_TEXT_MANUAL_BED_LEVEL_PAGE_9B_EN "and left knobs"
#define UI_TEXT_MANUAL_BED_LEVEL_PAGE_9C_EN "until paper just"
#define UI_TEXT_MANUAL_BED_LEVEL_PAGE_9D_EN "slides."
#define UI_TEXT_MANUAL_BED_LEVEL_PAGE_10A_EN "Check that paper"
#define UI_TEXT_MANUAL_BED_LEVEL_PAGE_10B_EN "just slides"
#define UI_TEXT_MANUAL_BED_LEVEL_PAGE_10C_EN "between nozzle"
#define UI_TEXT_MANUAL_BED_LEVEL_PAGE_10D_EN "and plate."
#define UI_TEXT_X_MIN_SETTING_EN "Xmin: %Hxmm"
#define UI_TEXT_Y_MIN_SETTING_EN "Ymin: %Hymm"
#define UI_TEXT_Z_MIN_SETTING_EN "Zmin: %Hzmm"
#define UI_TEXT_TOP_COVER_OPEN_EN "Top cover open!"
#define UI_TEXT_TOP_SENSOR_ONOFF_EN "Top Sensor: %st"
#define UI_TEXT_VERSION_MENU_EN "System Version"
#define UI_TEXT_COOLDOWN_MENU_EN "Cooldown      %B3"
#define UI_TEXT_WAIT_OK_EN "Ok to continue"
#define UI_TEXT_FAILED_EN "Failed"
#define UI_TEXT_PLEASE_WAIT_EN "Please wait"
#define UI_TEXT_MANUAL_LEVEL_EN "Manual leveling"
#define UI_TEXT_WARNING_EN "Warning!"
#define UI_TEXT_EXTRUDER_COLD_EN "E%Ne is too cold!"
#define UI_TEXT_HEAT_EXTRUDER_EN "Heat extruder ?"
#define UI_TEXT_WRITE_DEBUG_EN "Write Debug"
#define UI_TEXT_POWER_SAVE_MENU_EN "Powersave"
#define UI_TEXT_MAINTENANCE_EN "Maintenance"
#define UI_TEXT_SETTINGS_EN "Settings"
#define UI_TEXT_LOAD_UNLOAD_EN "Load/Unload"
#define UI_TEXT_BED_EN "Bed"
#define UI_TEXT_BED_OFF_EN "SwitchOff Bed %B7"
#define UI_TEXT_LIGHT_OFF_AFTER_EN "Light AutoOff_EN "
#define UI_TEXT_LIGHT_OFF_AFTER2A_EN "Dis. After:%il"
#define UI_TEXT_LIGHT_OFF_AFTER2B_EN "[min] 0=Off"
#define UI_TEXT_WARNING_POS_X_UNKNOWN_EN "Real X unknown !"
#define UI_TEXT_WARNING_POS_Y_UNKNOWN_EN "Real Y unknown !"
#define UI_TEXT_WARNING_POS_Z_UNKNOWN_EN "Real Z unknown !"
#define UI_TEXT_MOVING_EN "Moving..."
#define UI_TEXT_PREPARING_EN "Preparing..."
#define UI_TEXT_KEEP_LIGHT_ON_EN "Print w/LED:%lk"
#define UI_TEXT_LOADING_FILAMENT_EN "Loading \005"
#define UI_TEXT_UNLOADING_FILAMENT_EN "Unloading \005"
#define UI_TEXT_LOADUNLOAD_FILAMENT_EN "Load / Unload \005"
#define UI_TEXT_AUTOLEVEL_EN "Auto level bed"
#define UI_TEXT_Z_PROBE_FAILED_EN "Z-probe failed"
#define UI_TEXT_SAVE_EN "Save to EEPROM ?"
#define UI_TEXT_ZMIN_EN "zMin : %zm"
#define UI_TEXT_ZPROBING_EN "Probing..."
#define UI_TEXT_ZPOSITION_EN "Go position..."
#define UI_TEXT_DO_YOU_EN "Do you want to:"
#define UI_TEXT_CLEAN1_EN "Clean nozzle and"
#define UI_TEXT_CLEAN2_EN "plates first ?"
#define UI_TEXT_DISPLAY_MODE_EN "Mode:%Md"
#define UI_TEXT_EASY_MODE_EN "Easy"
#define UI_TEXT_ADVANCED_MODE_EN "Advanced"
#define UI_TEXT_POWER_SAVE_EN "Powersave:%Ps"
#define UI_TEXT_BADGE_LIGHT_ONOFF_EN "Badge light:%lb"
#define UI_TEXT_SOUND_ONOF_EN "Sound:  %so"
#define UI_TEXT_YES_SELECTED_EN "  [Yes]    No_EN "
#define UI_TEXT_NO_SELECTED_EN "   Yes    [No]_EN "
#define UI_TEXT_PLEASE_CONFIRM_EN "Please confirm"
#define UI_TEXT_CANCEL_ACTION_EN "Cancel:_EN "
#define UI_TEXT_CONTINUE_ACTION_EN "Continue"
#define UI_TEXT_CANCELED_EN "Action canceled!"
#define UI_TEXT_CONFIRMED_EN "Action confirmed!"
#define UI_TEXT_CLEAN_NOZZLE_EN "Clean Nozzle"
#define UI_TEXT_CLEANING_NOZZLE_EN "Cleaning Nozzle"
#define UI_TEXT_CLEAN_DRIPBOX_1_EN "Please Take"
#define UI_TEXT_CLEAN_DRIPBOX_2_EN "And Clean"
#define UI_TEXT_PUSH_FILAMENT_EN "Push Filament"
#define UI_TEXT_WAIT_FILAMENT_EN "Push Ok to start"
#define UI_TEXT_LOAD_FAILSAFE2_EN "after loading ?"
#define UI_TEXT_LOAD_FAILSAFE_EN "Load Fail-Safe"
#define UI_TEXT_HEATING_EN "Heating..."
#define UI_TEXT_WAIT_FOR_OK_EN "Press Ok to end"
#if NUM_EXTRUDER == 1
#define UI_TEXT_MAIN_LINE1_EN  "\005%ec/%Ec\002"
#define UI_TEXT_MAIN_LINE2_EN  "\007%eB/%Eb\002"
#else
#define UI_TEXT_MAIN_LINE1_EN "\005%e0/%E0\005%e1/%E1"
#define UI_TEXT_MAIN_LINE2_EN "\007%eB/%Eb"
#endif
#define UI_TEXT_AUTOLEVEL_MATRIX_EN "Autolevel Matrix"


// *************** German translation ****************

#define UI_TEXT_ON_DE               "An"
#define UI_TEXT_OFF_DE              "Aus"
#define UI_TEXT_NA_DE               "nv"
#define UI_TEXT_YES_DE              "Ja"
#define UI_TEXT_NO_DE               "Nein"
#define UI_TEXT_PRINT_POS_DE        "Drucke..."
#define UI_TEXT_PRINTING_DE         "Drucken"
#define UI_TEXT_IDLE_DE             "Leerlauf"
#define UI_TEXT_NOSDCARD_DE         "Keine SD Karte"
#define UI_TEXT_ERROR_DE            "**** FEHLER ****"
#define UI_TEXT_BACK_DE             "Zur" STR_uuml "ck " cUP
#define UI_TEXT_QUICK_SETTINGS_DE   "Schnelleinst."
#define UI_TEXT_ERRORMSG_DE         "%oe"
#define UI_TEXT_CONFIGURATION_DE    "Konfiguration"
#define UI_TEXT_POSITION_DE         "Position"
#define UI_TEXT_EXTRUDER_DE         "Extruder"
#define UI_TEXT_SD_CARD_DE          "SD Karte"
#define UI_TEXT_DEBUGGING_DE        "Debugging"
#define UI_TEXT_HOME_DELTA_DE       "Home Delta"
#define UI_TEXT_HOME_ALL_DE         "Home Alle"
#define UI_TEXT_HOME_X_DE           "Home X"
#define UI_TEXT_HOME_Y_DE           "Home Y"
#define UI_TEXT_HOME_Z_DE           "Home Z"
#define UI_TEXT_PREHEAT_PLA_DE      "Vorheizen PLA"
#define UI_TEXT_PREHEAT_ABS_DE      "Vorheizen ABS"
#define UI_TEXT_LIGHTS_ONOFF_DE     "Lampen: %lo"
#define UI_TEXT_COOLDOWN_DE         "Abk" STR_uuml "hlen"
#define UI_TEXT_SET_TO_ORIGIN_DE    "Setze Nullpunkt"
#define UI_TEXT_DISABLE_STEPPER_DE  "Motoren Aussch."
#define UI_TEXT_X_POSITION_DE       "X Position"
#define UI_TEXT_X_POS_FAST_DE       "X Pos. Schnell"
#define UI_TEXT_Y_POSITION_DE       "Y Position"
#define UI_TEXT_Y_POS_FAST_DE       "Y Pos. Schnell"
#define UI_TEXT_Z_POSITION_DE       "Z Position"
#define UI_TEXT_Z_POS_FAST_DE       "Z Pos. Schnell"
#define UI_TEXT_E_POSITION_DE       "Extr. Position"
#define UI_TEXT_BED_TEMP_DE         "Bed Temp:%eb/%Eb" cDEG "C"
#define UI_TEXT_EXTR0_TEMP_DE       "Temp. 1 :%e0/%E0" cDEG "C"
#define UI_TEXT_EXTR1_TEMP_DE       "Temp. 2 :%e1/%E1" cDEG "C"
#define UI_TEXT_EXTR2_TEMP_DE       "Temp. 3 :%e2/%E2" cDEG "C"
#define UI_TEXT_EXTR0_OFF_DE        "Extruder 1 Aus"
#define UI_TEXT_EXTR1_OFF_DE        "Extruder 2 Aus"
#define UI_TEXT_EXTR2_OFF_DE        "Extruder 3 Aus"
#define UI_TEXT_EXTR0_SELECT_DE     "%X0 W" STR_auml "hle Extr. 1"
#define UI_TEXT_EXTR1_SELECT_DE     "%X1 W" STR_auml "hle Extr. 2"
#define UI_TEXT_EXTR2_SELECT_DE     "%X2 W" STR_auml "hle Extr. 3"
#define UI_TEXT_EXTR_ORIGIN_DE      "Setze Nullpunkt"
#define UI_TEXT_PRINT_X_DE          "Drucken X:%ax"
#define UI_TEXT_PRINT_Y_DE          "Drucken Y:%ay"
#define UI_TEXT_PRINT_Z_DE          "Drucken Z:%az"
#define UI_TEXT_PRINT_Z_DELTA_DE    "Drucken:%az"
#define UI_TEXT_MOVE_X_DE           "Bewegen X:%aX"
#define UI_TEXT_MOVE_Y_DE           "Bewegen Y:%aY"
#define UI_TEXT_MOVE_Z_DE           "Bewegen Z:%aZ"
#define UI_TEXT_MOVE_Z_DELTA_DE     "Bewegen:%aZ"
#define UI_TEXT_JERK_DE             "Ruck     :%aj"
#define UI_TEXT_ZJERK_DE            "Z-Ruck   :%aJ"
#define UI_TEXT_ACCELERATION_DE     "Beschleunigung"
#define UI_TEXT_STORE_TO_EEPROM_DE  "Sichere EEPROM"
#define UI_TEXT_LOAD_EEPROM_DE      "Lade vom EEPROM"
#define UI_TEXT_DBG_ECHO_DE         "Echo       :%do"
#define UI_TEXT_DBG_INFO_DE         "Info       :%di"
#define UI_TEXT_DBG_ERROR_DE        "Fehler     :%de"
#define UI_TEXT_DBG_DRYRUN_DE       "Trockenlauf:%dd"
#define UI_TEXT_OPS_OFF_DE          "%O0 OPS Aus"
#define UI_TEXT_OPS_CLASSIC_DE      "%O1 OPS Klassisch"
#define UI_TEXT_OPS_FAST_DE         "%O2 OPS Schnell"
#define UI_TEXT_OPS_RETRACT_DE      "Einfahren :%Or"
#define UI_TEXT_OPS_BACKSLASH_DE    "Backsl.   :%Ob"
#define UI_TEXT_OPS_MINDIST_DE      "Min.Abst. :%Od"
#define UI_TEXT_OPS_MOVE_AFTER_DE   "Start nach:%Oa"
#define UI_TEXT_ANTI_OOZE_DE        "Anti Ooze"
#define UI_TEXT_PRINT_FILE_DE       "Drucke Datei"
#define UI_TEXT_PAUSE_PRINT_DE      "Druck Pausieren"
#define UI_TEXT_CONTINUE_PRINT_DE   "Druck Forts."
#define UI_TEXT_UNMOUNT_CARD_DE     "Unmount Karte"
#define UI_TEXT_MOUNT_CARD_DE       "Mount Karte"
#define UI_TEXT_DELETE_FILE_DE      "Datei l" STR_ouml "schen"
#define UI_TEXT_FEEDRATE_DE         "Feedrate"
#define UI_TEXT_FEED_MAX_X_DE       "Max X:%fx"
#define UI_TEXT_FEED_MAX_Y_DE       "Max Y:%fy"
#define UI_TEXT_FEED_MAX_Z_DE       "Max Z:%fz"
#define UI_TEXT_FEED_MAX_Z_DELTA_DE "Max:%fz"
#define UI_TEXT_FEED_HOME_X_DE      "Home X:%fX"
#define UI_TEXT_FEED_HOME_Y_DE      "Home Y:%fY"
#define UI_TEXT_FEED_HOME_Z_DE      "Home Z:%fZ"
#define UI_TEXT_FEED_HOME_Z_DELTA_DE "Home:%fZ"
#define UI_TEXT_ACTION_XPOSITION4A_DE "X:%x0 mm"
#define UI_TEXT_ACTION_XPOSITION4B_DE "Min Endstopp:%sx"
#define UI_TEXT_ACTION_XPOSITION4C_DE "Max Endstopp:%sX"
#define UI_TEXT_ACTION_XPOSITION4D_DE ""
#define UI_TEXT_ACTION_YPOSITION4A_DE "Y:%x1 mm"
#define UI_TEXT_ACTION_YPOSITION4B_DE "Min Endstopp:%sy"
#define UI_TEXT_ACTION_YPOSITION4C_DE "Max Endstopp:%sY"
#define UI_TEXT_ACTION_YPOSITION4D_DE ""
#define UI_TEXT_ACTION_ZPOSITION4A_DE "Z:%x2 mm"
#define UI_TEXT_ACTION_ZPOSITION4B_DE "Min Endstopp:%sz"
#define UI_TEXT_ACTION_ZPOSITION4C_DE "Max Endstopp:%sZ"
#define UI_TEXT_ACTION_ZPOSITION4D_DE ""
#define UI_TEXT_ACTION_XPOSITION_FAST4A_DE "X:%x0 mm"
#define UI_TEXT_ACTION_XPOSITION_FAST4B_DE "Min Endstopp:%sx"
#define UI_TEXT_ACTION_XPOSITION_FAST4C_DE "Max Endstopp:%sX"
#define UI_TEXT_ACTION_XPOSITION_FAST4D_DE ""
#define UI_TEXT_ACTION_YPOSITION_FAST4A_DE "Y:%x1 mm"
#define UI_TEXT_ACTION_YPOSITION_FAST4B_DE "Min Endstopp:%sy"
#define UI_TEXT_ACTION_YPOSITION_FAST4C_DE "Max Endstopp:%sY"
#define UI_TEXT_ACTION_YPOSITION_FAST4D_DE ""
#define UI_TEXT_ACTION_ZPOSITION_FAST4A_DE "Z:%x2 mm"
#define UI_TEXT_ACTION_ZPOSITION_FAST4B_DE "Min Endstopp:%sz"
#define UI_TEXT_ACTION_ZPOSITION_FAST4C_DE "Max Endstopp:%sZ"
#define UI_TEXT_ACTION_ZPOSITION_FAST4D_DE ""
#define UI_TEXT_ACTION_EPOSITION_FAST2A_DE "E:%x3 mm"
#define UI_TEXT_ACTION_EPOSITION_FAST2B_DE "1 klick = 1 mm"
#define UI_TEXT_ACTION_XPOSITION2A_DE "X:%x0 mm"
#define UI_TEXT_ACTION_XPOSITION2B_DE "Min:%sx Max:%sX"
#define UI_TEXT_ACTION_YPOSITION2A_DE "Y:%x1 mm"
#define UI_TEXT_ACTION_YPOSITION2B_DE "Min:%sy Max:%sY"
#define UI_TEXT_ACTION_ZPOSITION2A_DE "Z:%x2 mm"
#define UI_TEXT_ACTION_ZPOSITION2B_DE "Min:%sz Max:%sZ"
#define UI_TEXT_ACTION_XPOSITION_FAST2A_DE "X:%x0 mm"
#define UI_TEXT_ACTION_XPOSITION_FAST2B_DE "Min:%sx Max:%sX"
#define UI_TEXT_ACTION_YPOSITION_FAST2A_DE "Y:%x1 mm"
#define UI_TEXT_ACTION_YPOSITION_FAST2B_DE "Min:%sy Max:%sY"
#define UI_TEXT_ACTION_ZPOSITION_FAST2A_DE "Z:%x2 mm"
#define UI_TEXT_ACTION_ZPOSITION_FAST2B_DE "Min:%sz Max:%sZ"
#define UI_TEXT_FANSPEED_DE          "L" STR_uuml "fter"
#define UI_TEXT_ACTION_FANSPEED_DE   "L" STR_uuml "fter:%Fs%%%"
#define UI_TEXT_FAN_OFF_DE           "L" STR_uuml "fter Aus"
#define UI_TEXT_FAN_25_DE            "L" STR_uuml "fter auf 25%%%"
#define UI_TEXT_FAN_50_DE            "L" STR_uuml "fter auf 50%%%"
#define UI_TEXT_FAN_75_DE            "L" STR_uuml "fter auf 75%%%"
#define UI_TEXT_FAN_FULL_DE          "L" STR_uuml "fter Voll"
#define UI_TEXT_STEPPER_INACTIVE_DE  "Motor Inaktiv"
#define UI_TEXT_STEPPER_INACTIVE2A_DE "Aus nach: %is"
#define UI_TEXT_STEPPER_INACTIVE2B_DE "[min] 0=Aus"
#define UI_TEXT_POWER_INACTIVE_DE    "Max. Inaktiv"
#define UI_TEXT_POWER_INACTIVE2A_DE   "Aus nach: %ip"
#define UI_TEXT_POWER_INACTIVE2B_DE   "[min] 0=Aus"
#define UI_TEXT_GENERAL_DE           "Allgemein"
#define UI_TEXT_BAUDRATE_DE          "Baudrate:%oc"
#define UI_TEXT_EXTR_STEPS_DE        "Schr/MM:%Se"
#define UI_TEXT_EXTR_START_FEED_DE   "Start FR:%Xf"
#define UI_TEXT_EXTR_MAX_FEED_DE     "Max FR:%XF"
#define UI_TEXT_EXTR_ACCEL_DE        "Beschl.:%XA"
#define UI_TEXT_EXTR_WATCH_DE        "Stab.Zeit:%Xw"
#define UI_TEXT_EXTR_ADVANCE_L_DE    "Advance lin:%Xl"
#define UI_TEXT_EXTR_ADVANCE_K_DE    "Advance quad:%Xa"
#define UI_TEXT_EXTR_MANAGER_DE      "Regler:%Xh"
#define UI_TEXT_EXTR_PGAIN_DE        "PID P:%Xp"
#define UI_TEXT_EXTR_DEADTIME_DE     "Totzeit:%Xp"
#define UI_TEXT_EXTR_DMAX_DT_DE      "Controll-PWM:%XM"
#define UI_TEXT_EXTR_IGAIN_DE        "PID I:%Xi"
#define UI_TEXT_EXTR_DGAIN_DE        "PID D:%Xd"
#define UI_TEXT_EXTR_DMIN_DE         "Drive Min:%Xm"
#define UI_TEXT_EXTR_DMAX_DE         "Drive Max:%XM"
#define UI_TEXT_EXTR_PMAX_DE         "PID Max:%XD"
#define UI_TEXT_EXTR_XOFF_DE         "X-Offset:%Xx"
#define UI_TEXT_EXTR_YOFF_DE         "Y-Offset:%Xy"
#define UI_TEXT_STRING_HM_BANGBANG_DE "BangBang"
#define UI_TEXT_STRING_HM_PID_DE     "PID"
#define UI_TEXT_STRING_ACTION_DE     "Aktion:%la"
#define UI_TEXT_HEATING_EXTRUDER_DE  "Heize Extruder"
#define UI_TEXT_HEATING_BED_DE       "Heize Druckbett"
#define UI_TEXT_KILLED_DE            "Angehalten"
#define UI_TEXT_STEPPER_DISABLED_DE  "Motoren Aus"
#define UI_TEXT_EEPROM_STOREDA_DE     "Konfiguration"
#define UI_TEXT_EEPROM_STOREDB_DE     "gespeichert."
#define UI_TEXT_EEPROM_LOADEDA_DE     "Konfiguration"
#define UI_TEXT_EEPROM_LOADEDB_DE     "geladen."
#define UI_TEXT_UPLOADING_DE         "Hochladen..."
#define UI_TEXT_PAGE_BUFFER_DE       "Puffer:%oB"
#define UI_TEXT_PAGE_EXTRUDER_DE     " E:%ec/%Ec" cDEG "C" cARROW "%oC"
#define UI_TEXT_PAGE_EXTRUDER1_DE     "E1:%e0/%E0" cDEG "C" cARROW "%o0"
#define UI_TEXT_PAGE_EXTRUDER2_DE     "E2:%e1/%E1" cDEG "C" cARROW "%o1"
#define UI_TEXT_PAGE_EXTRUDER3_DE     "E3:%e2/%E2" cDEG "C" cARROW "%o2"
#define UI_TEXT_PAGE_BED_DE          " B:%eb/%Eb" cDEG "C" cARROW "%ob"
#define UI_TEXT_SPEED_MULTIPLY_DE    "Geschw.Mul:%om%%%"
#define UI_TEXT_FLOW_MULTIPLY_DE     "Flow Mul.:%of%%%"
#define UI_TEXT_SHOW_MEASUREMENT_DE  "Zeige Messung"
#define UI_TEXT_RESET_MEASUREMENT_DE "Reset Messung"
#define UI_TEXT_SET_MEASURED_ORIGIN_DE "Setze Z=0"
#define UI_TEXT_ZCALIB_DE        "Z Kalib."
#define UI_TEXT_SET_P1_DE       "Setze P1"
#define UI_TEXT_SET_P2_DE       "Setze P2"
#define UI_TEXT_SET_P3_DE       "Setze P3"
#define UI_TEXT_CALCULATE_LEVELING_DE "Berechne Leveling"
#define UI_TEXT_LEVEL_DE        "Level delta"
#define UI_TEXT_EXTR_WAIT_RETRACT_TEMP_DE  "Wartetemp.%XT" cDEG "C"
#define UI_TEXT_EXTR_WAIT_RETRACT_UNITS_DE "R" STR_uuml "ckz. um:%XU mm"
#define UI_TEXT_SD_REMOVED_DE       "SD Karte entfernt"
#define UI_TEXT_SD_INSERTED_DE      "SD Karte eingelegt"
#define UI_TEXT_PRINTER_READY_DE    "Drucker bereit."
// Printtime output gets aggregated like <Days_5gisgits>UI_TEXT_PRINTTIME_DAYS<Hours>UI_TEXT_PRINTTIME_HOURS<Minutes>UI_TEXT_PRINTTIME_MINUTES
// ___88 days 12:45
#define UI_TEXT_PRINTTIME_DAYS_DE   " Tage "
#define UI_TEXT_PRINTTIME_HOURS_DE  ":"
#define UI_TEXT_PRINTTIME_MINUTES_DE ""
#define UI_TEXT_PRINT_TIME_DE     "Ges. Druckzeit"
#define UI_TEXT_PRINT_FILAMENT_DE "Filament gedruckt"
#define UI_TEXT_PRINTED_DE           "gedruckt"
#define UI_TEXT_POWER_DE            "ATX Netzteil an/aus"
#define UI_TEXT_STRING_HM_DEADTIME_DE     "Totzeit"
#define UI_TEXT_STRING_HM_SLOWBANG_DE     "Langs.BB"
#define UI_TEXT_STOP_PRINT_DE "Druck abbrechen"
#define UI_TEXT_Z_BABYSTEPPING_DE "Z Babyschr.:%oYmm"
#define UI_TEXT_CHANGE_FILAMENT_DE "Filamentwechsel"
#define UI_TEXT_WIZ_CH_FILAMENT1_DE "Filamentwechsel:"
#define UI_TEXT_WIZ_CH_FILAMENT2_DE "Zum man. f" STR_ouml "rdern"
#define UI_TEXT_WIZ_CH_FILAMENT3_DE "Men" STR_uuml "knopf drehen"
#define UI_TEXT_CLICK_DONE_DE "Weiter mit Klick"
#define UI_TEXT_AUTOLEVEL_ONOFF_DE  "Autolevel: %ll"
#define UI_TEXT_SERVOPOS_DE "Servo Pos.: %oS"
#define UI_TEXT_IGNORE_M106_DE      "Ignoriere M106 %Fi"
#define UI_TEXT_WIZ_REHEAT1_DE "Klicke zum Aufw" STR_auml "rmen"
#define UI_TEXT_WIZ_REHEAT2_DE "der Extruder."
#define UI_TEXT_WIZ_WAITTEMP1_DE "Warte auf"
#define UI_TEXT_WIZ_WAITTEMP2_DE "Zieltemperatur..."
#define UI_TEXT_EXTRUDER_JAM_DE "Extruderstau"
#define UI_TEXT_STANDBY_DE "Standby"
#define UI_TEXT_BED_COATING_DE "Bettbeschichtung"
#define UI_TEXT_BED_COATING_SET1_DE "Bettbeschichtung:"
#define UI_TEXT_BED_COATING_SET2_DE ""
#define UI_TEXT_NOCOATING_DE "Unbeschichtet"
#define UI_TEXT_BUILDTAK_DE "BuildTak"
#define UI_TEXT_KAPTON_DE "Kapton"
#define UI_TEXT_BLUETAPE_DE "Blaues Kreppband"
#define UI_TEXT_PETTAPE_DE "Gr" STR_uuml "nes PET Band"
#define UI_TEXT_GLUESTICK_DE "Klebestift"
#define UI_TEXT_CUSTOM_DE "Individuell"
#define UI_TEXT_COATING_CUSTOM_DE "Indiv.:%oCmm"
#define UI_TEXT_LANGUAGE_DE "Sprache"

#if NUM_EXTRUDER > 2 || MIXING_EXTRUDER != 0
  #define UI_TEXT_MAINPAGE6_1_DE "\xa %ec/%Ec\xb0 X:%x0"
#else
  #define UI_TEXT_MAINPAGE6_1_DE "\xa %e0/%E0\xb0 X:%x0"
#endif // NUM_EXTRUDER
#if NUM_EXTRUDER == 2 && MIXING_EXTRUDER == 0
  #define UI_TEXT_MAINPAGE6_2_DE "\xa %e1/%E1\xb0 Y:%x1"
#elif HAVE_HEATED_BED
  #define UI_TEXT_MAINPAGE6_2_DE "\xe %eb/%Eb\xb0 Y:%x1"
#else
  #define UI_TEXT_MAINPAGE6_2_DE "             Y:%x1"
#endif
#if HAVE_HEATED_BED && NUM_EXTRUDER == 2 && MIXING_EXTRUDER == 0
 #define UI_TEXT_MAINPAGE6_3_DE "\xe %eb/%Eb\xb0 Z:%x2"
#elif FEATURE_DITTO_PRINTING
  #define UI_TEXT_MAINPAGE6_3_DE "Kopien: %ed    Z:%x2"
#else
  #define UI_TEXT_MAINPAGE6_3_DE "Fluss:\xfd %of%%%  Z:%x2"
#endif
#define UI_TEXT_MAINPAGE6_4_DE "Mul: %om%%% \xfd   E: %x4m"
#define UI_TEXT_MAINPAGE6_5_DE "Puf: %oB"
#define UI_TEXT_MAINPAGE6_6_DE "%os"
#define UI_TEXT_MAINPAGE_TEMP_BED_DE cTEMP "%ec/%Ec" cDEG "B%eB/%Eb" cDEG
#define UI_TEXT_MAINPAGE_BED_DE "B%eB/%Eb" cDEG
#define UI_TEXT_MAINPAGE_Z_BUF_DE "Z:%x2  Buf : %oB"
#define UI_TEXT_MAINPAGE_MUL_EUSAGE_DE "Mul: %om   E:%x4"
#define UI_TEXT_MAINPAGE_XY_DE "X:%x0 Y:%x1"
#define UI_TEXT_PRINT_TIME_VALUE_DE "%Ut"
#define UI_TEXT_PRINT_FILAMENT_VALUE_DE "%Uf m"
#define UI_TEXT_METER_PRINTED_DE "%Uf m " UI_TEXT_PRINTED_DE
#define UI_TEXT_STATUS_DE "%os"
#define UI_TEXT_EMPTY_DE ""
#define UI_TEXT_TEMP_SET_DE cTEMP "%ec/%Ec" cDEG
#define UI_TEXT_CURRENT_TEMP_DE cTEMP "%ec" cDEG
#define UI_TEXT_COATING_THICKNESS_DE " %oCmm"
#define UI_TEXT_EXTR3_TEMP_DE "Temp. 4 :%e3/%E3" cDEG "C"
#define UI_TEXT_EXTR4_TEMP_DE "Temp. 5 :%e4/%E4" cDEG "C"
#define UI_TEXT_EXTR5_TEMP_DE "Temp. 6 :%e5/%E5" cDEG "C"
#define UI_TEXT_EXTR3_OFF_DE "Extruder 4 Aus"
#define UI_TEXT_EXTR4_OFF_DE "Extruder 5 Aus"
#define UI_TEXT_EXTR5_OFF_DE "Extruder 6 Aus"
#define UI_TEXT_EXTR3_SELECT_DE "%X3 W" STR_auml "hle Extr. 4"
#define UI_TEXT_EXTR4_SELECT_DE "%X4 W" STR_auml "hle Extr. 5"
#define UI_TEXT_EXTR5_SELECT_DE "%X5 W" STR_auml "hle Extr. 6"
#define UI_TEXT_DITTO_0_DE "%D0 Keine Kopien"
#define UI_TEXT_DITTO_1_DE "%D1 1 Kopie"
#define UI_TEXT_DITTO_2_DE "%D2 2 Kopien"
#define UI_TEXT_DITTO_3_DE "%D3 3 Kopien"
#define UI_TEXT_ZPROBE_HEIGHT_DE "Z-Probenh" STR_ouml "he:%zh"



#define UI_TEXT_OFFSETS_DE "Set print offsets"
#define UI_TEXT_X_OFFSET_DE "X-Offset:%T0mm"
#define UI_TEXT_Y_OFFSET_DE "Y-Offset:%T1mm"
#define UI_TEXT_Z_OFFSET_DE "Z-Offset:%T2mm"


// Dutch translation

#define UI_TEXT_ON_NL               "Aan"
#define UI_TEXT_OFF_NL              "Uit"
#define UI_TEXT_NA_NL               "N/A" // Output for not available
#define UI_TEXT_YES_NL              "Ja"
#define UI_TEXT_NO_NL               "Nee"
#define UI_TEXT_PRINT_POS_NL        "Printen..."
#define UI_TEXT_PRINTING_NL         "Printen"
#define UI_TEXT_IDLE_NL             "Rust"
#define UI_TEXT_NOSDCARD_NL         "Geen SD Kaart"
#define UI_TEXT_ERROR_NL            "**** FOUT ****"
#define UI_TEXT_BACK_NL             "Terug " cUP
#define UI_TEXT_QUICK_SETTINGS_NL   "Snel Instelling"
#define UI_TEXT_ERRORMSG_NL         "%oe"
#define UI_TEXT_CONFIGURATION_NL    "Configuratie"
#define UI_TEXT_POSITION_NL         "Positie"
#define UI_TEXT_EXTRUDER_NL         "Extruder"
#define UI_TEXT_SD_CARD_NL          "SD Kaart"
#define UI_TEXT_DEBUGGING_NL        "Debugging"
#define UI_TEXT_HOME_DELTA_NL       "Home Delta"
#define UI_TEXT_HOME_ALL_NL         "Home Alles"
#define UI_TEXT_HOME_X_NL           "Home X"
#define UI_TEXT_HOME_Y_NL           "Home Y"
#define UI_TEXT_HOME_Z_NL           "Home Z"
#define UI_TEXT_PREHEAT_PLA_NL      "Voorverwarmen PLA"
#define UI_TEXT_PREHEAT_ABS_NL      "Voorverwarmen ABS"
#define UI_TEXT_LIGHTS_ONOFF_NL     "Lichten:%lo"
#define UI_TEXT_COOLDOWN_NL         "Koelen"
#define UI_TEXT_SET_TO_ORIGIN_NL    "Zet oorsprong"
#define UI_TEXT_DISABLE_STEPPER_NL  "Zet motor uit"
#define UI_TEXT_X_POSITION_NL       "X Positie"
#define UI_TEXT_X_POS_FAST_NL       "X Pos. Snel"
#define UI_TEXT_Y_POSITION_NL       "Y Positie"
#define UI_TEXT_Y_POS_FAST_NL       "Y Pos. Snel"
#define UI_TEXT_Z_POSITION_NL       "Z Positie"
#define UI_TEXT_Z_POS_FAST_NL       "Z Pos. Snel"
#define UI_TEXT_E_POSITION_NL       "Extr. positie"
#define UI_TEXT_BED_TEMP_NL         "Bed Temp:%eb/%Eb" cDEG "C"
#define UI_TEXT_EXTR0_TEMP_NL       "Temp. 1 :%e0/%E0" cDEG "C"
#define UI_TEXT_EXTR1_TEMP_NL       "Temp. 2 :%e1/%E1" cDEG "C"
#define UI_TEXT_EXTR2_TEMP_NL       "Temp. 3 :%e2/%E2" cDEG "C"
#define UI_TEXT_EXTR0_OFF_NL        "Extruder 1 Uit"
#define UI_TEXT_EXTR1_OFF_NL        "Extruder 2 Uit"
#define UI_TEXT_EXTR2_OFF_NL        "Extruder 3 Uit"
#define UI_TEXT_EXTR0_SELECT_NL     "%X0 Select Extr. 1"
#define UI_TEXT_EXTR1_SELECT_NL     "%X1 Select Extr. 2"
#define UI_TEXT_EXTR2_SELECT_NL     "%X2 Select Extr. 3"
#define UI_TEXT_EXTR_ORIGIN_NL      "Zet oorsprong"
#define UI_TEXT_PRINT_X_NL          "Print X:%ax"
#define UI_TEXT_PRINT_Y_NL          "Print Y:%ay"
#define UI_TEXT_PRINT_Z_NL          "Print Z:%az"
#define UI_TEXT_PRINT_Z_DELTA_NL    "Print:%az"
#define UI_TEXT_MOVE_X_NL           "Beweeg X:%aX"
#define UI_TEXT_MOVE_Y_NL           "Beweeg Y:%aY"
#define UI_TEXT_MOVE_Z_NL           "Beweeg Z:%aZ"
#define UI_TEXT_MOVE_Z_DELTA_NL     "Beweeg:%aZ"
#define UI_TEXT_JERK_NL             "Ruk:%aj"
#define UI_TEXT_ZJERK_NL            "Z-Ruk:%aJ"
#define UI_TEXT_ACCELERATION_NL     "Acceleratie"
#define UI_TEXT_STORE_TO_EEPROM_NL  "Opslaan n. EEPROM"
#define UI_TEXT_LOAD_EEPROM_NL      "Ladd f. EEPROM"
#define UI_TEXT_DBG_ECHO_NL         "Echo     :%do"
#define UI_TEXT_DBG_INFO_NL         "Info     :%di"
#define UI_TEXT_DBG_ERROR_NL        "Fouten   :%de"
#define UI_TEXT_DBG_DRYRUN_NL       "Droogloop:%dd"
#define UI_TEXT_OPS_OFF_NL          "%O0 OPS Uit"
#define UI_TEXT_OPS_CLASSIC_NL      "%O1 OPS Klassiek"
#define UI_TEXT_OPS_FAST_NL         "%O2 OPS Snel"
#define UI_TEXT_OPS_RETRACT_NL      "Terugtrekken:%Or"
#define UI_TEXT_OPS_BACKSLASH_NL    "Backsl. :%Ob"
#define UI_TEXT_OPS_MINDIST_NL      "Min. afstand:%Od"
#define UI_TEXT_OPS_MOVE_AFTER_NL   "Beweeg na:%Oa"
#define UI_TEXT_ANTI_OOZE_NL        "Anti lekken"
#define UI_TEXT_PRINT_FILE_NL       "Print bestand"
#define UI_TEXT_PAUSE_PRINT_NL      "Pauzeer Print"
#define UI_TEXT_CONTINUE_PRINT_NL   "Zet print voort"
#define UI_TEXT_UNMOUNT_CARD_NL     "Ontkoppel Kaart"
#define UI_TEXT_MOUNT_CARD_NL       "Koppel Kaart"
#define UI_TEXT_DELETE_FILE_NL      "Verw. bestand"
#define UI_TEXT_FEEDRATE_NL         "Beweeg snelheid"
#define UI_TEXT_FEED_MAX_X_NL       "Max X:%fx"
#define UI_TEXT_FEED_MAX_Y_NL       "Max Y:%fy"
#define UI_TEXT_FEED_MAX_Z_NL       "Max Z:%fz"
#define UI_TEXT_FEED_MAX_Z_DELTA_NL "Max:%fz"
#define UI_TEXT_FEED_HOME_X_NL      "Home X:%fX"
#define UI_TEXT_FEED_HOME_Y_NL      "Home Y:%fY"
#define UI_TEXT_FEED_HOME_Z_NL      "Home Z:%fZ"
#define UI_TEXT_FEED_HOME_Z_DELTA_NL "Home:%fZ"
#define UI_TEXT_ACTION_XPOSITION4A_NL "X:%x0 mm"
#define UI_TEXT_ACTION_XPOSITION4B_NL "Min eindst.:%sx"
#define UI_TEXT_ACTION_XPOSITION4C_NL "Max eindst.:%sX"
#define UI_TEXT_ACTION_XPOSITION4D_NL ""
#define UI_TEXT_ACTION_YPOSITION4A_NL "Y:%x1 mm"
#define UI_TEXT_ACTION_YPOSITION4B_NL "Min eindst.:%sy"
#define UI_TEXT_ACTION_YPOSITION4C_NL "Max eindst.:%sY"
#define UI_TEXT_ACTION_YPOSITION4D_NL ""
#define UI_TEXT_ACTION_ZPOSITION4A_NL "Z:%x2 mm"
#define UI_TEXT_ACTION_ZPOSITION4B_NL "Min eindst.:%sz"
#define UI_TEXT_ACTION_ZPOSITION4C_NL "Max eindst.:%sZ"
#define UI_TEXT_ACTION_ZPOSITION4D_NL ""
#define UI_TEXT_ACTION_XPOSITION_FAST4A_NL "X:%x0 mm"
#define UI_TEXT_ACTION_XPOSITION_FAST4B_NL "Min eindst.:%sx"
#define UI_TEXT_ACTION_XPOSITION_FAST4C_NL "Max eindst.:%sX"
#define UI_TEXT_ACTION_XPOSITION_FAST4D_NL ""
#define UI_TEXT_ACTION_YPOSITION_FAST4A_NL "Y:%x1 mm"
#define UI_TEXT_ACTION_YPOSITION_FAST4B_NL "Min eindst.:%sy"
#define UI_TEXT_ACTION_YPOSITION_FAST4C_NL "Max eindst.:%sY"
#define UI_TEXT_ACTION_YPOSITION_FAST4D_NL ""
#define UI_TEXT_ACTION_ZPOSITION_FAST4A_NL "Z:%x2 mm"
#define UI_TEXT_ACTION_ZPOSITION_FAST4B_NL "Min eindst.:%sz"
#define UI_TEXT_ACTION_ZPOSITION_FAST4C_NL "Max eindst.:%sZ"
#define UI_TEXT_ACTION_ZPOSITION_FAST4D_NL ""
#define UI_TEXT_ACTION_EPOSITION_FAST2A_NL "E:%x3 mm"
#define UI_TEXT_ACTION_EPOSITION_FAST2B_NL "1 klik = 1 mm"
#define UI_TEXT_ACTION_XPOSITION2A_NL "X:%x0 mm"
#define UI_TEXT_ACTION_XPOSITION2B_NL "Min:%sx Max:%sX"
#define UI_TEXT_ACTION_YPOSITION2A_NL "Y:%x1 mm"
#define UI_TEXT_ACTION_YPOSITION2B_NL "Min:%sy Max:%sY"
#define UI_TEXT_ACTION_ZPOSITION2A_NL "Z:%x2 mm"
#define UI_TEXT_ACTION_ZPOSITION2B_NL "Min:%sz Max:%sZ"
#define UI_TEXT_ACTION_XPOSITION_FAST2A_NL "X:%x0 mm"
#define UI_TEXT_ACTION_XPOSITION_FAST2B_NL "Min:%sx Max:%sX"
#define UI_TEXT_ACTION_YPOSITION_FAST2A_NL "Y:%x1 mm"
#define UI_TEXT_ACTION_YPOSITION_FAST2B_NL "Min:%sy Max:%sY"
#define UI_TEXT_ACTION_ZPOSITION_FAST2A_NL "Z:%x2 mm"
#define UI_TEXT_ACTION_ZPOSITION_FAST2B_NL "Min:%sz Max:%sZ"
#define UI_TEXT_FANSPEED_NL          "Fan snelheid"
#define UI_TEXT_FAN_OFF_NL           "Zet Fan uit"
#define UI_TEXT_ACTION_FANSPEED_NL   "Fan snelheid:%Fs%%%"
#define UI_TEXT_FAN_25_NL            "Zet Fan 25%%%"
#define UI_TEXT_FAN_50_NL            "Zet Fan 50%%%"
#define UI_TEXT_FAN_75_NL            "Zet Fan 75%%%"
#define UI_TEXT_FAN_FULL_NL          "Zet Fan Vol aan"
#define UI_TEXT_STEPPER_INACTIVE_NL  "Motor Inactief"
#define UI_TEXT_STEPPER_INACTIVE2A_NL "Uit na: %is"
#define UI_TEXT_STEPPER_INACTIVE2B_NL "[min] 0=Off"
#define UI_TEXT_POWER_INACTIVE_NL    "Max. Inactief"
#define UI_TEXT_POWER_INACTIVE2A_NL   "Zet uit na: %ip"
#define UI_TEXT_POWER_INACTIVE2B_NL   "[min] 0=Off"
#define UI_TEXT_GENERAL_NL           "Algemeen"
#define UI_TEXT_BAUDRATE_NL          "Baudrate:%oc"
#define UI_TEXT_EXTR_STEPS_NL        "Stappen/MM:%Se"
#define UI_TEXT_EXTR_START_FEED_NL   "Start FR.:%Xf"
#define UI_TEXT_EXTR_MAX_FEED_NL     "Max FR.:%XF"
#define UI_TEXT_EXTR_ACCEL_NL        "Accel:%XA"
#define UI_TEXT_EXTR_WATCH_NL        "Stab.Tijd:%Xw"
#define UI_TEXT_EXTR_ADVANCE_L_NL    "Advance lin:%Xl"
#define UI_TEXT_EXTR_ADVANCE_K_NL    "Advance quad:%Xa"
#define UI_TEXT_EXTR_MANAGER_NL      "Control:%Xh"
#define UI_TEXT_EXTR_PGAIN_NL        "PID P:%Xp"
#define UI_TEXT_EXTR_DEADTIME_NL     "Dode tijd:%Xp"
#define UI_TEXT_EXTR_DMAX_DT_NL      "Controle PWM:%XM"
#define UI_TEXT_EXTR_IGAIN_NL        "PID I:%Xi"
#define UI_TEXT_EXTR_DGAIN_NL        "PID D:%Xd"
#define UI_TEXT_EXTR_DMIN_NL         "Drive Min:%Xm"
#define UI_TEXT_EXTR_DMAX_NL         "Drive Max:%XM"
#define UI_TEXT_EXTR_PMAX_NL         "PID Max:%XD"
#define UI_TEXT_EXTR_XOFF_NL         "X-Offset:%Xx"
#define UI_TEXT_EXTR_YOFF_NL         "Y-Offset:%Xy"
#define UI_TEXT_STRING_HM_BANGBANG_NL "BangBang"
#define UI_TEXT_STRING_HM_PID_NL     "PID"
#define UI_TEXT_STRING_ACTION_NL     "Action:%la"
#define UI_TEXT_HEATING_EXTRUDER_NL  "Opwarmen Extru."
#define UI_TEXT_HEATING_BED_NL       "Opwarmen Bed"
#define UI_TEXT_KILLED_NL            "Uitgeschakeld"
#define UI_TEXT_STEPPER_DISABLED_NL  "Motor uitgezet"
#define UI_TEXT_EEPROM_STOREDA_NL     "Configuratie"
#define UI_TEXT_EEPROM_STOREDB_NL     "saved. in EEPROM"
#define UI_TEXT_EEPROM_LOADEDA_NL     "Configuratie"
#define UI_TEXT_EEPROM_LOADEDB_NL     "loaded f. EEPROM"
#define UI_TEXT_UPLOADING_NL         "Uploaden..."
#define UI_TEXT_PAGE_BUFFER_NL       "Buffer:%oB"
#define UI_TEXT_PAGE_EXTRUDER_NL     " E:%ec/%Ec" cDEG "C" cARROW "%oC"
#define UI_TEXT_PAGE_EXTRUDER1_NL     "E1:%e0/%E0" cDEG "C" cARROW "%o0"
#define UI_TEXT_PAGE_EXTRUDER2_NL     "E2:%e1/%E1" cDEG "C" cARROW "%o1"
#define UI_TEXT_PAGE_EXTRUDER3_NL     "E3:%e2/%E2" cDEG "C" cARROW "%o2"
#define UI_TEXT_PAGE_BED_NL          " B:%eb/%Eb" cDEG "C" cARROW "%ob"
#define UI_TEXT_SPEED_MULTIPLY_NL    "Snelh. Mul.:%om%%%"
#define UI_TEXT_FLOW_MULTIPLY_NL     "Flow Mul.:%of%%%"
#define UI_TEXT_SHOW_MEASUREMENT_NL  "Show meting"
#define UI_TEXT_RESET_MEASUREMENT_NL "Reset meting"
#define UI_TEXT_SET_MEASURED_ORIGIN_NL "Set Z=0"
#define UI_TEXT_ZCALIB_NL             "Z Calib."
#define UI_TEXT_SET_P1_NL            "Set P1"
#define UI_TEXT_SET_P2_NL            "Set P2"
#define UI_TEXT_SET_P3_NL            "Set P3"
#define UI_TEXT_CALCULATE_LEVELING_NL "Bereken Leveling"
#define UI_TEXT_LEVEL_NL             "Level delta"
#define UI_TEXT_EXTR_WAIT_RETRACT_TEMP_NL "Wacht Temp. %XT" cDEG "C"
#define UI_TEXT_EXTR_WAIT_RETRACT_UNITS_NL "Wacht Retr.:%XU mm"
#define UI_TEXT_SD_REMOVED_NL       "SD-kaart verwijderd"
#define UI_TEXT_SD_INSERTED_NL      "SD-kaart geplaatst"
#define UI_TEXT_PRINTER_READY_NL    "Printer klaar."
// Printtime output gets aggregated like <Days_5gisgits>UI_TEXT_PRINTTIME_DAYS<Hours>UI_TEXT_PRINTTIME_HOURS<Minutes>UI_TEXT_PRINTTIME_MINUTES
// ___88 days 12:45
#define UI_TEXT_PRINTTIME_DAYS_NL   " dagen "
#define UI_TEXT_PRINTTIME_HOURS_NL  ":"
#define UI_TEXT_PRINTTIME_MINUTES_NL ""
#define UI_TEXT_PRINT_TIME_NL     "Printing tijd"
#define UI_TEXT_PRINT_FILAMENT_NL "Filament gedrukt"
#define UI_TEXT_PRINTED_NL           "gedrukt"
#define UI_TEXT_POWER_NL            "ATX power aan/uit"
#define UI_TEXT_STRING_HM_DEADTIME_NL     "Dode tijd"
#define UI_TEXT_STRING_HM_SLOWBANG_NL     "SlowBang"
#define UI_TEXT_STOP_PRINT_NL "Stop Print"
#define UI_TEXT_Z_BABYSTEPPING_NL "Z Babystep.:%oYmm"
#define UI_TEXT_CHANGE_FILAMENT_NL "Ruil filament"
#define UI_TEXT_WIZ_CH_FILAMENT1_NL "Ruil filament:"
#define UI_TEXT_WIZ_CH_FILAMENT2_NL "Draaien voor"
#define UI_TEXT_WIZ_CH_FILAMENT3_NL "filament op/omlaag"
#define UI_TEXT_CLICK_DONE_NL "Verder met klik"
#define UI_TEXT_AUTOLEVEL_ONOFF_NL  "Autolevel: %ll"
#define UI_TEXT_SERVOPOS_NL "Servo-pos.: %oS"
#define UI_TEXT_IGNORE_M106_NL      "Negeer M106 %Fi"
#define UI_TEXT_WIZ_REHEAT1_NL "Klik om extruder"
#define UI_TEXT_WIZ_REHEAT2_NL "verwarmen."
#define UI_TEXT_WIZ_WAITTEMP1_NL "Wachten op"
#define UI_TEXT_WIZ_WAITTEMP2_NL "doeltemperatuur..."
#define UI_TEXT_EXTRUDER_JAM_NL "Extruder jam"
#define UI_TEXT_STANDBY_NL "Standby"
#define UI_TEXT_BED_COATING_NL "Bed bedekking"
#define UI_TEXT_BED_COATING_SET1_NL "Bed bedekking set to"
#define UI_TEXT_BED_COATING_SET2_NL ""
#define UI_TEXT_NOCOATING_NL "Geen bedekking"
#define UI_TEXT_BUILDTAK_NL "BuildTak"
#define UI_TEXT_KAPTON_NL "Kapton"
#define UI_TEXT_BLUETAPE_NL "Blauw afplakband"
#define UI_TEXT_PETTAPE_NL "Groene PET Tape"
#define UI_TEXT_GLUESTICK_NL "Lijmstift"
#define UI_TEXT_CUSTOM_NL "Custom"
#define UI_TEXT_COATING_CUSTOM_NL "Custom:%oCmm"
#define UI_TEXT_LANGUAGE_NL "Taal"

#if NUM_EXTRUDER > 2 || MIXING_EXTRUDER != 0
  #define UI_TEXT_MAINPAGE6_1_NL "\xa %ec/%Ec\xb0 X:%x0"
#else
  #define UI_TEXT_MAINPAGE6_1_NL "\xa %e0/%E0\xb0 X:%x0"
#endif // NUM_EXTRUDER
#if NUM_EXTRUDER == 2 && MIXING_EXTRUDER == 0
  #define UI_TEXT_MAINPAGE6_2_NL "\xa %e1/%E1\xb0 Y:%x1"
#elif HAVE_HEATED_BED
  #define UI_TEXT_MAINPAGE6_2_NL "\xe %eb/%Eb\xb0 Y:%x1"
#else
  #define UI_TEXT_MAINPAGE6_2_NL "             Y:%x1"
#endif
#if HAVE_HEATED_BED && NUM_EXTRUDER == 2 && MIXING_EXTRUDER == 0
 #define UI_TEXT_MAINPAGE6_3_NL "\xe %eb/%Eb\xb0 Z:%x2"
#elif FEATURE_DITTO_PRINTING
  #define UI_TEXT_MAINPAGE6_3_NL "Kopieen: %ed   Z:%x2"
#else
  #define UI_TEXT_MAINPAGE6_3_NL "Flow:\xfd %of%%%   Z:%x2"
#endif
#define UI_TEXT_MAINPAGE6_4_NL "Mul: %om%%% \xfd   E: %x4m"
#define UI_TEXT_MAINPAGE6_5_NL "Buf: %oB"
#define UI_TEXT_MAINPAGE6_6_NL "%os"
#define UI_TEXT_MAINPAGE_TEMP_BED_NL cTEMP "%ec/%Ec" cDEG "B%eB/%Eb" cDEG
#define UI_TEXT_MAINPAGE_BED_NL "B%eB/%Eb" cDEG
#define UI_TEXT_MAINPAGE_Z_BUF_NL "Z:%x2  Buf : %oB"
#define UI_TEXT_MAINPAGE_MUL_EUSAGE_NL "Mul: %om   E:%x4"
#define UI_TEXT_MAINPAGE_XY_NL "X:%x0 Y:%x1"
#define UI_TEXT_PRINT_TIME_VALUE_NL "%Ut"
#define UI_TEXT_PRINT_FILAMENT_VALUE_NL "%Uf m"
#define UI_TEXT_METER_PRINTED_NL "%Uf m " UI_TEXT_PRINTED_NL
#define UI_TEXT_STATUS_NL "%os"
#define UI_TEXT_EMPTY_NL ""
#define UI_TEXT_TEMP_SET_NL cTEMP "%ec/%Ec" cDEG
#define UI_TEXT_CURRENT_TEMP_NL cTEMP "%ec" cDEG
#define UI_TEXT_COATING_THICKNESS_NL " %oCmm"
#define UI_TEXT_EXTR3_TEMP_NL "Temp. 4 :%e3/%E3" cDEG "C"
#define UI_TEXT_EXTR4_TEMP_NL "Temp. 5 :%e4/%E4" cDEG "C"
#define UI_TEXT_EXTR5_TEMP_NL "Temp. 6 :%e5/%E5" cDEG "C"
#define UI_TEXT_EXTR3_OFF_NL "Extruder 4 Uit"
#define UI_TEXT_EXTR4_OFF_NL "Extruder 5 Uit"
#define UI_TEXT_EXTR5_OFF_NL "Extruder 6 Uit"
#define UI_TEXT_EXTR3_SELECT_NL "%X3 Select Extr. 4"
#define UI_TEXT_EXTR4_SELECT_NL "%X4 Select Extr. 5"
#define UI_TEXT_EXTR5_SELECT_NL "%X5 Select Extr. 6"
#define UI_TEXT_DITTO_0_NL "%D0 Geen Kopieen"
#define UI_TEXT_DITTO_1_NL "%D1 1 Kopie"
#define UI_TEXT_DITTO_2_NL "%D2 2 Kopieen"
#define UI_TEXT_DITTO_3_NL "%D3 3 Kopieen"
#define UI_TEXT_ZPROBE_HEIGHT_NL "z-probe hoogte:%zh"



#define UI_TEXT_OFFSETS_NL "Set print offsets"
#define UI_TEXT_X_OFFSET_NL "Set X offset:%T0mm"
#define UI_TEXT_Y_OFFSET_NL "Set Y offset:%T1mm"
#define UI_TEXT_Z_OFFSET_NL "Set Z offset:%T2mm"


// *************** Brazilian portuguese translation ****************

#define UI_TEXT_ON_PT               "On"
#define UI_TEXT_OFF_PT              "Off"
#define UI_TEXT_NA_PT               "N/A" // Output for not available
#define UI_TEXT_YES_PT              "Sim"
#define UI_TEXT_NO_PT               "Não"
#define UI_TEXT_SEL_PT              cSEL
#define UI_TEXT_NOSEL_PT            cUNSEL
#define UI_TEXT_PRINT_POS_PT        "Imprimindo..."
#define UI_TEXT_PRINTING_PT         "Imprimindo"
#define UI_TEXT_IDLE_PT             "Ocioso"
#define UI_TEXT_NOSDCARD_PT         "Nenhum cartao SD"
#define UI_TEXT_ERROR_PT            "**** ERRO ****"
#define UI_TEXT_BACK_PT             "Voltar " cUP
#define UI_TEXT_QUICK_SETTINGS_PT   "Configuracoes Rapidas"
#define UI_TEXT_ERRORMSG_PT         "%oe"
#define UI_TEXT_CONFIGURATION_PT    "Configuracao"
#define UI_TEXT_POSITION_PT         "Posicao"
#define UI_TEXT_EXTRUDER_PT         "Extrusor"
#define UI_TEXT_SD_CARD_PT          "Cartao SD"
#define UI_TEXT_DEBUGGING_PT        "Depuracao"
#define UI_TEXT_HOME_DELTA_PT       "Home delta"
#define UI_TEXT_HOME_ALL_PT         "Home todos"
#define UI_TEXT_HOME_X_PT           "Home X"
#define UI_TEXT_HOME_Y_PT           "Home Y"
#define UI_TEXT_HOME_Z_PT           "Home Z"
#define UI_TEXT_PREHEAT_PLA_PT      "Pre-aquecer PLA"
#define UI_TEXT_PREHEAT_ABS_PT      "Pre-aquecer ABS"
#define UI_TEXT_LIGHTS_ONOFF_PT     "Luzes:%lo"
#define UI_TEXT_COOLDOWN_PT         "Resfriar"
#define UI_TEXT_SET_TO_ORIGIN_PT    "Definir como origem"
#define UI_TEXT_DISABLE_STEPPER_PT  "Desabilitar motor"
#define UI_TEXT_X_POSITION_PT       "Posicao X"
#define UI_TEXT_X_POS_FAST_PT       "Pos. Rapida X"
#define UI_TEXT_Y_POSITION_PT       "Posicao Y"
#define UI_TEXT_Y_POS_FAST_PT       "Pos. Rapida Y"
#define UI_TEXT_Z_POSITION_PT       "Posicao Z"
#define UI_TEXT_Z_POS_FAST_PT       "Pos. Rapida Z"
#define UI_TEXT_E_POSITION_PT       "Posicao Extrusor"
#define UI_TEXT_BED_TEMP_PT         "Tem.Cama:%eb/%Eb" cDEG "C"
#define UI_TEXT_EXTR0_TEMP_PT       "Temp. 1 :%e0/%E0" cDEG "C"
#define UI_TEXT_EXTR1_TEMP_PT       "Temp. 2 :%e1/%E1" cDEG "C"
#define UI_TEXT_EXTR2_TEMP_PT       "Temp. 3 :%e2/%E2" cDEG "C"
#define UI_TEXT_EXTR0_OFF_PT        "Extr. 1 Desligado"
#define UI_TEXT_EXTR1_OFF_PT        "Extr. 2 Desligado"
#define UI_TEXT_EXTR2_OFF_PT        "Extr. 3 Desligado"
#define UI_TEXT_EXTR0_SELECT_PT     "%X0 Sel. Extr. 1"
#define UI_TEXT_EXTR1_SELECT_PT     "%X1 Sel. Extr. 2"
#define UI_TEXT_EXTR2_SELECT_PT     "%X2 Sel. Extr. 3"
#define UI_TEXT_EXTR_ORIGIN_PT      "Definir Origem"
#define UI_TEXT_PRINT_X_PT          "Imprimir X:%ax"
#define UI_TEXT_PRINT_Y_PT          "Imprimir Y:%ay"
#define UI_TEXT_PRINT_Z_PT          "Imprimir Z:%az"
#define UI_TEXT_PRINT_Z_DELTA_PT    "Imprimir:%az"
#define UI_TEXT_MOVE_X_PT           "Mover X:%aX"
#define UI_TEXT_MOVE_Y_PT           "Mover Y:%aY"
#define UI_TEXT_MOVE_Z_PT           "Mover Z:%aZ"
#define UI_TEXT_MOVE_Z_DELTA_PT     "Mover:%aZ"
#define UI_TEXT_JERK_PT             "Jerk:%aj"
#define UI_TEXT_ZJERK_PT            "Z-Jerk:%aJ"
#define UI_TEXT_ACCELERATION_PT     "Aceleracao"
#define UI_TEXT_STORE_TO_EEPROM_PT  "Armazenar na EEPROM"
#define UI_TEXT_LOAD_EEPROM_PT      "Carregar da EEPROM"
#define UI_TEXT_DBG_ECHO_PT         "Echo   :%do"
#define UI_TEXT_DBG_INFO_PT         "Info   :%di"
#define UI_TEXT_DBG_ERROR_PT        "Erros :%de"
#define UI_TEXT_DBG_DRYRUN_PT       "Dry run:%dd"
#define UI_TEXT_OPS_OFF_PT          "%O0 OPS Off"
#define UI_TEXT_OPS_CLASSIC_PT      "%O1 OPS Classic"
#define UI_TEXT_OPS_FAST_PT         "%O2 OPS Fast"
#define UI_TEXT_OPS_RETRACT_PT      "Retract :%Or"
#define UI_TEXT_OPS_BACKSLASH_PT    "Backsl. :%Ob"
#define UI_TEXT_OPS_MINDIST_PT      "Min.dist:%Od"
#define UI_TEXT_OPS_MOVE_AFTER_PT   "Move after:%Oa"
#define UI_TEXT_ANTI_OOZE_PT        "Anti Ooze"
#define UI_TEXT_PRINT_FILE_PT       "Imprimir arquivo"
#define UI_TEXT_PAUSE_PRINT_PT      "Pausar Impressao"
#define UI_TEXT_CONTINUE_PRINT_PT   "Continuar Impressao"
#define UI_TEXT_UNMOUNT_CARD_PT     "Desmontar Cartao"
#define UI_TEXT_MOUNT_CARD_PT       "Montar Cartao"
#define UI_TEXT_DELETE_FILE_PT      "Deletar arquivo"
#define UI_TEXT_FEEDRATE_PT         "Feedrate"
#define UI_TEXT_FEED_MAX_X_PT       "Max X:%fx"
#define UI_TEXT_FEED_MAX_Y_PT       "Max Y:%fy"
#define UI_TEXT_FEED_MAX_Z_PT       "Max Z:%fz"
#define UI_TEXT_FEED_MAX_Z_DELTA_PT "Max:%fz"
#define UI_TEXT_FEED_HOME_X_PT      "Home X:%fX"
#define UI_TEXT_FEED_HOME_Y_PT      "Home Y:%fY"
#define UI_TEXT_FEED_HOME_Z_PT      "Home Z:%fZ"
#define UI_TEXT_FEED_HOME_Z_DELTA_PT "Home:%fZ"
#define UI_TEXT_ACTION_XPOSITION4A_PT "X:%x0 mm"
#define UI_TEXT_ACTION_XPOSITION4B_PT "Min endstop:%sx"
#define UI_TEXT_ACTION_XPOSITION4C_PT "Max endstop:%sX"
#define UI_TEXT_ACTION_XPOSITION4D_PT ""
#define UI_TEXT_ACTION_YPOSITION4A_PT "Y:%x1 mm"
#define UI_TEXT_ACTION_YPOSITION4B_PT "Min endstop:%sy"
#define UI_TEXT_ACTION_YPOSITION4C_PT "Max endstop:%sY"
#define UI_TEXT_ACTION_YPOSITION4D_PT ""
#define UI_TEXT_ACTION_ZPOSITION4A_PT "Z:%x2 mm"
#define UI_TEXT_ACTION_ZPOSITION4B_PT "Min endstop:%sz"
#define UI_TEXT_ACTION_ZPOSITION4C_PT "Max endstop:%sZ"
#define UI_TEXT_ACTION_ZPOSITION4D_PT ""
#define UI_TEXT_ACTION_XPOSITION_FAST4A_PT "X:%x0 mm"
#define UI_TEXT_ACTION_XPOSITION_FAST4B_PT "Min endstop:%sx"
#define UI_TEXT_ACTION_XPOSITION_FAST4C_PT "Max endstop:%sX"
#define UI_TEXT_ACTION_XPOSITION_FAST4D_PT ""
#define UI_TEXT_ACTION_YPOSITION_FAST4A_PT "Y:%x1 mm"
#define UI_TEXT_ACTION_YPOSITION_FAST4B_PT "Min endstop:%sy"
#define UI_TEXT_ACTION_YPOSITION_FAST4C_PT "Max endstop:%sY"
#define UI_TEXT_ACTION_YPOSITION_FAST4D_PT ""
#define UI_TEXT_ACTION_ZPOSITION_FAST4A_PT "Z:%x2 mm"
#define UI_TEXT_ACTION_ZPOSITION_FAST4B_PT "Min endstop:%sz"
#define UI_TEXT_ACTION_ZPOSITION_FAST4C_PT "Max endstop:%sZ"
#define UI_TEXT_ACTION_ZPOSITION_FAST4D_PT ""
#define UI_TEXT_ACTION_EPOSITION_FAST2A_PT "E:%x3 mm"
#define UI_TEXT_ACTION_EPOSITION_FAST2B_PT "1 click = 1 mm"
#define UI_TEXT_ACTION_XPOSITION2A_PT "X:%x0 mm"
#define UI_TEXT_ACTION_XPOSITION2B_PT "Min:%sx Max:%sX"
#define UI_TEXT_ACTION_YPOSITION2A_PT "Y:%x1 mm"
#define UI_TEXT_ACTION_YPOSITION2B_PT "Min:%sy Max:%sY"
#define UI_TEXT_ACTION_ZPOSITION2A_PT "Z:%x2 mm"
#define UI_TEXT_ACTION_ZPOSITION2B_PT "Min:%sz Max:%sZ"
#define UI_TEXT_ACTION_XPOSITION_FAST2A_PT "X:%x0 mm"
#define UI_TEXT_ACTION_XPOSITION_FAST2B_PT "Min:%sx Max:%sX"
#define UI_TEXT_ACTION_YPOSITION_FAST2A_PT "Y:%x1 mm"
#define UI_TEXT_ACTION_YPOSITION_FAST2B_PT "Min:%sy Max:%sY"
#define UI_TEXT_ACTION_ZPOSITION_FAST2A_PT "Z:%x2 mm"
#define UI_TEXT_ACTION_ZPOSITION_FAST2B_PT "Min:%sz Max:%sZ"
#define UI_TEXT_FANSPEED_PT          "Velocidade ventoinha"
#define UI_TEXT_ACTION_FANSPEED_PT   "Vel. vent.:%Fs%%%"
#define UI_TEXT_FAN_OFF_PT           "Desligar ventoinha"
#define UI_TEXT_FAN_25_PT            "Def. ventoinha 25%%%"
#define UI_TEXT_FAN_50_PT            "Def. ventoinha 50%%%"
#define UI_TEXT_FAN_75_PT            "Def. ventoinha 75%%%"
#define UI_TEXT_FAN_FULL_PT          "Def. ventoinha 100%%%"
#define UI_TEXT_STEPPER_INACTIVE_PT  "Motor Inativo"
#define UI_TEXT_STEPPER_INACTIVE2A_PT "Des. Depois: %is"
#define UI_TEXT_STEPPER_INACTIVE2B_PT "[min] 0=Off"
#define UI_TEXT_POWER_INACTIVE_PT    "Max. Inativo"
#define UI_TEXT_POWER_INACTIVE2A_PT   "Des. Depois: %ip"
#define UI_TEXT_POWER_INACTIVE2B_PT   "[min] 0=Off"
#define UI_TEXT_GENERAL_PT           "Geral"
#define UI_TEXT_BAUDRATE_PT          "Baudrate:%oc"
#define UI_TEXT_EXTR_STEPS_PT        "Passos/mm:%Se"
#define UI_TEXT_EXTR_START_FEED_PT   "Iniciar FR:%Xf"
#define UI_TEXT_EXTR_MAX_FEED_PT     "Max FR:%XF"
#define UI_TEXT_EXTR_ACCEL_PT        "Accel:%XA"
#define UI_TEXT_EXTR_WATCH_PT        "Stab.Time:%Xw"
#define UI_TEXT_EXTR_ADVANCE_L_PT    "Advance lin:%Xl"
#define UI_TEXT_EXTR_ADVANCE_K_PT    "Advance quad:%Xa"
#define UI_TEXT_EXTR_MANAGER_PT      "Controle:%Xh"
#define UI_TEXT_EXTR_PGAIN_PT        "PID P:%Xp"
#define UI_TEXT_EXTR_DEADTIME_PT     "Tempo morto:%Xp"
#define UI_TEXT_EXTR_DMAX_DT_PT      "Controle PWM:%XM"
#define UI_TEXT_EXTR_IGAIN_PT        "PID I:%Xi"
#define UI_TEXT_EXTR_DGAIN_PT        "PID D:%Xd"
#define UI_TEXT_EXTR_DMIN_PT         "Drive Min:%Xm"
#define UI_TEXT_EXTR_DMAX_PT         "Drive Max:%XM"
#define UI_TEXT_EXTR_PMAX_PT         "PID Max:%XD"
#define UI_TEXT_EXTR_XOFF_PT         "Offset X:%Xx"
#define UI_TEXT_EXTR_YOFF_PT         "Offset Y:%Xy"
#define UI_TEXT_STRING_HM_BANGBANG_PT "BangBang"
#define UI_TEXT_STRING_HM_PID_PT     "PID"
#define UI_TEXT_STRING_ACTION_PT     "Acao:%la"
#define UI_TEXT_HEATING_EXTRUDER_PT  "Aquecendo Extrusor"
#define UI_TEXT_HEATING_BED_PT       "Aquecendo Cama"
#define UI_TEXT_KILLED_PT            "Killed"
#define UI_TEXT_STEPPER_DISABLED_PT  "Motor Desabilitado"
#define UI_TEXT_EEPROM_STOREDA_PT     "Configuracao"
#define UI_TEXT_EEPROM_STOREDB_PT     "armazenada na EEPROM"
#define UI_TEXT_EEPROM_LOADEDA_PT     "Configuracao"
#define UI_TEXT_EEPROM_LOADEDB_PT     "carregada da EEPROM"
#define UI_TEXT_UPLOADING_PT         "Enviando..."
#define UI_TEXT_PAGE_BUFFER_PT       "Buffer:%oB"
#define UI_TEXT_PAGE_EXTRUDER_PT     " E:%ec/%Ec" cDEG "C" cARROW "%oC"
#define UI_TEXT_PAGE_EXTRUDER1_PT     "E1:%e0/%E0" cDEG "C" cARROW "%o0"
#define UI_TEXT_PAGE_EXTRUDER2_PT     "E2:%e1/%E1" cDEG "C" cARROW "%o1"
#define UI_TEXT_PAGE_EXTRUDER3_PT     "E3:%e2/%E2" cDEG "C" cARROW "%o2"
#define UI_TEXT_PAGE_BED_PT          " B:%eb/%Eb" cDEG "C" cARROW "%ob"
#define UI_TEXT_SPEED_MULTIPLY_PT    "Mult. Veloc.:%om%%%"
#define UI_TEXT_FLOW_MULTIPLY_PT     "Mult. Fluxo:%of%%%"
#define UI_TEXT_SHOW_MEASUREMENT_PT  "Mostrar medicao"
#define UI_TEXT_RESET_MEASUREMENT_PT "Reset medicao"
#define UI_TEXT_SET_MEASURED_ORIGIN_PT "Set Z=0"
#define UI_TEXT_ZCALIB_PT             "Z calib."
#define UI_TEXT_SET_P1_PT            "Set P1"
#define UI_TEXT_SET_P2_PT            "Set P2"
#define UI_TEXT_SET_P3_PT            "Set P3"
#define UI_TEXT_CALCULATE_LEVELING_PT "Calcule nivelamento"
#define UI_TEXT_LEVEL_PT             "Nivel delta"
#define UI_TEXT_EXTR_WAIT_RETRACT_TEMP_PT  "Aguardar Temp.%XT" cDEG "C"
#define UI_TEXT_EXTR_WAIT_RETRACT_UNITS_PT "Aguardar Unidades:%XUmm"
#define UI_TEXT_SD_REMOVED_PT       "Cartao SD removido"
#define UI_TEXT_SD_INSERTED_PT      "Cartao SD inserido"
#define UI_TEXT_PRINTER_READY_PT    "Impressora pronta."
// Printtime output gets aggregated like <Days_5gisgits>UI_TEXT_PRINTTIME_DAYS<Hours>UI_TEXT_PRINTTIME_HOURS<Minutes>UI_TEXT_PRINTTIME_MINUTES
// ___88 days 12:45
#define UI_TEXT_PRINTTIME_DAYS_PT   " dias "
#define UI_TEXT_PRINTTIME_HOURS_PT  ":"
#define UI_TEXT_PRINTTIME_MINUTES_PT ""
#define UI_TEXT_PRINT_TIME_PT     "tempo de impressao"
#define UI_TEXT_PRINT_FILAMENT_PT "Filament impresso"
#define UI_TEXT_PRINTED_PT           "impresso"
#define UI_TEXT_POWER_PT            "ATX poder on/off"
#define UI_TEXT_STRING_HM_DEADTIME_PT     "Tempo morto"
#define UI_TEXT_STRING_HM_SLOWBANG_PT     "SlowBang"
#define UI_TEXT_STOP_PRINT_PT "Parar impressao"
#define UI_TEXT_Z_BABYSTEPPING_PT "Z babystep.:%oYmm"
#define UI_TEXT_CHANGE_FILAMENT_PT "Alterar filamento"
#define UI_TEXT_WIZ_CH_FILAMENT1_PT "Alterar filamento"
#define UI_TEXT_WIZ_CH_FILAMENT2_PT "Gire para mover"
#define UI_TEXT_WIZ_CH_FILAMENT3_PT "filamento cima/baixo"
#define UI_TEXT_CLICK_DONE_PT "Clique quando feito"
#define UI_TEXT_AUTOLEVEL_ONOFF_PT  "Nivel auto: %ll"
#define UI_TEXT_SERVOPOS_PT "Pos. servo: %oS"
#define UI_TEXT_IGNORE_M106_PT      "Ignorar M106 %Fi"
#define UI_TEXT_WIZ_REHEAT1_PT "Clique para"
#define UI_TEXT_WIZ_REHEAT2_PT "aquecer extrusora."
#define UI_TEXT_WIZ_WAITTEMP1_PT "Aguardando a"
#define UI_TEXT_WIZ_WAITTEMP2_PT "temperatura alvo ..."
#define UI_TEXT_EXTRUDER_JAM_PT "Extrusora congest."
#define UI_TEXT_STANDBY_PT "Standby"
#define UI_TEXT_BED_COATING_PT "Revest. de leito"
#define UI_TEXT_BED_COATING_SET1_PT "Revest. de leito:"
#define UI_TEXT_BED_COATING_SET2_PT ""
#define UI_TEXT_NOCOATING_PT "Sem revestimento"
#define UI_TEXT_BUILDTAK_PT "BuildTak"
#define UI_TEXT_KAPTON_PT "Kapton"
#define UI_TEXT_BLUETAPE_PT "Fita crepe azul"
#define UI_TEXT_PETTAPE_PT "Fita verde PET"
#define UI_TEXT_GLUESTICK_PT "Cola bastao"
#define UI_TEXT_CUSTOM_PT "Personalizadas"
#define UI_TEXT_COATING_CUSTOM_PT "Person.:%oCmm"
#define UI_TEXT_LANGUAGE_PT "Idioma"

#if NUM_EXTRUDER > 2 || MIXING_EXTRUDER != 0
  #define UI_TEXT_MAINPAGE6_1_PT "\xa %ec/%Ec\xb0 X:%x0"
#else
  #define UI_TEXT_MAINPAGE6_1_PT "\xa %e0/%E0\xb0 X:%x0"
#endif // NUM_EXTRUDER
#if NUM_EXTRUDER == 2 && MIXING_EXTRUDER == 0
  #define UI_TEXT_MAINPAGE6_2_PT "\xa %e1/%E1\xb0 Y:%x1"
#elif HAVE_HEATED_BED
  #define UI_TEXT_MAINPAGE6_2_PT "\xe %eb/%Eb\xb0 Y:%x1"
#else
  #define UI_TEXT_MAINPAGE6_2_PT "             Y:%x1"
#endif
#if HAVE_HEATED_BED && NUM_EXTRUDER == 2 && MIXING_EXTRUDER == 0
 #define UI_TEXT_MAINPAGE6_3_PT "\xe %eb/%Eb\xb0 Z:%x2"
#elif FEATURE_DITTO_PRINTING
  #define UI_TEXT_MAINPAGE6_3_PT "Copias: %ed    Z:%x2"
#else
  #define UI_TEXT_MAINPAGE6_3_PT "Fluxo:\xfd %of%%%  Z:%x2"
#endif
#define UI_TEXT_MAINPAGE6_4_PT "Mul: %om%%% \xfd   E: %x4m"
#define UI_TEXT_MAINPAGE6_5_PT "Buf: %oB"
#define UI_TEXT_MAINPAGE6_6_PT "%os"
#define UI_TEXT_MAINPAGE_TEMP_BED_PT cTEMP "%ec/%Ec" cDEG "B%eB/%Eb" cDEG
#define UI_TEXT_MAINPAGE_BED_PT "B%eB/%Eb" cDEG
#define UI_TEXT_MAINPAGE_Z_BUF_PT "Z:%x2  Buf : %oB"
#define UI_TEXT_MAINPAGE_MUL_EUSAGE_PT "Mul: %om   E:%x4"
#define UI_TEXT_MAINPAGE_XY_PT "X:%x0 Y:%x1"
#define UI_TEXT_PRINT_TIME_VALUE_PT "%Ut"
#define UI_TEXT_PRINT_FILAMENT_VALUE_PT "%Uf m"
#define UI_TEXT_METER_PRINTED_PT "%Uf m " UI_TEXT_PRINTED_EN
#define UI_TEXT_STATUS_PT "%os"
#define UI_TEXT_EMPTY_PT ""
#define UI_TEXT_TEMP_SET_PT cTEMP "%ec/%Ec" cDEG
#define UI_TEXT_CURRENT_TEMP_PT cTEMP "%ec" cDEG
#define UI_TEXT_COATING_THICKNESS_PT " %oCmm"
#define UI_TEXT_EXTR3_TEMP_PT "Temp. 4 :%e3/%E3" cDEG "C"
#define UI_TEXT_EXTR4_TEMP_PT "Temp. 5 :%e4/%E4" cDEG "C"
#define UI_TEXT_EXTR5_TEMP_PT "Temp. 6 :%e5/%E5" cDEG "C"
#define UI_TEXT_EXTR3_OFF_PT "Extr. 4 Desligado"
#define UI_TEXT_EXTR4_OFF_PT "Extr. 5 Desligado"
#define UI_TEXT_EXTR5_OFF_PT "Extr. 6 Desligado"
#define UI_TEXT_EXTR3_SELECT_PT "%X3 Sel. Extr. 4"
#define UI_TEXT_EXTR4_SELECT_PT "%X4 Sel. Extr. 5"
#define UI_TEXT_EXTR5_SELECT_PT "%X5 Sel. Extr. 6"
#define UI_TEXT_DITTO_0_PT "%D0 Nenhuma Copia"
#define UI_TEXT_DITTO_1_PT "%D1 1 Copia"
#define UI_TEXT_DITTO_2_PT "%D2 2 Copias"
#define UI_TEXT_DITTO_3_PT "%D3 3 Copias"
#define UI_TEXT_ZPROBE_HEIGHT_PT "Altura Z-Probe:%zh"



#define UI_TEXT_OFFSETS_PT "Set print offsets"
#define UI_TEXT_X_OFFSET_PT "Set X offset:%T0mm"
#define UI_TEXT_Y_OFFSET_PT "Set Y offset:%T1mm"
#define UI_TEXT_Z_OFFSET_PT "Set Z offset:%T2mm"


// *************** Italian translation ****************

#define UI_TEXT_ON_IT               "On"
#define UI_TEXT_OFF_IT              "Off"
#define UI_TEXT_NA_IT               "N/A" // Output for not available
#define UI_TEXT_YES_IT              "Si"
#define UI_TEXT_NO_IT               "No"
#define UI_TEXT_PRINT_POS_IT        "Stampa..."
#define UI_TEXT_PRINTING_IT         "Stampa"
#define UI_TEXT_IDLE_IT             "Pausa"
#define UI_TEXT_NOSDCARD_IT         "No Scheda SD"
#define UI_TEXT_ERROR_IT            "**** ERRORE ****"
#define UI_TEXT_BACK_IT             "Indietro " cUP
#define UI_TEXT_QUICK_SETTINGS_IT   "Impostazioni veloci"
#define UI_TEXT_ERRORMSG_IT         "%oe"
#define UI_TEXT_CONFIGURATION_IT    "Configurazione"
#define UI_TEXT_POSITION_IT         "Posizione"
#define UI_TEXT_EXTRUDER_IT         "Estrusore"
#define UI_TEXT_SD_CARD_IT          "Scheda SD"
#define UI_TEXT_DEBUGGING_IT        "Sviluppo"
#define UI_TEXT_HOME_DELTA_IT       "Origine Delta"
#define UI_TEXT_HOME_ALL_IT         "Origine Tutti"
#define UI_TEXT_HOME_X_IT           "Origine X"
#define UI_TEXT_HOME_Y_IT           "Origine Y"
#define UI_TEXT_HOME_Z_IT           "Origine Z"
#define UI_TEXT_PREHEAT_PLA_IT      "Presicaldamento PLA"
#define UI_TEXT_PREHEAT_ABS_IT      "Presicaldamento ABS"
#define UI_TEXT_LIGHTS_ONOFF_IT     "Luci:%lo"
#define UI_TEXT_COOLDOWN_IT         "Raffreddamento"
#define UI_TEXT_SET_TO_ORIGIN_IT    "Imposta come Origine"
#define UI_TEXT_DISABLE_STEPPER_IT  "Disabilita Stepper"
#define UI_TEXT_X_POSITION_IT       "Posizione X"
#define UI_TEXT_X_POS_FAST_IT       "Pos. X Veloce"
#define UI_TEXT_Y_POSITION_IT       "Posizione Y"
#define UI_TEXT_Y_POS_FAST_IT       "Pos. Y Veloce"
#define UI_TEXT_Z_POSITION_IT       "Posizione Z"
#define UI_TEXT_Z_POS_FAST_IT       "Pos. Z Veloce"
#define UI_TEXT_E_POSITION_IT       "Posizione Estrusore"
#define UI_TEXT_BED_TEMP_IT         "Temp.Piatto:%Eb" cDEG "C"
#define UI_TEXT_EXTR0_TEMP_IT       "Temp. 1 :%e0/%E0" cDEG "C"
#define UI_TEXT_EXTR1_TEMP_IT       "Temp. 2 :%e1/%E1" cDEG "C"
#define UI_TEXT_EXTR2_TEMP_IT       "Temp. 3 :%e2/%E2" cDEG "C"
#define UI_TEXT_EXTR0_OFF_IT        "Estrusore 1 Spento"
#define UI_TEXT_EXTR1_OFF_IT        "Estrusore 2 Spento"
#define UI_TEXT_EXTR2_OFF_IT        "Estrusore 3 Spento"
#define UI_TEXT_EXTR0_SELECT_IT     "%X0 Seleziona Estr. 1"
#define UI_TEXT_EXTR1_SELECT_IT     "%X1 Seleziona Estr. 2"
#define UI_TEXT_EXTR2_SELECT_IT     "%X2 Seleziona Estr. 3"
#define UI_TEXT_EXTR_ORIGIN_IT      "Imposta Origine"
#define UI_TEXT_PRINT_X_IT          "Stampa X:%ax"
#define UI_TEXT_PRINT_Y_IT          "Stampa Y:%ay"
#define UI_TEXT_PRINT_Z_IT          "Stampa Z:%az"
#define UI_TEXT_PRINT_Z_DELTA_IT    "Stampa:%az"
#define UI_TEXT_MOVE_X_IT           "Movimento X:%aX"
#define UI_TEXT_MOVE_Y_IT           "Movimento Y:%aY"
#define UI_TEXT_MOVE_Z_IT           "Movimento Z:%aZ"
#define UI_TEXT_MOVE_Z_DELTA_IT     "Movimento:%aZ"
#define UI_TEXT_JERK_IT             "Scatto:%aj"
#define UI_TEXT_ZJERK_IT            "Scatto-Z:%aJ"
#define UI_TEXT_ACCELERATION_IT     "Accelerazione"
#define UI_TEXT_STORE_TO_EEPROM_IT  "Salva in EEPROM"
#define UI_TEXT_LOAD_EEPROM_IT      "Carica da EEPROM"
#define UI_TEXT_DBG_ECHO_IT         "Eco   :%do"
#define UI_TEXT_DBG_INFO_IT         "Info   :%di"
#define UI_TEXT_DBG_ERROR_IT        "Errori :%de"
#define UI_TEXT_DBG_DRYRUN_IT       "Simulazione:%dd"
#define UI_TEXT_OPS_OFF_IT          "%O0 OPS Spento"
#define UI_TEXT_OPS_CLASSIC_IT      "%O1 OPS Classico"
#define UI_TEXT_OPS_FAST_IT         "%O2 OPS Veloce"
#define UI_TEXT_OPS_RETRACT_IT      "Ritiro :%Or"
#define UI_TEXT_OPS_BACKSLASH_IT    "Gioco barra:%Ob"
#define UI_TEXT_OPS_MINDIST_IT      "Distanza Min.:%Od"
#define UI_TEXT_OPS_MOVE_AFTER_IT   "Movimento dopo:%Oa"
#define UI_TEXT_ANTI_OOZE_IT        "Anti goccia"
#define UI_TEXT_PRINT_FILE_IT       "Stampa file"
#define UI_TEXT_PAUSE_PRINT_IT      "Pausa Stampa"
#define UI_TEXT_CONTINUE_PRINT_IT   "Continua Stampa"
#define UI_TEXT_UNMOUNT_CARD_IT     "Scarica Scheda"
#define UI_TEXT_MOUNT_CARD_IT       "Carica Scheda"
#define UI_TEXT_DELETE_FILE_IT      "Cancella file"
#define UI_TEXT_FEEDRATE_IT         "Velocita'"
#define UI_TEXT_FEED_MAX_X_IT       "Massimo X:%fx"
#define UI_TEXT_FEED_MAX_Y_IT       "Massimo Y:%fy"
#define UI_TEXT_FEED_MAX_Z_IT       "Massimo Z:%fz"
#define UI_TEXT_FEED_MAX_Z_DELTA_IT "Massimo:%fz"
#define UI_TEXT_FEED_HOME_X_IT      "Origine X:%fX"
#define UI_TEXT_FEED_HOME_Y_IT      "Origine Y:%fY"
#define UI_TEXT_FEED_HOME_Z_IT      "Origine Z:%fZ"
#define UI_TEXT_FEED_HOME_Z_DELTA_IT "Origine:%fZ"
#define UI_TEXT_ACTION_XPOSITION4A_IT "X:%x0 mm"
#define UI_TEXT_ACTION_XPOSITION4B_IT "Min finec.:%sx"
#define UI_TEXT_ACTION_XPOSITION4C_IT "Max finec.:%sX"
#define UI_TEXT_ACTION_XPOSITION4D_IT ""
#define UI_TEXT_ACTION_YPOSITION4A_IT "Y:%x1 mm"
#define UI_TEXT_ACTION_YPOSITION4B_IT "Min finec.:%sy"
#define UI_TEXT_ACTION_YPOSITION4C_IT "Max finec.:%sY"
#define UI_TEXT_ACTION_YPOSITION4D_IT ""
#define UI_TEXT_ACTION_ZPOSITION4A_IT "Z:%x2 mm"
#define UI_TEXT_ACTION_ZPOSITION4B_IT "Min finec.:%sz"
#define UI_TEXT_ACTION_ZPOSITION4C_IT "Max finec.:%sZ"
#define UI_TEXT_ACTION_ZPOSITION4D_IT ""
#define UI_TEXT_ACTION_XPOSITION_FAST4A_IT "X:%x0 mm"
#define UI_TEXT_ACTION_XPOSITION_FAST4B_IT "Min finec.:%sx"
#define UI_TEXT_ACTION_XPOSITION_FAST4C_IT "Max finec.:%sX"
#define UI_TEXT_ACTION_XPOSITION_FAST4D_IT ""
#define UI_TEXT_ACTION_YPOSITION_FAST4A_IT "Y:%x1 mm"
#define UI_TEXT_ACTION_YPOSITION_FAST4B_IT "Min finec.:%sy"
#define UI_TEXT_ACTION_YPOSITION_FAST4C_IT "Max finec.:%sY"
#define UI_TEXT_ACTION_YPOSITION_FAST4D_IT ""
#define UI_TEXT_ACTION_ZPOSITION_FAST4A_IT "Z:%x2 mm"
#define UI_TEXT_ACTION_ZPOSITION_FAST4B_IT "Min finec.:%sz"
#define UI_TEXT_ACTION_ZPOSITION_FAST4C_IT "Max finec.:%sZ"
#define UI_TEXT_ACTION_ZPOSITION_FAST4D_IT ""
#define UI_TEXT_ACTION_EPOSITION_FAST2A_IT "E:%x3 mm"
#define UI_TEXT_ACTION_EPOSITION_FAST2B_IT "1 scatto = 1 mm"
#define UI_TEXT_ACTION_XPOSITION2A_IT "X:%x0 mm"
#define UI_TEXT_ACTION_XPOSITION2B_IT "Min:%sx Max:%sX"
#define UI_TEXT_ACTION_YPOSITION2A_IT "Y:%x1 mm"
#define UI_TEXT_ACTION_YPOSITION2B_IT "Min:%sy Max:%sY"
#define UI_TEXT_ACTION_ZPOSITION2A_IT "Z:%x2 mm"
#define UI_TEXT_ACTION_ZPOSITION2B_IT "Min:%sz Max:%sZ"
#define UI_TEXT_ACTION_XPOSITION_FAST2A_IT "X:%x0 mm"
#define UI_TEXT_ACTION_XPOSITION_FAST2B_IT "Min:%sx Max:%sX"
#define UI_TEXT_ACTION_YPOSITION_FAST2A_IT "Y:%x1 mm"
#define UI_TEXT_ACTION_YPOSITION_FAST2B_IT "Min:%sy Max:%sY"
#define UI_TEXT_ACTION_ZPOSITION_FAST2A_IT "Z:%x2 mm"
#define UI_TEXT_ACTION_ZPOSITION_FAST2B_IT "Min:%sz Max:%sZ"
#define UI_TEXT_FANSPEED_IT          "Velocita Ventola"
#define UI_TEXT_ACTION_FANSPEED_IT   "Vel. Ventola:%Fs%%%"
#define UI_TEXT_FAN_OFF_IT           "Spegnimento Ventola"
#define UI_TEXT_FAN_25_IT            "Ventola al 25%%%"
#define UI_TEXT_FAN_50_IT            "Ventola al%%%"
#define UI_TEXT_FAN_75_IT            "Ventola al%%%"
#define UI_TEXT_FAN_FULL_IT          "Ventola al massimo"
#define UI_TEXT_STEPPER_INACTIVE_IT  "Stepper Inattivi"
#define UI_TEXT_STEPPER_INACTIVE2A_IT "Dis. dopo: %is"
#define UI_TEXT_STEPPER_INACTIVE2B_IT "[min] 0=Off"
#define UI_TEXT_POWER_INACTIVE_IT    "Max. Inattivita'"
#define UI_TEXT_POWER_INACTIVE2A_IT   "Dis. After: %ip"
#define UI_TEXT_POWER_INACTIVE2B_IT   "[min] 0=Off"
#define UI_TEXT_GENERAL_IT           "Generale"
#define UI_TEXT_BAUDRATE_IT          "Baudrate:%oc"
#define UI_TEXT_EXTR_STEPS_IT        "Passi/mm:%Se"
#define UI_TEXT_EXTR_START_FEED_IT   "Velocita' Avvio:%Xf"
#define UI_TEXT_EXTR_MAX_FEED_IT     "Velocita' Max:%XF"
#define UI_TEXT_EXTR_ACCEL_IT        "Accel:%XA"
#define UI_TEXT_EXTR_WATCH_IT        "Tempo Stab.:%Xw"
#define UI_TEXT_EXTR_ADVANCE_L_IT    "Avanzamento lin:%Xl"
#define UI_TEXT_EXTR_ADVANCE_K_IT    "Avanzamento espon:%Xa"
#define UI_TEXT_EXTR_MANAGER_IT      "Controllo:%Xh"
#define UI_TEXT_EXTR_PGAIN_IT        "PID P:%Xp"
#define UI_TEXT_EXTR_DEADTIME_IT     "Tempo morto:%Xp"
#define UI_TEXT_EXTR_DMAX_DT_IT      "Controllo PWM:%XM"
#define UI_TEXT_EXTR_IGAIN_IT        "PID I:%Xi"
#define UI_TEXT_EXTR_DGAIN_IT        "PID D:%Xd"
#define UI_TEXT_EXTR_DMIN_IT         "Drive Min:%Xm"
#define UI_TEXT_EXTR_DMAX_IT         "Drive Max:%XM"
#define UI_TEXT_EXTR_PMAX_IT         "PID Max:%XD"
#define UI_TEXT_EXTR_XOFF_IT         "X-Offset:%Xx"
#define UI_TEXT_EXTR_YOFF_IT         "Y-Offset:%Xy"
#define UI_TEXT_STRING_HM_BANGBANG_IT "BangBang"
#define UI_TEXT_STRING_HM_PID_IT     "PID"
#define UI_TEXT_STRING_ACTION_IT     "Azione:%la"
#define UI_TEXT_HEATING_EXTRUDER_IT  "Riscald. Estrusore"
#define UI_TEXT_HEATING_BED_IT       "Riscald. Piatto"
#define UI_TEXT_KILLED_IT            "Abortito"
#define UI_TEXT_STEPPER_DISABLED_IT  "Stepper Disabilitato"
#define UI_TEXT_EEPROM_STOREDA_IT     "Configurazione"
#define UI_TEXT_EEPROM_STOREDB_IT     "Salvata in EEPROM"
#define UI_TEXT_EEPROM_LOADEDA_IT     "Configurazione"
#define UI_TEXT_EEPROM_LOADEDB_IT     "Caricata da EEPROM"
#define UI_TEXT_UPLOADING_IT         "Caricamento..."
#define UI_TEXT_PAGE_BUFFER_IT       "Tampone:%oB"
#define UI_TEXT_PAGE_EXTRUDER_IT     " E:%ec/%Ec" cDEG "C" cARROW "%oC"
#define UI_TEXT_PAGE_EXTRUDER1_IT     "E1:%e0/%E0" cDEG "C" cARROW "%o0"
#define UI_TEXT_PAGE_EXTRUDER2_IT     "E2:%e1/%E1" cDEG "C" cARROW "%o1"
#define UI_TEXT_PAGE_EXTRUDER3_IT     "E3:%e2/%E2" cDEG "C" cARROW "%o2"
#define UI_TEXT_PAGE_BED_IT          " B:%eb/%Eb" cDEG "C" cARROW "%ob"
#define UI_TEXT_SPEED_MULTIPLY_IT    "Molt. Velocita':%om%%%"
#define UI_TEXT_FLOW_MULTIPLY_IT     "Molt. Flusso:%of%%%"
#define UI_TEXT_SHOW_MEASUREMENT_IT  "Mostra di misura"
#define UI_TEXT_RESET_MEASUREMENT_IT "Ripristino di misura"
#define UI_TEXT_SET_MEASURED_ORIGIN_IT "Set Z=0"
#define UI_TEXT_ZCALIB_IT             "Z Calib."
#define UI_TEXT_SET_P1_IT            "Impostato P1"
#define UI_TEXT_SET_P2_IT            "Impostato P2"
#define UI_TEXT_SET_P3_IT            "Impostato P3"
#define UI_TEXT_CALCULATE_LEVELING_IT "Calcol. livellamento"
#define UI_TEXT_LEVEL_IT             "Livello delta"
#define UI_TEXT_EXTR_WAIT_RETRACT_TEMP_IT  "Attesa Temp.%XT" cDEG "C"
#define UI_TEXT_EXTR_WAIT_RETRACT_UNITS_IT "Attesa Unita':%XUmm"
#define UI_TEXT_SD_REMOVED_IT       "SD Card rimosso"
#define UI_TEXT_SD_INSERTED_IT      "SD Card inserita"
#define UI_TEXT_PRINTER_READY_IT    "Stampante pronta."
// Printtime output gets aggregated like <Days_5gisgits>UI_TEXT_PRINTTIME_DAYS<Hours>UI_TEXT_PRINTTIME_HOURS<Minutes>UI_TEXT_PRINTTIME_MINUTES
// ___88 days 12:45
#define UI_TEXT_PRINTTIME_DAYS_IT   " giorni "
#define UI_TEXT_PRINTTIME_HOURS_IT  ":"
#define UI_TEXT_PRINTTIME_MINUTES_IT ""
#define UI_TEXT_PRINT_TIME_IT     "Tempo di stampa"
#define UI_TEXT_PRINT_FILAMENT_IT "Filament stampata"
#define UI_TEXT_PRINTED_IT           "stampato"
#define UI_TEXT_POWER_IT            "ATX on/off"
#define UI_TEXT_STRING_HM_DEADTIME_IT     "Tempo morto"
#define UI_TEXT_STRING_HM_SLOWBANG_IT     "SlowBang"
#define UI_TEXT_STOP_PRINT_IT "Arresto Stampa"
#define UI_TEXT_Z_BABYSTEPPING_IT "Z Babystep.:%oYmm"
#define UI_TEXT_CHANGE_FILAMENT_IT "Cambia filamento"
#define UI_TEXT_WIZ_CH_FILAMENT1_IT "Cambia filamento"
#define UI_TEXT_WIZ_CH_FILAMENT2_IT "Ruotare per spostare"
#define UI_TEXT_WIZ_CH_FILAMENT3_IT "filamento su/giu"
#define UI_TEXT_CLICK_DONE_IT "Clicca quando fatto"
#define UI_TEXT_AUTOLEVEL_ONOFF_IT  "Autoliv.: %ll"
#define UI_TEXT_SERVOPOS_IT "Pos. servo: %oS"
#define UI_TEXT_IGNORE_M106_IT      "Ignora M106 cmd %Fi"
#define UI_TEXT_WIZ_REHEAT1_IT "Clicca per"
#define UI_TEXT_WIZ_REHEAT2_IT "riscaldare estrusori"
#define UI_TEXT_WIZ_WAITTEMP1_IT "Attendere che temp."
#define UI_TEXT_WIZ_WAITTEMP2_IT "di destinazione ..."
#define UI_TEXT_EXTRUDER_JAM_IT "Stoccaggio estrusore"
#define UI_TEXT_STANDBY_IT "Stand-by"
#define UI_TEXT_BED_COATING_IT "Rivestimento letto"
#define UI_TEXT_BED_COATING_SET1_IT "Rivestimento letto:"
#define UI_TEXT_BED_COATING_SET2_IT ""
#define UI_TEXT_NOCOATING_IT "Non rivestito"
#define UI_TEXT_BUILDTAK_IT "BuildTak"
#define UI_TEXT_KAPTON_IT "Kapton"
#define UI_TEXT_BLUETAPE_IT "Blu nastro adesivo"
#define UI_TEXT_PETTAPE_IT "Verde PET nastro"
#define UI_TEXT_GLUESTICK_IT "Colla stick"
#define UI_TEXT_CUSTOM_IT "Usanza"
#define UI_TEXT_COATING_CUSTOM_IT "Usanza:%oCmm"
#define UI_TEXT_LANGUAGE_IT "Lingua"

#if NUM_EXTRUDER > 2 || MIXING_EXTRUDER != 0
  #define UI_TEXT_MAINPAGE6_1_IT "\xa %ec/%Ec\xb0 X:%x0"
#else
  #define UI_TEXT_MAINPAGE6_1_IT "\xa %e0/%E0\xb0 X:%x0"
#endif // NUM_EXTRUDER
#if NUM_EXTRUDER == 2 && MIXING_EXTRUDER == 0
  #define UI_TEXT_MAINPAGE6_2_IT "\xa %e1/%E1\xb0 Y:%x1"
#elif HAVE_HEATED_BED
  #define UI_TEXT_MAINPAGE6_2_IT "\xe %eb/%Eb\xb0 Y:%x1"
#else
  #define UI_TEXT_MAINPAGE6_2_IT "             Y:%x1"
#endif
#if HAVE_HEATED_BED && NUM_EXTRUDER == 2 && MIXING_EXTRUDER == 0
 #define UI_TEXT_MAINPAGE6_3_IT "\xe %eb/%Eb\xb0 Z:%x2"
#elif FEATURE_DITTO_PRINTING
  #define UI_TEXT_MAINPAGE6_3_IT "Copie: %ed     Z:%x2"
#else
  #define UI_TEXT_MAINPAGE6_3_IT "Flusso:\xfd %of%%% Z:%x2"
#endif
#define UI_TEXT_MAINPAGE6_4_IT "Mul: %om%%% \xfd   E: %x4m"
#define UI_TEXT_MAINPAGE6_5_IT "Buf: %oB"
#define UI_TEXT_MAINPAGE6_6_IT "%os"
#define UI_TEXT_MAINPAGE_TEMP_BED_IT cTEMP "%ec/%Ec" cDEG "B%eB/%Eb" cDEG
#define UI_TEXT_MAINPAGE_BED_IT "B%eB/%Eb" cDEG
#define UI_TEXT_MAINPAGE_Z_BUF_IT "Z:%x2  Buf : %oB"
#define UI_TEXT_MAINPAGE_MUL_EUSAGE_IT "Mul: %om   E:%x4"
#define UI_TEXT_MAINPAGE_XY_IT "X:%x0 Y:%x1"
#define UI_TEXT_PRINT_TIME_VALUE_IT "%Ut"
#define UI_TEXT_PRINT_FILAMENT_VALUE_IT "%Uf m"
#define UI_TEXT_METER_PRINTED_IT "%Uf m " UI_TEXT_PRINTED_IT
#define UI_TEXT_STATUS_IT "%os"
#define UI_TEXT_EMPTY_IT ""
#define UI_TEXT_TEMP_SET_IT cTEMP "%ec/%Ec" cDEG
#define UI_TEXT_CURRENT_TEMP_IT cTEMP "%ec" cDEG
#define UI_TEXT_COATING_THICKNESS_IT " %oCmm"
#define UI_TEXT_EXTR3_TEMP_IT "Temp. 4 :%e3/%E3" cDEG "C"
#define UI_TEXT_EXTR4_TEMP_IT "Temp. 5 :%e4/%E4" cDEG "C"
#define UI_TEXT_EXTR5_TEMP_IT "Temp. 6 :%e5/%E5" cDEG "C"
#define UI_TEXT_EXTR3_OFF_IT "Estrusore 4 Spento"
#define UI_TEXT_EXTR4_OFF_IT "Estrusore 5 Spento"
#define UI_TEXT_EXTR5_OFF_IT "Estrusore 6 Spento"
#define UI_TEXT_EXTR3_SELECT_IT "%X3 Seleziona Estr. 4"
#define UI_TEXT_EXTR4_SELECT_IT "%X4 Seleziona Estr. 5"
#define UI_TEXT_EXTR5_SELECT_IT "%X5 Seleziona Estr. 6"
#define UI_TEXT_DITTO_0_IT "%D0 Nessuna Copia"
#define UI_TEXT_DITTO_1_IT "%D1 1 Copia"
#define UI_TEXT_DITTO_2_IT "%D2 2 Copie"
#define UI_TEXT_DITTO_3_IT "%D3 3 Copie"
#define UI_TEXT_ZPROBE_HEIGHT_IT "Altezza Z-Probe:%zh"



#define UI_TEXT_OFFSETS_IT "Set print offsets"
#define UI_TEXT_X_OFFSET_IT "Set X offset:%T0mm"
#define UI_TEXT_Y_OFFSET_IT "Set Y offset:%T1mm"
#define UI_TEXT_Z_OFFSET_IT "Set Z offset:%T2mm"


// Spanish translation

#define UI_TEXT_ON_ES               "On"
#define UI_TEXT_OFF_ES              "Off"
#define UI_TEXT_NA_ES               "N/A" // Output for not available
#define UI_TEXT_YES_ES              "Si"
#define UI_TEXT_NO_ES               "No"
#define UI_TEXT_PRINT_POS_ES        "Imprimiendo..."
#define UI_TEXT_PRINTING_ES         "Imprimiendo"
#define UI_TEXT_IDLE_ES             "Idle"
#define UI_TEXT_NOSDCARD_ES         "Sin tarjeta SD"
#define UI_TEXT_ERROR_ES            "**** ERROR ****"
#define UI_TEXT_BACK_ES             "Atras " cUP
#define UI_TEXT_QUICK_SETTINGS_ES   "Configuracion Rapida"
#define UI_TEXT_ERRORMSG_ES         "%oe"
#define UI_TEXT_CONFIGURATION_ES    "Configuracion"
#define UI_TEXT_POSITION_ES         "Posicion"
#define UI_TEXT_EXTRUDER_ES         "Extrusor"
#define UI_TEXT_SD_CARD_ES          "Tarjeta SD"
#define UI_TEXT_DEBUGGING_ES        "Debugging"
#define UI_TEXT_HOME_DELTA_ES       "Delta Home"
#define UI_TEXT_HOME_ALL_ES         "Todo Home"
#define UI_TEXT_HOME_X_ES           "X Home"
#define UI_TEXT_HOME_Y_ES           "Y Home"
#define UI_TEXT_HOME_Z_ES           "Z Home"
#define UI_TEXT_PREHEAT_PLA_ES      "Precalentar PLA"
#define UI_TEXT_PREHEAT_ABS_ES      "Precalentar ABS"
#define UI_TEXT_LIGHTS_ONOFF_ES     "Luces:%lo"
#define UI_TEXT_COOLDOWN_ES         "Enfriar"
#define UI_TEXT_SET_TO_ORIGIN_ES    "Fija a origen"
#define UI_TEXT_DISABLE_STEPPER_ES  "Desactiva motor"
#define UI_TEXT_X_POSITION_ES       "Posicion X"
#define UI_TEXT_X_POS_FAST_ES       "Pos. Rapida X"
#define UI_TEXT_Y_POSITION_ES       "Posicion Y"
#define UI_TEXT_Y_POS_FAST_ES       "Pos. Rapida Y"
#define UI_TEXT_Z_POSITION_ES       "Posicion Z"
#define UI_TEXT_Z_POS_FAST_ES       "Pos. Rapida Z"
#define UI_TEXT_E_POSITION_ES       "Extr. Posicion"
#define UI_TEXT_BED_TEMP_ES         "Temp.Cama:%eb/%Eb" cDEG "C"
#define UI_TEXT_EXTR0_TEMP_ES       "Temp. 1 :%e0/%E0" cDEG "C"
#define UI_TEXT_EXTR1_TEMP_ES       "Temp. 2 :%e1/%E1" cDEG "C"
#define UI_TEXT_EXTR2_TEMP_ES       "Temp. 3 :%e2/%E2" cDEG "C"
#define UI_TEXT_EXTR0_OFF_ES        "Extrusor 1 Off"
#define UI_TEXT_EXTR1_OFF_ES        "Extrusor 2 Off"
#define UI_TEXT_EXTR2_OFF_ES        "Extrusor 3 Off"
#define UI_TEXT_EXTR0_SELECT_ES     "%X0 Select Extr. 1"
#define UI_TEXT_EXTR1_SELECT_ES     "%X1 Select Extr. 2"
#define UI_TEXT_EXTR2_SELECT_ES     "%X2 Select Extr. 3"
#define UI_TEXT_EXTR_ORIGIN_ES      "Fija Originen"
#define UI_TEXT_PRINT_X_ES          "Print X:%ax"
#define UI_TEXT_PRINT_Y_ES          "Print Y:%ay"
#define UI_TEXT_PRINT_Z_ES          "Print Z:%az"
#define UI_TEXT_PRINT_Z_DELTA_ES    "Print:%az"
#define UI_TEXT_MOVE_X_ES           "Mueve X:%aX"
#define UI_TEXT_MOVE_Y_ES           "Mueve Y:%aY"
#define UI_TEXT_MOVE_Z_ES           "Mueve Z:%aZ"
#define UI_TEXT_MOVE_Z_DELTA_ES     "Mueve:%aZ"
#define UI_TEXT_JERK_ES             "Jerk:%aj"
#define UI_TEXT_ZJERK_ES            "Z-Jerk:%aJ"
#define UI_TEXT_ACCELERATION_ES     "Aceleracion"
#define UI_TEXT_STORE_TO_EEPROM_ES  "Almacena en EEPROM"
#define UI_TEXT_LOAD_EEPROM_ES      "Carga de EEPROM"
#define UI_TEXT_DBG_ECHO_ES         "Echo   :%do"
#define UI_TEXT_DBG_INFO_ES         "Info   :%di"
#define UI_TEXT_DBG_ERROR_ES        "Errors :%de"
#define UI_TEXT_DBG_DRYRUN_ES       "Ejecucion vacio:%dd"
#define UI_TEXT_OPS_OFF_ES          "%O0 OPS Off"
#define UI_TEXT_OPS_CLASSIC_ES      "%O1 OPS Classica"
#define UI_TEXT_OPS_FAST_ES         "%O2 OPS Rapida"
#define UI_TEXT_OPS_RETRACT_ES      "Retraccion :%Or"
#define UI_TEXT_OPS_BACKSLASH_ES    "Backsl. :%Ob"
#define UI_TEXT_OPS_MINDIST_ES      "Min.dist:%Od"
#define UI_TEXT_OPS_MOVE_AFTER_ES   "Move after:%Oa"
#define UI_TEXT_ANTI_OOZE_ES        "Anti Ooze"
#define UI_TEXT_PRINT_FILE_ES       "Imprimiendo fichero"
#define UI_TEXT_PAUSE_PRINT_ES      "Pausando impresion"
#define UI_TEXT_CONTINUE_PRINT_ES   "Continuando impresion"
#define UI_TEXT_UNMOUNT_CARD_ES     "Desmontando Tarjeta"
#define UI_TEXT_MOUNT_CARD_ES       "Montando Card"
#define UI_TEXT_DELETE_FILE_ES      "Borrando fichero"
#define UI_TEXT_FEEDRATE_ES         "Feedrate"
#define UI_TEXT_FEED_MAX_X_ES       "X Max:%fx"
#define UI_TEXT_FEED_MAX_Y_ES       "Y Max:%fy"
#define UI_TEXT_FEED_MAX_Z_ES       "Z Max:%fz"
#define UI_TEXT_FEED_MAX_Z_DELTA_ES "Max:%fz"
#define UI_TEXT_FEED_HOME_X_ES      "X Home:%fX"
#define UI_TEXT_FEED_HOME_Y_ES      "Y Home:%fY"
#define UI_TEXT_FEED_HOME_Z_ES      "Z Home:%fZ"
#define UI_TEXT_FEED_HOME_Z_DELTA_ES "Home:%fZ"
#define UI_TEXT_ACTION_XPOSITION4A_ES "X:%x0 mm"
#define UI_TEXT_ACTION_XPOSITION4B_ES "Fin Carrera Min:%sx"
#define UI_TEXT_ACTION_XPOSITION4C_ES "Max:%sX"
#define UI_TEXT_ACTION_XPOSITION4D_ES ""
#define UI_TEXT_ACTION_YPOSITION4A_ES "Y:%x1 mm"
#define UI_TEXT_ACTION_YPOSITION4B_ES "Fin Carrera Min:%sy"
#define UI_TEXT_ACTION_YPOSITION4C_ES "Max:%sY"
#define UI_TEXT_ACTION_YPOSITION4D_ES ""
#define UI_TEXT_ACTION_ZPOSITION4A_ES "Z:%x2 mm"
#define UI_TEXT_ACTION_ZPOSITION4B_ES "Fin Carrera Min:%sz"
#define UI_TEXT_ACTION_ZPOSITION4C_ES "Max:%sZ"
#define UI_TEXT_ACTION_ZPOSITION4D_ES ""
#define UI_TEXT_ACTION_XPOSITION_FAST4A_ES "X:%x0 mm"
#define UI_TEXT_ACTION_XPOSITION_FAST4B_ES "Fin Carrera Min:%sx"
#define UI_TEXT_ACTION_XPOSITION_FAST4C_ES "Max:%sX"
#define UI_TEXT_ACTION_XPOSITION_FAST4D_ES ""
#define UI_TEXT_ACTION_YPOSITION_FAST4A_ES "Y:%x1 mm"
#define UI_TEXT_ACTION_YPOSITION_FAST4B_ES "Fin Carrera Min:%sy"
#define UI_TEXT_ACTION_YPOSITION_FAST4C_ES "Max:%sY"
#define UI_TEXT_ACTION_YPOSITION_FAST4D_ES ""
#define UI_TEXT_ACTION_ZPOSITION_FAST4A_ES "Z:%x2 mm"
#define UI_TEXT_ACTION_ZPOSITION_FAST4B_ES "Fin Carrera Min:%sz"
#define UI_TEXT_ACTION_ZPOSITION_FAST4C_ES "Max:%sZ"
#define UI_TEXT_ACTION_ZPOSITION_FAST4D_ES ""
#define UI_TEXT_ACTION_EPOSITION_FAST2A_ES "E:%x3 mm"
#define UI_TEXT_ACTION_EPOSITION_FAST2B_ES "1 click = 1 mm"
#define UI_TEXT_ACTION_XPOSITION2A_ES "X:%x0 mm"
#define UI_TEXT_ACTION_XPOSITION2B_ES "Min:%sx Max:%sX"
#define UI_TEXT_ACTION_YPOSITION2A_ES "Y:%x1 mm"
#define UI_TEXT_ACTION_YPOSITION2B_ES "Min:%sy Max:%sY"
#define UI_TEXT_ACTION_ZPOSITION2A_ES "Z:%x2 mm"
#define UI_TEXT_ACTION_ZPOSITION2B_ES "Min:%sz Max:%sZ"
#define UI_TEXT_ACTION_XPOSITION_FAST2A_ES "X:%x0 mm"
#define UI_TEXT_ACTION_XPOSITION_FAST2B_ES "Min:%sx Max:%sX"
#define UI_TEXT_ACTION_YPOSITION_FAST2A_ES "Y:%x1 mm"
#define UI_TEXT_ACTION_YPOSITION_FAST2B_ES "Min:%sy Max:%sY"
#define UI_TEXT_ACTION_ZPOSITION_FAST2A_ES "Z:%x2 mm"
#define UI_TEXT_ACTION_ZPOSITION_FAST2B_ES "Min:%sz Max:%sZ"
#define UI_TEXT_FANSPEED_ES          "Velocida ventilador"
#define UI_TEXT_ACTION_FANSPEED_ES   "Vel. vent.:%Fs%%%"
#define UI_TEXT_FAN_OFF_ES           "Apaga ventilador"
#define UI_TEXT_FAN_25_ES            "Ventilador al 25%%%"
#define UI_TEXT_FAN_50_ES            "Ventilador al 50%%%"
#define UI_TEXT_FAN_75_ES            "Ventilador al 75%%%"
#define UI_TEXT_FAN_FULL_ES          "Ventilador al 100%%%"
#define UI_TEXT_STEPPER_INACTIVE_ES  "Motor Inactivo"
#define UI_TEXT_STEPPER_INACTIVE2A_ES "Dis. Despues: %is"
#define UI_TEXT_STEPPER_INACTIVE2B_ES "[min] 0=Off"
#define UI_TEXT_POWER_INACTIVE_ES    "Max. Inactivo"
#define UI_TEXT_POWER_INACTIVE2A_ES   "Dis. Despues: %ip"
#define UI_TEXT_POWER_INACTIVE2B_ES   "[min] 0=Off"
#define UI_TEXT_GENERAL_ES           "General"
#define UI_TEXT_BAUDRATE_ES          "Baudrate:%oc"
#define UI_TEXT_EXTR_STEPS_ES        "Pasos/MM:%Se"
#define UI_TEXT_EXTR_START_FEED_ES   "Start FR:%Xf"
#define UI_TEXT_EXTR_MAX_FEED_ES     "Max FR:%XF"
#define UI_TEXT_EXTR_ACCEL_ES        "Acel:%XA"
#define UI_TEXT_EXTR_WATCH_ES        "Tiempo Estab.:%Xw"
#define UI_TEXT_EXTR_ADVANCE_L_ES    "Advance lin:%Xl"
#define UI_TEXT_EXTR_ADVANCE_K_ES    "Advance quad:%Xa"
#define UI_TEXT_EXTR_MANAGER_ES      "Control:%Xh"
#define UI_TEXT_EXTR_PGAIN_ES        "PID P:%Xp"
#define UI_TEXT_EXTR_DEADTIME_ES     "Tiempo muerto:%Xp"
#define UI_TEXT_EXTR_DMAX_DT_ES      "PWM control:%XM"
#define UI_TEXT_EXTR_IGAIN_ES        "PID I:%Xi"
#define UI_TEXT_EXTR_DGAIN_ES        "PID D:%Xd"
#define UI_TEXT_EXTR_DMIN_ES         "Drive Min:%Xm"
#define UI_TEXT_EXTR_DMAX_ES         "Drive Max:%XM"
#define UI_TEXT_EXTR_PMAX_ES         "PID Max:%XD"
#define UI_TEXT_EXTR_XOFF_ES         "X-Offset:%Xx"
#define UI_TEXT_EXTR_YOFF_ES         "Y-Offset:%Xy"
#define UI_TEXT_STRING_HM_BANGBANG_ES "BangBang"
#define UI_TEXT_STRING_HM_PID_ES     "PID"
#define UI_TEXT_STRING_ACTION_ES     "Accion:%la"
#define UI_TEXT_HEATING_EXTRUDER_ES  "Calentando Extrusor"
#define UI_TEXT_HEATING_BED_ES       "Calentando Cama"
#define UI_TEXT_KILLED_ES            "Aborta"
#define UI_TEXT_STEPPER_DISABLED_ES  "Deshabilita motor"
#define UI_TEXT_EEPROM_STOREDA_ES     "Config."
#define UI_TEXT_EEPROM_STOREDB_ES     "almacenada en EEPROM"
#define UI_TEXT_EEPROM_LOADEDA_ES     "Config."
#define UI_TEXT_EEPROM_LOADEDB_ES     "cargada de EEPROM"
#define UI_TEXT_UPLOADING_ES         "Actualizando..."
#define UI_TEXT_PAGE_BUFFER_ES       "Buffer:%oB"
#define UI_TEXT_PAGE_EXTRUDER_ES     " E:%ec/%Ec" cDEG "C" cARROW "%oC"
#define UI_TEXT_PAGE_EXTRUDER1_ES     "E1:%e0/%E0" cDEG "C" cARROW "%o0"
#define UI_TEXT_PAGE_EXTRUDER2_ES     "E2:%e1/%E1" cDEG "C" cARROW "%o1"
#define UI_TEXT_PAGE_EXTRUDER3_ES     "E3:%e2/%E2" cDEG "C" cARROW "%o2"
#define UI_TEXT_PAGE_BED_ES          " B:%eb/%Eb" cDEG "C" cARROW "%ob"
#define UI_TEXT_SPEED_MULTIPLY_ES    "Mult. Velocidad.:%om%%%"
#define UI_TEXT_FLOW_MULTIPLY_ES     "Mult. Flujo:%of%%%"
#define UI_TEXT_SHOW_MEASUREMENT_ES  "Mostrar medicion"
#define UI_TEXT_RESET_MEASUREMENT_ES "Resetear medicion"
#define UI_TEXT_SET_MEASURED_ORIGIN_ES "Set Z=0"
#define UI_TEXT_ZCALIB_ES             "Z calib."
#define UI_TEXT_SET_P1_ES            "Set P1"
#define UI_TEXT_SET_P2_ES            "Set P2"
#define UI_TEXT_SET_P3_ES            "Set P3"
#define UI_TEXT_CALCULATE_LEVELING_ES "Calcula nivelacion"
#define UI_TEXT_LEVEL_ES             "Nivel delta"
#define UI_TEXT_EXTR_WAIT_RETRACT_TEMP_ES  "Esperando Temp.%XT" cDEG "C"
#define UI_TEXT_EXTR_WAIT_RETRACT_UNITS_ES "Esperando Unidad:%XUmm"
#define UI_TEXT_SD_REMOVED_ES       "Tarjeta SD retira"
#define UI_TEXT_SD_INSERTED_ES      "Tarjeta SD insertada"
#define UI_TEXT_PRINTER_READY_ES    "Impresora lista."
// Printtime output gets aggregated like <Days_5gisgits>UI_TEXT_PRINTTIME_DAYS<Hours>UI_TEXT_PRINTTIME_HOURS<Minutes>UI_TEXT_PRINTTIME_MINUTES
// ___88 days 12:45
#define UI_TEXT_PRINTTIME_DAYS_ES   " dias "
#define UI_TEXT_PRINTTIME_HOURS_ES  ":"
#define UI_TEXT_PRINTTIME_MINUTES_ES ""
#define UI_TEXT_PRINT_TIME_ES     "tiempo de impresion"
#define UI_TEXT_PRINT_FILAMENT_ES "Filamento impresa"
#define UI_TEXT_PRINTED_ES           "impreso"
#define UI_TEXT_POWER_ES            "Energie ATX on/off"
#define UI_TEXT_STRING_HM_DEADTIME_ES     "Tiempo muerto"
#define UI_TEXT_STRING_HM_SLOWBANG_ES     "SlowBang"
#define UI_TEXT_STOP_PRINT_ES "Detener impresion"
#define UI_TEXT_Z_BABYSTEPPING_ES "Z Babystep.:%oYmm"
#define UI_TEXT_CHANGE_FILAMENT_ES "Cambio filamento"
#define UI_TEXT_WIZ_CH_FILAMENT1_ES "Cambio filamento"
#define UI_TEXT_WIZ_CH_FILAMENT2_ES "Gire para mover"
#define UI_TEXT_WIZ_CH_FILAMENT3_ES "fil. arriba/abajo"
#define UI_TEXT_CLICK_DONE_ES "Clic cuando se hace"
#define UI_TEXT_AUTOLEVEL_ONOFF_ES  "Autolevel: %ll"
#define UI_TEXT_SERVOPOS_ES "Pos. servo: %oS"
#define UI_TEXT_IGNORE_M106_ES      "Ignorar M106 cmd %Fi"
#define UI_TEXT_WIZ_REHEAT1_ES "Haga clic para"
#define UI_TEXT_WIZ_REHEAT2_ES "recalentar extr."
#define UI_TEXT_WIZ_WAITTEMP1_ES "Espere a temp."
#define UI_TEXT_WIZ_WAITTEMP2_ES "objetivo ..."
#define UI_TEXT_EXTRUDER_JAM_ES "Atasco extrusora"
#define UI_TEXT_STANDBY_ES "Standby"
#define UI_TEXT_BED_COATING_ES "Recubrimiento cama"
#define UI_TEXT_BED_COATING_SET1_ES "Rec. cama ajustado a"
#define UI_TEXT_BED_COATING_SET2_ES ""
#define UI_TEXT_NOCOATING_ES "Sin recubrimiento"
#define UI_TEXT_BUILDTAK_ES "BuildTak"
#define UI_TEXT_KAPTON_ES "Kapton"
#define UI_TEXT_BLUETAPE_ES "Cinta adhesiva azul"
#define UI_TEXT_PETTAPE_ES "Verde PET cinta"
#define UI_TEXT_GLUESTICK_ES "Barra de pegamento"
#define UI_TEXT_CUSTOM_ES "Custom"
#define UI_TEXT_COATING_CUSTOM_ES "Custom:%oCmm"
#define UI_TEXT_LANGUAGE_ES "Idioma"

#if NUM_EXTRUDER > 2 || MIXING_EXTRUDER != 0
  #define UI_TEXT_MAINPAGE6_1_ES "\xa %ec/%Ec\xb0 X:%x0"
#else
  #define UI_TEXT_MAINPAGE6_1_ES "\xa %e0/%E0\xb0 X:%x0"
#endif // NUM_EXTRUDER
#if NUM_EXTRUDER == 2 && MIXING_EXTRUDER == 0
  #define UI_TEXT_MAINPAGE6_2_ES "\xa %e1/%E1\xb0 Y:%x1"
#elif HAVE_HEATED_BED
  #define UI_TEXT_MAINPAGE6_2_ES "\xe %eb/%Eb\xb0 Y:%x1"
#else
  #define UI_TEXT_MAINPAGE6_2_ES "             Y:%x1"
#endif
#if HAVE_HEATED_BED && NUM_EXTRUDER == 2 && MIXING_EXTRUDER == 0
 #define UI_TEXT_MAINPAGE6_3_ES "\xe %eb/%Eb\xb0 Z:%x2"
#elif FEATURE_DITTO_PRINTING
  #define UI_TEXT_MAINPAGE6_3_ES "Copias: %ed    Z:%x2"
#else
  #define UI_TEXT_MAINPAGE6_3_ES "Flujo:\xfd %of%%%  Z:%x2"
#endif
#define UI_TEXT_MAINPAGE6_4_ES "Mul: %om%%% \xfd   E: %x4m"
#define UI_TEXT_MAINPAGE6_5_ES "Buf: %oB"
#define UI_TEXT_MAINPAGE6_6_ES "%os"
#define UI_TEXT_MAINPAGE_TEMP_BED_ES cTEMP "%ec/%Ec" cDEG "B%eB/%Eb" cDEG
#define UI_TEXT_MAINPAGE_BED_ES "B%eB/%Eb" cDEG
#define UI_TEXT_MAINPAGE_Z_BUF_ES "Z:%x2  Buf : %oB"
#define UI_TEXT_MAINPAGE_MUL_EUSAGE_ES "Mul: %om   E:%x4"
#define UI_TEXT_MAINPAGE_XY_ES "X:%x0 Y:%x1"
#define UI_TEXT_PRINT_TIME_VALUE_ES "%Ut"
#define UI_TEXT_PRINT_FILAMENT_VALUE_ES "%Uf m"
#define UI_TEXT_METER_PRINTED_ES "%Uf m " UI_TEXT_PRINTED_ES
#define UI_TEXT_STATUS_ES "%os"
#define UI_TEXT_EMPTY_ES ""
#define UI_TEXT_TEMP_SET_ES cTEMP "%ec/%Ec" cDEG
#define UI_TEXT_CURRENT_TEMP_ES cTEMP "%ec" cDEG
#define UI_TEXT_COATING_THICKNESS_ES " %oCmm"
#define UI_TEXT_EXTR3_TEMP_ES "Temp. 4 :%e3/%E3" cDEG "C"
#define UI_TEXT_EXTR4_TEMP_ES "Temp. 5 :%e4/%E4" cDEG "C"
#define UI_TEXT_EXTR5_TEMP_ES "Temp. 6 :%e5/%E5" cDEG "C"
#define UI_TEXT_EXTR3_OFF_ES "Extrusor 4 Off"
#define UI_TEXT_EXTR4_OFF_ES "Extrusor 5 Off"
#define UI_TEXT_EXTR5_OFF_ES "Extrusor 6 Off"
#define UI_TEXT_EXTR3_SELECT_ES "%X3 Select Extr. 4"
#define UI_TEXT_EXTR4_SELECT_ES "%X4 Select Extr. 5"
#define UI_TEXT_EXTR5_SELECT_ES "%X5 Select Extr. 6"
#define UI_TEXT_DITTO_0_ES "%D0 No Hay Copias"
#define UI_TEXT_DITTO_1_ES "%D1 1 Copia"
#define UI_TEXT_DITTO_2_ES "%D2 2 Copias"
#define UI_TEXT_DITTO_3_ES "%D3 3 Copias"
#define UI_TEXT_ZPROBE_HEIGHT_ES "Altura Z-Probe:%zh"


#define UI_TEXT_OFFSETS_ES "Set print offsets"
#define UI_TEXT_X_OFFSET_ES "Set X offset:%T0mm"
#define UI_TEXT_Y_OFFSET_ES "Set Y offset:%T1mm"
#define UI_TEXT_Z_OFFSET_ES "Set Z offset:%T2mm"


// *************** Swedish translation ****************
// By Daniel Tedenljung 2013-08-21

#define UI_TEXT_ON_SE               "P" STR_uuml ""
#define UI_TEXT_OFF_SE              "Av"
#define UI_TEXT_NA_SE               "N/A" // Output for not available
#define UI_TEXT_YES_SE              "Ja"
#define UI_TEXT_NO_SE               "Nej"
#define UI_TEXT_PRINT_POS_SE        "Skriver ut..."
#define UI_TEXT_PRINTING_SE         "Skriver"
#define UI_TEXT_IDLE_SE             "Sysslol" STR_ouml "s"
#define UI_TEXT_NOSDCARD_SE         "Inget SD-kort"
#define UI_TEXT_ERROR_SE            "**** FEL ****"
#define UI_TEXT_BACK_SE             "Tillbaka " cUP
#define UI_TEXT_QUICK_SETTINGS_SE   "Inst" STR_auml "llnigar"
#define UI_TEXT_ERRORMSG_SE         "%oe"
#define UI_TEXT_CONFIGURATION_SE    "Konfiguration"
#define UI_TEXT_POSITION_SE         "Position"
#define UI_TEXT_EXTRUDER_SE         "Extruder"
#define UI_TEXT_SD_CARD_SE          "SD-kort"
#define UI_TEXT_DEBUGGING_SE        "Debugging"
#define UI_TEXT_HOME_DELTA_SE       "Hem delta"
#define UI_TEXT_HOME_ALL_SE         "K" STR_ouml "r hem alla"
#define UI_TEXT_HOME_X_SE           "K" STR_ouml "r hem X"
#define UI_TEXT_HOME_Y_SE           "K" STR_ouml "r hem Y"
#define UI_TEXT_HOME_Z_SE           "K" STR_ouml "r hem Z"
#define UI_TEXT_PREHEAT_PLA_SE      "F" STR_ouml "rv" STR_auml "rm f" STR_ouml "r PLA"
#define UI_TEXT_PREHEAT_ABS_SE      "F" STR_ouml "rv" STR_auml "rm f" STR_ouml "r ABS"
#define UI_TEXT_LIGHTS_ONOFF_SE     "Lights:%lo"
#define UI_TEXT_COOLDOWN_SE         "Kyl ner"
#define UI_TEXT_SET_TO_ORIGIN_SE    "S"  STR_auml "tt som origo"
#define UI_TEXT_DISABLE_STEPPER_SE  "St" STR_auml "ng av stegmotor"
#define UI_TEXT_X_POSITION_SE       "X-position"
#define UI_TEXT_X_POS_FAST_SE       "X-pos. snabb"
#define UI_TEXT_Y_POSITION_SE       "Y-position"
#define UI_TEXT_Y_POS_FAST_SE       "Y-pos. snabb"
#define UI_TEXT_Z_POSITION_SE       "Z-osition"
#define UI_TEXT_Z_POS_FAST_SE       "Z-pos. snabb"
#define UI_TEXT_E_POSITION_SE       "Extr.-position"
#define UI_TEXT_BED_TEMP_SE         "B" STR_auml "dd-temp:%eb/%Eb" cDEG "C"
#define UI_TEXT_EXTR0_TEMP_SE       "Temp. 1 :%e0/%E0" cDEG "C"
#define UI_TEXT_EXTR1_TEMP_SE       "Temp. 2 :%e1/%E1" cDEG "C"
#define UI_TEXT_EXTR2_TEMP_SE       "Temp. 3 :%e2/%E2" cDEG "C"
#define UI_TEXT_EXTR0_OFF_SE        "Extruder 1 av"
#define UI_TEXT_EXTR1_OFF_SE        "Extruder 2 av"
#define UI_TEXT_EXTR2_OFF_SE        "Extruder 3 av"
#define UI_TEXT_EXTR0_SELECT_SE     "%X0 V"STR_auml"lj Extr. 1"
#define UI_TEXT_EXTR1_SELECT_SE     "%X1 V"STR_auml"lj Extr. 2"
#define UI_TEXT_EXTR2_SELECT_SE     "%X2 V"STR_auml"lj Extr. 3"
#define UI_TEXT_EXTR_ORIGIN_SE      "S" STR_auml "tt origo"
#define UI_TEXT_PRINT_X_SE          "Skriv X:%ax"
#define UI_TEXT_PRINT_Y_SE          "Skriv Y:%ay"
#define UI_TEXT_PRINT_Z_SE          "Skriv Z:%az"
#define UI_TEXT_PRINT_Z_DELTA_SE    "Skriv:%az"
#define UI_TEXT_MOVE_X_SE           "Transp. X:%aX"
#define UI_TEXT_MOVE_Y_SE           "Transp. Y:%aY"
#define UI_TEXT_MOVE_Z_SE           "Transp. Z:%aZ"
#define UI_TEXT_MOVE_Z_DELTA_SE     "Transp.:%aZ"
#define UI_TEXT_JERK_SE             "Ryck: %aj"
#define UI_TEXT_ZJERK_SE            "Z-ryck: %aJ"
#define UI_TEXT_ACCELERATION_SE     "Acceleration"
#define UI_TEXT_STORE_TO_EEPROM_SE  "Spara till EEPROM"
#define UI_TEXT_LOAD_EEPROM_SE      "Ladda f. EEPROM"
#define UI_TEXT_DBG_ECHO_SE         "Eko:    %do"
#define UI_TEXT_DBG_INFO_SE         "Info:   %di"
#define UI_TEXT_DBG_ERROR_SE        "Errors: %de"
#define UI_TEXT_DBG_DRYRUN_SE       "Torrk" STR_ouml "r:%dd"
#define UI_TEXT_OPS_OFF_SE          "%O1 OPS av"
#define UI_TEXT_OPS_CLASSIC_SE      "%O2 OPS klassisk"
#define UI_TEXT_OPS_FAST_SE         "%O3 OPS snabb"
#define UI_TEXT_OPS_RETRACT_SE      "Backa: %Or"
#define UI_TEXT_OPS_BACKSLASH_SE    "Backsl. :%Ob"
#define UI_TEXT_OPS_MINDIST_SE      "Min.dist: %Od"
#define UI_TEXT_OPS_MOVE_AFTER_SE   "Flytta efter:%Oa"
#define UI_TEXT_ANTI_OOZE_SE        "Antikladd"
#define UI_TEXT_PRINT_FILE_SE       "Skriv ut fil"
#define UI_TEXT_PAUSE_PRINT_SE      "Pausa utskrift"
#define UI_TEXT_CONTINUE_PRINT_SE   "Forts" STR_auml "tt utskrift"
#define UI_TEXT_UNMOUNT_CARD_SE     "Mata ut kort"
#define UI_TEXT_MOUNT_CARD_SE       "Anslut kort"
#define UI_TEXT_DELETE_FILE_SE      "Radera fil"
#define UI_TEXT_FEEDRATE_SE         "Matning"
#define UI_TEXT_FEED_MAX_X_SE       "Max X:%fx"
#define UI_TEXT_FEED_MAX_Y_SE       "Max Y:%fy"
#define UI_TEXT_FEED_MAX_Z_SE       "Max Z:%fz"
#define UI_TEXT_FEED_MAX_Z_DELTA_SE "Max:%fz"
#define UI_TEXT_FEED_HOME_X_SE      "Ref X:%fX"
#define UI_TEXT_FEED_HOME_Y_SE      "Ref Y:%fY"
#define UI_TEXT_FEED_HOME_Z_SE      "Ref Z:%fZ"
#define UI_TEXT_FEED_HOME_Z_DELTA_SE "Ref:%fZ"
#define UI_TEXT_ACTION_XPOSITION4A_SE "X:%x0 mm"
#define UI_TEXT_ACTION_XPOSITION4B_SE "Min " STR_auml "ndl" STR_auml "ge:%sx"
#define UI_TEXT_ACTION_XPOSITION4C_SE "Max " STR_auml "ndl" STR_auml "ge:%sX"
#define UI_TEXT_ACTION_XPOSITION4D_SE ""
#define UI_TEXT_ACTION_YPOSITION4A_SE "Y:%x1 mm"
#define UI_TEXT_ACTION_YPOSITION4B_SE "Min " STR_auml "ndl" STR_auml "ge:%sy"
#define UI_TEXT_ACTION_YPOSITION4C_SE "Max " STR_auml "ndl" STR_auml "ge:%sY"
#define UI_TEXT_ACTION_YPOSITION4D_SE ""
#define UI_TEXT_ACTION_ZPOSITION4A_SE "Z:%x2 mm"
#define UI_TEXT_ACTION_ZPOSITION4B_SE "Min " STR_auml "ndl" STR_auml "ge:%sz"
#define UI_TEXT_ACTION_ZPOSITION4C_SE "Max " STR_auml "ndl" STR_auml "ge:%sZ"
#define UI_TEXT_ACTION_ZPOSITION4D_SE ""
#define UI_TEXT_ACTION_XPOSITION_FAST4A_SE "X:%x0 mm"
#define UI_TEXT_ACTION_XPOSITION_FAST4B_SE "Min " STR_auml "ndl" STR_auml "ge:%sx"
#define UI_TEXT_ACTION_XPOSITION_FAST4C_SE "Max " STR_auml "ndl" STR_auml "ge:%sX"
#define UI_TEXT_ACTION_XPOSITION_FAST4D_SE ""
#define UI_TEXT_ACTION_YPOSITION_FAST4A_SE "Y:%x1 mm"
#define UI_TEXT_ACTION_YPOSITION_FAST4B_SE "Min " STR_auml "ndl" STR_auml "ge:%sy"
#define UI_TEXT_ACTION_YPOSITION_FAST4C_SE "Max " STR_auml "ndl" STR_auml "ge:%sY"
#define UI_TEXT_ACTION_YPOSITION_FAST4D_SE ""
#define UI_TEXT_ACTION_ZPOSITION_FAST4A_SE "Z:%x2 mm"
#define UI_TEXT_ACTION_ZPOSITION_FAST4B_SE "Min " STR_auml "ndl" STR_auml "ge:%sz"
#define UI_TEXT_ACTION_ZPOSITION_FAST4C_SE "Max " STR_auml "ndl" STR_auml "ge:%sZ"
#define UI_TEXT_ACTION_ZPOSITION_FAST4D_SE ""
#define UI_TEXT_ACTION_EPOSITION_FAST2A_SE "E:%x3 mm"
#define UI_TEXT_ACTION_EPOSITION_FAST2B_SE "1 click = 1 mm"
#define UI_TEXT_ACTION_XPOSITION2A_SE "X:%x0 mm"
#define UI_TEXT_ACTION_XPOSITION2B_SE "Min:%sx Max:%sX"
#define UI_TEXT_ACTION_YPOSITION2A_SE "Y:%x1 mm"
#define UI_TEXT_ACTION_YPOSITION2B_SE "Min:%sy Max:%sY"
#define UI_TEXT_ACTION_ZPOSITION2A_SE "Z:%x2 mm"
#define UI_TEXT_ACTION_ZPOSITION2B_SE "Min:%sz Max:%sZ"
#define UI_TEXT_ACTION_XPOSITION_FAST2A_SE "X:%x0 mm"
#define UI_TEXT_ACTION_XPOSITION_FAST2B_SE "Min:%sx Max:%sX"
#define UI_TEXT_ACTION_YPOSITION_FAST2A_SE "Y:%x1 mm"
#define UI_TEXT_ACTION_YPOSITION_FAST2B_SE "Min:%sy Max:%sY"
#define UI_TEXT_ACTION_ZPOSITION_FAST2A_SE "Z:%x2 mm"
#define UI_TEXT_ACTION_ZPOSITION_FAST2B_SE "Min:%sz Max:%sZ"
#define UI_TEXT_FANSPEED_SE          "Fl" STR_auml "kt hast."
#define UI_TEXT_ACTION_FANSPEED_SE   "Fl" STR_auml "kt hast.:%Fs%%%"
#define UI_TEXT_FAN_OFF_SE           "St" STR_auml "ng av fl" STR_auml "kt"
#define UI_TEXT_FAN_25_SE            "Fl" STR_auml "kt 25%%%"
#define UI_TEXT_FAN_50_SE            "Fl" STR_auml "kt 50%%%"
#define UI_TEXT_FAN_75_SE            "Fl" STR_auml "kt 75%%%"
#define UI_TEXT_FAN_FULL_SE          "Full fl" STR_auml "kt"
#define UI_TEXT_STEPPER_INACTIVE_SE  "Stegmotorer inakt."
#define UI_TEXT_STEPPER_INACTIVE2A_SE "Inakt. efter: %is"
#define UI_TEXT_STEPPER_INACTIVE2B_SE "[min] 0=Off"
#define UI_TEXT_POWER_INACTIVE_SE    "Max. inaktiv"
#define UI_TEXT_POWER_INACTIVE2A_SE   "Inakt. efter: %ip"
#define UI_TEXT_POWER_INACTIVE2B_SE   "[min] 0=Off"
#define UI_TEXT_GENERAL_SE           "Generella"
#define UI_TEXT_BAUDRATE_SE          "Baudrate:%oc"
#define UI_TEXT_EXTR_STEPS_SE        "Steg/MM:%Se"
#define UI_TEXT_EXTR_START_FEED_SE   "Start FR:%Xf"
#define UI_TEXT_EXTR_MAX_FEED_SE     "Max FR:%XF"
#define UI_TEXT_EXTR_ACCEL_SE        "Accel:%XA"
#define UI_TEXT_EXTR_WATCH_SE        "Stab. tid:%Xw"
#define UI_TEXT_EXTR_ADVANCE_L_SE    "Advance lin:%Xl"
#define UI_TEXT_EXTR_ADVANCE_K_SE    "Advance quad:%Xa"
#define UI_TEXT_EXTR_MANAGER_SE      "Control:%Xh"
#define UI_TEXT_EXTR_PGAIN_SE        "PID P:%Xp"
#define UI_TEXT_EXTR_DEADTIME_SE     "D" STR_ouml "dtid:%Xp"
#define UI_TEXT_EXTR_DMAX_DT_SE      "Kontroll PWM:%XM"
#define UI_TEXT_EXTR_IGAIN_SE        "PID I:%Xi"
#define UI_TEXT_EXTR_DGAIN_SE        "PID D:%Xd"
#define UI_TEXT_EXTR_DMIN_SE         "Drive min:%Xm"
#define UI_TEXT_EXTR_DMAX_SE         "Drive max:%XM"
#define UI_TEXT_EXTR_PMAX_SE         "PID max:%XD"
#define UI_TEXT_EXTR_XOFF_SE         "X-offset:%Xx"
#define UI_TEXT_EXTR_YOFF_SE         "Y-offset:%Xy"
#define UI_TEXT_STRING_HM_BANGBANG_SE "BangBang"
#define UI_TEXT_STRING_HM_PID_SE     "PID"
#define UI_TEXT_STRING_ACTION_SE     "Aktion:%la"
#define UI_TEXT_HEATING_EXTRUDER_SE  "V" STR_auml "rmer Extruder"
#define UI_TEXT_HEATING_BED_SE       "V" STR_auml "rmer B" STR_auml "dd"
#define UI_TEXT_KILLED_SE            "D" STR_ouml "dad"
#define UI_TEXT_STEPPER_DISABLED_SE  "Stegmotorer av"
#define UI_TEXT_EEPROM_STOREDA_SE     "Konfiguration"
#define UI_TEXT_EEPROM_STOREDB_SE     "sparad i EEPROM"
#define UI_TEXT_EEPROM_LOADEDA_SE     "Konfiguration"
#define UI_TEXT_EEPROM_LOADEDB_SE     "laddat fr. EEPROM"
#define UI_TEXT_UPLOADING_SE         "Uppladdning..."
#define UI_TEXT_PAGE_BUFFER_SE       "Buffer:%oB"
#define UI_TEXT_PAGE_EXTRUDER_SE     " E:%ec/%Ec" cDEG "C" cARROW "%oC"
#define UI_TEXT_PAGE_EXTRUDER1_SE     "E1:%e0/%E0" cDEG "C" cARROW "%o0"
#define UI_TEXT_PAGE_EXTRUDER2_SE     "E2:%e1/%E1" cDEG "C" cARROW "%o1"
#define UI_TEXT_PAGE_EXTRUDER3_SE     "E3:%e2/%E2" cDEG "C" cARROW "%o2"
#define UI_TEXT_PAGE_BED_SE          " B:%eb/%Eb" cDEG "C" cARROW "%ob"
#define UI_TEXT_SPEED_MULTIPLY_SE    "Hast. Mul.:%om%%%"
#define UI_TEXT_FLOW_MULTIPLY_SE     "Fl" STR_ouml "de Mul.:%of%%%"
#define UI_TEXT_SHOW_MEASUREMENT_SE  "Visa m" STR_auml "tning"
#define UI_TEXT_RESET_MEASUREMENT_SE "Aterst" STR_auml "ll m" STR_auml "tning"
#define UI_TEXT_SET_MEASURED_ORIGIN_SE "St" STR_auml "ll Z=0"
#define UI_TEXT_ZCALIB_SE             "Z kalib."
#define UI_TEXT_SET_P1_SE            "St" STR_auml "ll P1"
#define UI_TEXT_SET_P2_SE            "St" STR_auml "ll  P2"
#define UI_TEXT_SET_P3_SE            "Set P3"
#define UI_TEXT_CALCULATE_LEVELING_SE "ber" STR_auml "kna nivellering"
#define UI_TEXT_LEVEL_SE             "Niva delta"
#define UI_TEXT_EXTR_WAIT_RETRACT_TEMP_SE  "Inv" STR_auml "nta temp.%XT" cDEG "C"
#define UI_TEXT_EXTR_WAIT_RETRACT_UNITS_SE "Inv" STR_auml "nta pos:%XUmm"
#define UI_TEXT_SD_REMOVED_SE       "SD-kort tas bort"
#define UI_TEXT_SD_INSERTED_SE      "SD-kort isatt"
#define UI_TEXT_PRINTER_READY_SE    "Utskrift klar."
// Printtime output gets aggregated like <Days_5gisgits>UI_TEXT_PRINTTIME_DAYS<Hours>UI_TEXT_PRINTTIME_HOURS<Minutes>UI_TEXT_PRINTTIME_MINUTES
// ___88 days 12:45
#define UI_TEXT_PRINTTIME_DAYS_SE   " dagar "
#define UI_TEXT_PRINTTIME_HOURS_SE  ":"
#define UI_TEXT_PRINTTIME_MINUTES_SE ""
#define UI_TEXT_PRINT_TIME_SE     "Tryckningstid"
#define UI_TEXT_PRINT_FILAMENT_SE "Filament tryckt"
#define UI_TEXT_PRINTED_SE           "tryckt"
#define UI_TEXT_POWER_SE            "ATX str" STR_ouml "m p" STR_uuml "/av"
#define UI_TEXT_STRING_HM_DEADTIME_SE     "D" STR_ouml "dtid"
#define UI_TEXT_STRING_HM_SLOWBANG_SE     "SlowBang"
#define UI_TEXT_STOP_PRINT_SE "Stopp trycket"
#define UI_TEXT_Z_BABYSTEPPING_SE "Z babystep.:%oYmm"
#define UI_TEXT_CHANGE_FILAMENT_SE "" STR_Auml "ndra filamentet"
#define UI_TEXT_WIZ_CH_FILAMENT1_SE "" STR_Auml "ndra filamentet"
#define UI_TEXT_WIZ_CH_FILAMENT2_SE "Rotera att flytta"
#define UI_TEXT_WIZ_CH_FILAMENT3_SE "filamentet upp/ner"
#define UI_TEXT_CLICK_DONE_SE "Klicka n" STR_auml "r du " STR_auml "r klar"
#define UI_TEXT_AUTOLEVEL_ONOFF_SE  "Autolevel: %ll"
#define UI_TEXT_SERVOPOS_SE "Servol" STR_auml "ge: %oS"
#define UI_TEXT_IGNORE_M106_SE      "Ignorera M106 %Fi"
#define UI_TEXT_WIZ_REHEAT1_SE "Klicka f" STR_ouml "r att"
#define UI_TEXT_WIZ_REHEAT2_SE "v" STR_auml "rma extrudrar."
#define UI_TEXT_WIZ_WAITTEMP1_SE "V" STR_auml "nta pa"
#define UI_TEXT_WIZ_WAITTEMP2_SE "maltemperaturer ..."
#define UI_TEXT_EXTRUDER_JAM_SE "Extruder tr" STR_auml "ngsel"
#define UI_TEXT_STANDBY_SE "Standby"
#define UI_TEXT_BED_COATING_SE "B" STR_auml "ddbel" STR_auml "ggning"
#define UI_TEXT_BED_COATING_SET1_SE "B" STR_auml "ddbel" STR_auml "ggning:"
#define UI_TEXT_BED_COATING_SET2_SE ""
#define UI_TEXT_NOCOATING_SE "Ingen bel" STR_auml "ggning"
#define UI_TEXT_BUILDTAK_SE "BuildTak"
#define UI_TEXT_KAPTON_SE "Kapton"
#define UI_TEXT_BLUETAPE_SE "Bla maskeringstejp"
#define UI_TEXT_PETTAPE_SE "Gr" STR_ouml "n PET band"
#define UI_TEXT_GLUESTICK_SE "Limstift"
#define UI_TEXT_CUSTOM_SE "Anpassad"
#define UI_TEXT_COATING_CUSTOM_SE "Anpassad:%oCmm"
#define UI_TEXT_LANGUAGE_SE "Sprak"

#if NUM_EXTRUDER > 2 || MIXING_EXTRUDER != 0
  #define UI_TEXT_MAINPAGE6_1_SE "\xa %ec/%Ec\xb0 X:%x0"
#else
  #define UI_TEXT_MAINPAGE6_1_SE "\xa %e0/%E0\xb0 X:%x0"
#endif // NUM_EXTRUDER
#if NUM_EXTRUDER == 2 && MIXING_EXTRUDER == 0
  #define UI_TEXT_MAINPAGE6_2_SE "\xa %e1/%E1\xb0 Y:%x1"
#elif HAVE_HEATED_BED
  #define UI_TEXT_MAINPAGE6_2_SE "\xe %eb/%Eb\xb0 Y:%x1"
#else
  #define UI_TEXT_MAINPAGE6_2_SE "             Y:%x1"
#endif
#if HAVE_HEATED_BED && NUM_EXTRUDER == 2 && MIXING_EXTRUDER == 0
 #define UI_TEXT_MAINPAGE6_3_SE "\xe %eb/%Eb\xb0 Z:%x2"
#elif FEATURE_DITTO_PRINTING
  #define UI_TEXT_MAINPAGE6_3_SE "Kopior: %ed    Z:%x2"
#else
  #define UI_TEXT_MAINPAGE6_3_SE "Fl" STR_ouml "de:\xfd %of%%%  Z:%x2"
#endif
#define UI_TEXT_MAINPAGE6_4_SE "Mul: %om%%% \xfd   E: %x4m"
#define UI_TEXT_MAINPAGE6_5_SE "Buf: %oB"
#define UI_TEXT_MAINPAGE6_6_SE "%os"
#define UI_TEXT_MAINPAGE_TEMP_BED_SE cTEMP "%ec/%Ec" cDEG "B%eB/%Eb" cDEG
#define UI_TEXT_MAINPAGE_BED_SE "B%eB/%Eb" cDEG
#define UI_TEXT_MAINPAGE_Z_BUF_SE "Z:%x2  Buf : %oB"
#define UI_TEXT_MAINPAGE_MUL_EUSAGE_SE "Mul: %om   E:%x4"
#define UI_TEXT_MAINPAGE_XY_SE "X:%x0 Y:%x1"
#define UI_TEXT_PRINT_TIME_VALUE_SE "%Ut"
#define UI_TEXT_PRINT_FILAMENT_VALUE_SE "%Uf m"
#define UI_TEXT_METER_PRINTED_SE "%Uf m " UI_TEXT_PRINTED_SE
#define UI_TEXT_STATUS_SE "%os"
#define UI_TEXT_EMPTY_SE ""
#define UI_TEXT_TEMP_SET_SE cTEMP "%ec/%Ec" cDEG
#define UI_TEXT_CURRENT_TEMP_SE cTEMP "%ec" cDEG
#define UI_TEXT_COATING_THICKNESS_SE " %oCmm"
#define UI_TEXT_EXTR3_TEMP_SE "Temp. 4 :%e3/%E3" cDEG "C"
#define UI_TEXT_EXTR4_TEMP_SE "Temp. 5 :%e4/%E4" cDEG "C"
#define UI_TEXT_EXTR5_TEMP_SE "Temp. 6 :%e5/%E5" cDEG "C"
#define UI_TEXT_EXTR3_OFF_SE "Extruder 4 av"
#define UI_TEXT_EXTR4_OFF_SE "Extruder 5 av"
#define UI_TEXT_EXTR5_OFF_SE "Extruder 6 av"
#define UI_TEXT_EXTR3_SELECT_SE "%X3 V"STR_auml"lj Extr. 4"
#define UI_TEXT_EXTR4_SELECT_SE "%X4 V"STR_auml"lj Extr. 5"
#define UI_TEXT_EXTR5_SELECT_SE "%X5 V"STR_auml"lj Extr. 6"
#define UI_TEXT_DITTO_0_SE "%D0 Inga Kopior"
#define UI_TEXT_DITTO_1_SE "%D1 1 Kopia"
#define UI_TEXT_DITTO_2_SE "%D2 2 Kopior"
#define UI_TEXT_DITTO_3_SE "%D3 3 Kopior"
#define UI_TEXT_ZPROBE_HEIGHT_SE "Z-probh"STR_ouml"jden:%zh"



#define UI_TEXT_OFFSETS_SE "Set print offsets"
#define UI_TEXT_X_OFFSET_SE "Set X offset:%T0mm"
#define UI_TEXT_Y_OFFSET_SE "Set Y offset:%T1mm"
#define UI_TEXT_Z_OFFSET_SE "Set Z offset:%T2mm"


// *************** French translation ****************
// ***************      By Doudou     ****************

#define UI_TEXT_ON_FR               "On"
#define UI_TEXT_OFF_FR              "Off"
#define UI_TEXT_NA_FR               "N/A" // Output for not available
#define UI_TEXT_YES_FR              "Oui"
#define UI_TEXT_NO_FR               "Non"
#define UI_TEXT_PRINT_POS_FR        "Impression..."
#define UI_TEXT_PRINTING_FR         "Impression"
#define UI_TEXT_IDLE_FR             "Au Repos"
#define UI_TEXT_NOSDCARD_FR         "Pas de Carte SD"
#define UI_TEXT_ERROR_FR            "**** ERREUR ****"
#define UI_TEXT_BACK_FR             "Retour \001"
#define UI_TEXT_QUICK_SETTINGS_FR   "Reglages Rapides"
#define UI_TEXT_ERRORMSG_FR         "%oe"
#define UI_TEXT_CONFIGURATION_FR    "Configuration"
#define UI_TEXT_POSITION_FR         "Position"
#define UI_TEXT_EXTRUDER_FR         "Extrudeuse"
#define UI_TEXT_SD_CARD_FR          "Carte SD"
#define UI_TEXT_DEBUGGING_FR        "Deboguer"
#define UI_TEXT_HOME_DELTA_FR       "Accueil Delta"
#define UI_TEXT_HOME_ALL_FR         "Accueil Tout"
#define UI_TEXT_HOME_X_FR           "Accueil X"
#define UI_TEXT_HOME_Y_FR           "Accueil Y"
#define UI_TEXT_HOME_Z_FR           "Accueil Z"
#define UI_TEXT_PREHEAT_PLA_FR      "Prechauf. PLA"
#define UI_TEXT_PREHEAT_ABS_FR      "Prechauf. ABS"
#define UI_TEXT_LIGHTS_ONOFF_FR     "Eclairage :%lo"
#define UI_TEXT_COOLDOWN_FR         "Refroidir"
#define UI_TEXT_SET_TO_ORIGIN_FR    "Reglez sur Origine"
#define UI_TEXT_DISABLE_STEPPER_FR  "Desactiv. Moteurs"
#define UI_TEXT_X_POSITION_FR       "Position X"
#define UI_TEXT_X_POS_FAST_FR       "Pos. Rapide X"
#define UI_TEXT_Y_POSITION_FR       "Position Y"
#define UI_TEXT_Y_POS_FAST_FR       "Pos. Rapide Y"
#define UI_TEXT_Z_POSITION_FR       "Position Z"
#define UI_TEXT_Z_POS_FAST_FR       "Pos. Rapide Z"
#define UI_TEXT_E_POSITION_FR       "Position Extr."
#define UI_TEXT_BED_TEMP_FR         "Lit Temp:%eb/%Eb\002C"
#define UI_TEXT_EXTR0_TEMP_FR       "Temp. 1 :%e0/%E0\002C"
#define UI_TEXT_EXTR1_TEMP_FR       "Temp. 2 :%e1/%E1\002C"
#define UI_TEXT_EXTR2_TEMP_FR       "Temp. 2 :%e2/%E2\002C"
#define UI_TEXT_EXTR0_OFF_FR        "Extrudeuse 1 Off"
#define UI_TEXT_EXTR1_OFF_FR        "Extrudeuse 2 Off"
#define UI_TEXT_EXTR2_OFF_FR        "Extrudeuse 3 Off"
#define UI_TEXT_EXTR0_SELECT_FR     "%X0 Select. Extr. 1"
#define UI_TEXT_EXTR1_SELECT_FR     "%X1 Select. Extr. 2"
#define UI_TEXT_EXTR2_SELECT_FR     "%X1 Select. Extr. 3"
#define UI_TEXT_EXTR_ORIGIN_FR      "Set Origin"
#define UI_TEXT_PRINT_X_FR          "Imprim. X:%ax"
#define UI_TEXT_PRINT_Y_FR          "Imprim. Y:%ay"
#define UI_TEXT_PRINT_Z_FR          "Imprim. Z:%az"
#define UI_TEXT_PRINT_Z_DELTA_FR    "Imprim.:%az"
#define UI_TEXT_MOVE_X_FR           "Deplac. X:%aX"
#define UI_TEXT_MOVE_Y_FR           "Deplac. Y:%aY"
#define UI_TEXT_MOVE_Z_FR           "Deplac. Z:%aZ"
#define UI_TEXT_MOVE_Z_DELTA_FR     "Deplac.:%aZ"
#define UI_TEXT_JERK_FR             "Jerk:%aj"
#define UI_TEXT_ZJERK_FR            "Z-Jerk:%aJ"
#define UI_TEXT_ACCELERATION_FR     "Acceleration"
#define UI_TEXT_STORE_TO_EEPROM_FR  "Stock. Dans EEPROM"
#define UI_TEXT_LOAD_EEPROM_FR      "Charg. f. EEPROM"
#define UI_TEXT_DBG_ECHO_FR         "Echo   :%do"
#define UI_TEXT_DBG_INFO_FR         "Info   :%di"
#define UI_TEXT_DBG_ERROR_FR        "Erreurs :%de"
#define UI_TEXT_DBG_DRYRUN_FR       "Fonct. a Vide:%dd"
#define UI_TEXT_OPS_OFF_FR          "%O0 OPS Off"
#define UI_TEXT_OPS_CLASSIC_FR      "%O1 OPS Classiq."
#define UI_TEXT_OPS_FAST_FR         "%O2 OPS Rapide"
#define UI_TEXT_OPS_RETRACT_FR      "Retract. :%Or"
#define UI_TEXT_OPS_BACKSLASH_FR    "Backsl. :%Ob"
#define UI_TEXT_OPS_MINDIST_FR      "Min.dist:%Od"
#define UI_TEXT_OPS_MOVE_AFTER_FR   "DÃ©plac. Apres:%Oa"
#define UI_TEXT_ANTI_OOZE_FR        "Anti Ooze"
#define UI_TEXT_PRINT_FILE_FR       "Imprim. fichier"
#define UI_TEXT_PAUSE_PRINT_FR      "Pause Impress."
#define UI_TEXT_CONTINUE_PRINT_FR   "Continuer Impress."
#define UI_TEXT_UNMOUNT_CARD_FR     "Retirer Carte"
#define UI_TEXT_MOUNT_CARD_FR       "Inserer Carte"
#define UI_TEXT_DELETE_FILE_FR      "Supp. fichier"
#define UI_TEXT_FEEDRATE_FR         "Avance"
#define UI_TEXT_FEED_MAX_X_FR       "Max X:%fx"
#define UI_TEXT_FEED_MAX_Y_FR       "Max Y:%fy"
#define UI_TEXT_FEED_MAX_Z_FR       "Max Z:%fz"
#define UI_TEXT_FEED_MAX_Z_DELTA_FR "Max:%fz"
#define UI_TEXT_FEED_HOME_X_FR      "Accueil X:%fX"
#define UI_TEXT_FEED_HOME_Y_FR      "Accueil Y:%fY"
#define UI_TEXT_FEED_HOME_Z_FR      "Accueil Z:%fZ"
#define UI_TEXT_FEED_HOME_Z_DELTA_FR "Accueil:%fZ"
#define UI_TEXT_ACTION_XPOSITION4A_FR "X:%x0 mm"
#define UI_TEXT_ACTION_XPOSITION4B_FR "Min Butee:%sx"
#define UI_TEXT_ACTION_XPOSITION4C_FR "Max Butee:%sX"
#define UI_TEXT_ACTION_XPOSITION4D_FR ""
#define UI_TEXT_ACTION_YPOSITION4A_FR "Y:%x1 mm"
#define UI_TEXT_ACTION_YPOSITION4B_FR "Min Butee:%sy"
#define UI_TEXT_ACTION_YPOSITION4C_FR "Max Butee:%sY"
#define UI_TEXT_ACTION_YPOSITION4D_FR ""
#define UI_TEXT_ACTION_ZPOSITION4A_FR "Z:%x2 mm"
#define UI_TEXT_ACTION_ZPOSITION4B_FR "Min Butee:%sz"
#define UI_TEXT_ACTION_ZPOSITION4C_FR "Max Butee:%sZ"
#define UI_TEXT_ACTION_ZPOSITION4D_FR ""
#define UI_TEXT_ACTION_XPOSITION_FAST4A_FR "X:%x0 mm"
#define UI_TEXT_ACTION_XPOSITION_FAST4B_FR "Min Butee:%sx"
#define UI_TEXT_ACTION_XPOSITION_FAST4C_FR "Max Butee:%sX"
#define UI_TEXT_ACTION_XPOSITION_FAST4D_FR ""
#define UI_TEXT_ACTION_YPOSITION_FAST4A_FR "Y:%x1 mm"
#define UI_TEXT_ACTION_YPOSITION_FAST4B_FR "Min Butee:%sy"
#define UI_TEXT_ACTION_YPOSITION_FAST4C_FR "Max Butee:%sY"
#define UI_TEXT_ACTION_YPOSITION_FAST4D_FR ""
#define UI_TEXT_ACTION_ZPOSITION_FAST4A_FR "Z:%x2 mm"
#define UI_TEXT_ACTION_ZPOSITION_FAST4B_FR "Min Butee:%sz"
#define UI_TEXT_ACTION_ZPOSITION_FAST4C_FR "Max Butee:%sZ"
#define UI_TEXT_ACTION_ZPOSITION_FAST4D_FR ""
#define UI_TEXT_ACTION_EPOSITION_FAST2A_FR "E:%x3 mm"
#define UI_TEXT_ACTION_EPOSITION_FAST2B_FR "1 clic = 1 mm"
#define UI_TEXT_ACTION_XPOSITION2A_FR "X:%x0 mm"
#define UI_TEXT_ACTION_XPOSITION2B_FR "Min:%sx Max:%sX"
#define UI_TEXT_ACTION_YPOSITION2A_FR "Y:%x1 mm"
#define UI_TEXT_ACTION_YPOSITION2B_FR "Min:%sy Max:%sY"
#define UI_TEXT_ACTION_ZPOSITION2A_FR "Z:%x2 mm"
#define UI_TEXT_ACTION_ZPOSITION2B_FR "Min:%sz Max:%sZ"
#define UI_TEXT_ACTION_XPOSITION_FAST2A_FR "X:%x0 mm"
#define UI_TEXT_ACTION_XPOSITION_FAST2B_FR "Min:%sx Max:%sX"
#define UI_TEXT_ACTION_YPOSITION_FAST2A_FR "Y:%x1 mm"
#define UI_TEXT_ACTION_YPOSITION_FAST2B_FR "Min:%sy Max:%sY"
#define UI_TEXT_ACTION_ZPOSITION_FAST2A_FR "Z:%x2 mm"
#define UI_TEXT_ACTION_ZPOSITION_FAST2B_FR "Min:%sz Max:%sZ"
#define UI_TEXT_FANSPEED_FR          "Vit. Ventil."
#define UI_TEXT_ACTION_FANSPEED_FR   "Vit. Ventil.:%Fs%%%"
#define UI_TEXT_FAN_OFF_FR           "Arret Ventil."
#define UI_TEXT_FAN_25_FR            "Ventil. 25%%%"
#define UI_TEXT_FAN_50_FR            "Ventil. 50%%%"
#define UI_TEXT_FAN_75_FR            "Ventil. 75%%%"
#define UI_TEXT_FAN_FULL_FR          "Ventil. Max"
#define UI_TEXT_STEPPER_INACTIVE_FR  "Arret Moteurs"
#define UI_TEXT_STEPPER_INACTIVE2A_FR "Dis. Apres: %is"
#define UI_TEXT_STEPPER_INACTIVE2B_FR "[min] 0=Off"
#define UI_TEXT_POWER_INACTIVE_FR    "Arret Alim."
#define UI_TEXT_POWER_INACTIVE2A_FR   "Dis. Apres: %ip"
#define UI_TEXT_POWER_INACTIVE2B_FR   "[min] 0=Off"
#define UI_TEXT_GENERAL_FR           "General"
#define UI_TEXT_BAUDRATE_FR          "Baudrate:%oc"
#define UI_TEXT_EXTR_STEPS_FR        "Pas/MM:%Se"
#define UI_TEXT_EXTR_START_FEED_FR   "Start FR:%Xf"
#define UI_TEXT_EXTR_MAX_FEED_FR     "Max FR:%XF"
#define UI_TEXT_EXTR_ACCEL_FR        "Accel:%XA"
#define UI_TEXT_EXTR_WATCH_FR        "Stab.Temps:%Xw"
#define UI_TEXT_EXTR_ADVANCE_L_FR    "Avance lin:%Xl"
#define UI_TEXT_EXTR_ADVANCE_K_FR    "Avance quad:%Xa"
#define UI_TEXT_EXTR_MANAGER_FR      "Controle:%Xh"
#define UI_TEXT_EXTR_PGAIN_FR        "PID P:%Xp"
#define UI_TEXT_EXTR_DEADTIME_FR     "Temps Mort:%Xp"
#define UI_TEXT_EXTR_DMAX_DT_FR      "PWM Control:%XM"
#define UI_TEXT_EXTR_IGAIN_FR        "PID I:%Xi"
#define UI_TEXT_EXTR_DGAIN_FR        "PID D:%Xd"
#define UI_TEXT_EXTR_DMIN_FR         "Drive Min:%Xm"
#define UI_TEXT_EXTR_DMAX_FR         "Drive Max:%XM"
#define UI_TEXT_EXTR_PMAX_FR         "PID Max:%XD"
#define UI_TEXT_EXTR_XOFF_FR         "X-Offset:%Xx"
#define UI_TEXT_EXTR_YOFF_FR         "Y-Offset:%Xy"
#define UI_TEXT_STRING_HM_BANGBANG_FR "BangBang"
#define UI_TEXT_STRING_HM_PID_FR     "PID"
#define UI_TEXT_STRING_ACTION_FR     "Action:%la"
#define UI_TEXT_HEATING_EXTRUDER_FR  "Chauff. Extrud."
#define UI_TEXT_HEATING_BED_FR       "Chauff. Lit"
#define UI_TEXT_KILLED_FR            "Stoppe"
#define UI_TEXT_STEPPER_DISABLED_FR  "Moteurs Arretes"
#define UI_TEXT_EEPROM_STOREDA_FR     "Configuration"
#define UI_TEXT_EEPROM_STOREDB_FR     "Stock. Dans EEPROM"
#define UI_TEXT_EEPROM_LOADEDA_FR     "Configuration"
#define UI_TEXT_EEPROM_LOADEDB_FR     "Charg. f. EEPROM"
#define UI_TEXT_UPLOADING_FR         "Telechargement.."
#define UI_TEXT_PAGE_BUFFER_FR       "Tampon:%oB"
#define UI_TEXT_PAGE_EXTRUDER_FR     " E:%ec/%Ec\002C\176%oC"
#define UI_TEXT_PAGE_EXTRUDER1_FR     "E1:%e0/%E0\002C\176%o0"
#define UI_TEXT_PAGE_EXTRUDER2_FR     "E2:%e1/%E1\002C\176%o1"
#define UI_TEXT_PAGE_EXTRUDER3_FR     "E3:%e2/%E2\002C\176%o2"
#define UI_TEXT_PAGE_BED_FR          " B:%eb/%Eb\002C\176%ob"
#define UI_TEXT_SPEED_MULTIPLY_FR    "Vit. Mul.:%om%%%"
#define UI_TEXT_FLOW_MULTIPLY_FR     "Flow Mul.:%of%%%"
#define UI_TEXT_SHOW_MEASUREMENT_FR  "Montrer Mesure"
#define UI_TEXT_RESET_MEASUREMENT_FR "Reset Mesure"
#define UI_TEXT_SET_MEASURED_ORIGIN_FR "Regler Z=0"
#define UI_TEXT_ZCALIB_FR             "Z Calib."
#define UI_TEXT_SET_P1_FR            "Regler P1"
#define UI_TEXT_SET_P2_FR            "Regler P2"
#define UI_TEXT_SET_P3_FR            "Regler P3"
#define UI_TEXT_CALCULATE_LEVELING_FR "Calculer Nivellement"
#define UI_TEXT_LEVEL_FR             "Niveau delta"
#define UI_TEXT_EXTR_WAIT_RETRACT_TEMP_FR  "Att. Temp.%XT\002C"
#define UI_TEXT_EXTR_WAIT_RETRACT_UNITS_FR "Att. Units:%XUmm"
#define UI_TEXT_SD_REMOVED_FR       "Carte SD retiree"
#define UI_TEXT_SD_INSERTED_FR      "Carte SD inseree"
#define UI_TEXT_PRINTER_READY_FR    "imprimante prete"
// Printtime output gets aggregated like <Days_5gisgits>UI_TEXT_PRINTTIME_DAYS<Hours>UI_TEXT_PRINTTIME_HOURS<Minutes>UI_TEXT_PRINTTIME_MINUTES
// ___88 days 12:45
#define UI_TEXT_PRINTTIME_DAYS_FR      " jours "
#define UI_TEXT_PRINTTIME_HOURS_FR     ":"
#define UI_TEXT_PRINTTIME_MINUTES_FR   ""
#define UI_TEXT_PRINT_TIME_FR          "Temps Impression"
#define UI_TEXT_PRINT_FILAMENT_FR      "Filament Imprime"
#define UI_TEXT_PRINTED_FR           "Imprime"
#define UI_TEXT_POWER_FR               "ATX power on/off"
#define UI_TEXT_STRING_HM_DEADTIME_FR  "Temps Mort"
#define UI_TEXT_STRING_HM_SLOWBANG_FR  "Tout ou Rien"
#define UI_TEXT_STOP_PRINT_FR          "Arret Impress."
#define UI_TEXT_Z_BABYSTEPPING_FR "Z Babystep.:%oYmm"
#define UI_TEXT_CHANGE_FILAMENT_FR "Changement Filament"
#define UI_TEXT_WIZ_CH_FILAMENT1_FR "Changement Filament"
#define UI_TEXT_WIZ_CH_FILAMENT2_FR "Tournez Deplacer"
#define UI_TEXT_WIZ_CH_FILAMENT3_FR "Filament haut/bas"
#define UI_TEXT_CLICK_DONE_FR "Continuer avec Clic"
#define UI_TEXT_AUTOLEVEL_ONOFF_FR  "Autolevel: %ll"
#define UI_TEXT_SERVOPOS_FR "Pos. Servo: %oS"
#define UI_TEXT_IGNORE_M106_FR      "Ignorer M106 %Fi"
#define UI_TEXT_WIZ_REHEAT1_FR "Cliquez pour"
#define UI_TEXT_WIZ_REHEAT2_FR "Rechauffer Extrud."
#define UI_TEXT_WIZ_WAITTEMP1_FR "Attendez Temp."
#define UI_TEXT_WIZ_WAITTEMP2_FR "cibles ..."
#define UI_TEXT_EXTRUDER_JAM_FR "Stockage d'Extrusion"
#define UI_TEXT_STANDBY_FR "Standby"
#define UI_TEXT_BED_COATING_FR "Revetement de Lit"
#define UI_TEXT_BED_COATING_SET1_FR "Revetement de Lit:"
#define UI_TEXT_BED_COATING_SET2_FR ""
#define UI_TEXT_NOCOATING_FR "Aucun Revetement"
#define UI_TEXT_BUILDTAK_FR "BuildTak"
#define UI_TEXT_KAPTON_FR "Kapton"
#define UI_TEXT_BLUETAPE_FR "Blue Tape"
#define UI_TEXT_PETTAPE_FR "Ruban vert PET"
#define UI_TEXT_GLUESTICK_FR "Baton de Colle"
#define UI_TEXT_CUSTOM_FR "Coutume"
#define UI_TEXT_COATING_CUSTOM_FR "Coutume:%oCmm"
#define UI_TEXT_LANGUAGE_FR "Langue"

#if NUM_EXTRUDER > 2 || MIXING_EXTRUDER != 0
  #define UI_TEXT_MAINPAGE6_1_FR "\xa %ec/%Ec\xb0 X:%x0"
#else
  #define UI_TEXT_MAINPAGE6_1_FR "\xa %e0/%E0\xb0 X:%x0"
#endif // NUM_EXTRUDER
#if NUM_EXTRUDER == 2 && MIXING_EXTRUDER == 0
  #define UI_TEXT_MAINPAGE6_2_FR "\xa %e1/%E1\xb0 Y:%x1"
#elif HAVE_HEATED_BED
  #define UI_TEXT_MAINPAGE6_2_FR "\xe %eb/%Eb\xb0 Y:%x1"
#else
  #define UI_TEXT_MAINPAGE6_2_FR "             Y:%x1"
#endif
#if HAVE_HEATED_BED && NUM_EXTRUDER == 2 && MIXING_EXTRUDER == 0
 #define UI_TEXT_MAINPAGE6_3_FR "\xe %eb/%Eb\xb0 Z:%x2"
#elif FEATURE_DITTO_PRINTING
  #define UI_TEXT_MAINPAGE6_3_FR "Copies: %ed    Z:%x2"
#else
  #define UI_TEXT_MAINPAGE6_3_FR "Flow:\xfd %of%%%   Z:%x2"
#endif
#define UI_TEXT_MAINPAGE6_4_FR "Mul: %om%%% \xfd   E: %x4m"
#define UI_TEXT_MAINPAGE6_5_FR "Buf: %oB"
#define UI_TEXT_MAINPAGE6_6_FR "%os"
#define UI_TEXT_MAINPAGE_TEMP_BED_FR cTEMP "%ec/%Ec" cDEG "B%eB/%Eb" cDEG
#define UI_TEXT_MAINPAGE_BED_FR "B%eB/%Eb" cDEG
#define UI_TEXT_MAINPAGE_Z_BUF_FR "Z:%x2  Buf : %oB"
#define UI_TEXT_MAINPAGE_MUL_EUSAGE_FR "Mul: %om   E:%x4"
#define UI_TEXT_MAINPAGE_XY_FR "X:%x0 Y:%x1"
#define UI_TEXT_PRINT_TIME_VALUE_FR "%Ut"
#define UI_TEXT_PRINT_FILAMENT_VALUE_FR "%Uf m"
#define UI_TEXT_METER_PRINTED_FR "%Uf m " UI_TEXT_PRINTED_FR
#define UI_TEXT_STATUS_FR "%os"
#define UI_TEXT_EMPTY_FR ""
#define UI_TEXT_TEMP_SET_FR cTEMP "%ec/%Ec" cDEG
#define UI_TEXT_CURRENT_TEMP_FR cTEMP "%ec" cDEG
#define UI_TEXT_COATING_THICKNESS_FR " %oCmm"
#define UI_TEXT_EXTR3_TEMP_FR "Temp. 4 :%e3/%E3" cDEG "C"
#define UI_TEXT_EXTR4_TEMP_FR "Temp. 5 :%e4/%E4" cDEG "C"
#define UI_TEXT_EXTR5_TEMP_FR "Temp. 6 :%e5/%E5" cDEG "C"
#define UI_TEXT_EXTR3_OFF_FR "Extrudeuse 4 Off"
#define UI_TEXT_EXTR4_OFF_FR "Extrudeuse 5 Off"
#define UI_TEXT_EXTR5_OFF_FR "Extrudeuse 6 Off"
#define UI_TEXT_EXTR3_SELECT_FR "%X3 Select. Extr. 4"
#define UI_TEXT_EXTR4_SELECT_FR "%X4 Select. Extr. 5"
#define UI_TEXT_EXTR5_SELECT_FR "%X5 Select. Extr. 6"
#define UI_TEXT_DITTO_0_FR "%D0 Aucune Copie"
#define UI_TEXT_DITTO_1_FR "%D1 1 Copie"
#define UI_TEXT_DITTO_2_FR "%D2 2 Copies"
#define UI_TEXT_DITTO_3_FR "%D3 3 Copies"
#define UI_TEXT_ZPROBE_HEIGHT_FR "Hauteur Z-Sonde:%zh"



#define UI_TEXT_OFFSETS_FR "Set print offsets"
#define UI_TEXT_X_OFFSET_FR "Set X offset:%T0mm"
#define UI_TEXT_Y_OFFSET_FR "Set Y offset:%T1mm"
#define UI_TEXT_Z_OFFSET_FR "Set Z offset:%T2mm"


// *************** Czech translation ****************
// ***************      By Majkl     ****************
// version: 2014/08/27


#define UI_TEXT_ON_CZ               "Zap"
#define UI_TEXT_OFF_CZ              "Vyp"
#define UI_TEXT_NA_CZ               "neni" // Output for not available
#define UI_TEXT_YES_CZ              "Ano"
#define UI_TEXT_NO_CZ               "Ne"
#define UI_TEXT_PRINT_POS_CZ        "Tisknu..."
#define UI_TEXT_PRINTING_CZ         "Tisknu"
#define UI_TEXT_IDLE_CZ             "V klidu"
#define UI_TEXT_NOSDCARD_CZ         "Neni SD karta"
#define UI_TEXT_ERROR_CZ            "**** CHYBA ****"
#define UI_TEXT_BACK_CZ             "Zpet \001"
#define UI_TEXT_QUICK_SETTINGS_CZ   "Zakladni nastaveni"
#define UI_TEXT_ERRORMSG_CZ         "%oe"
#define UI_TEXT_CONFIGURATION_CZ    "Nastaveni"
#define UI_TEXT_POSITION_CZ         "Pozice"
#define UI_TEXT_EXTRUDER_CZ         "Extruder"
#define UI_TEXT_SD_CARD_CZ          "SD karta"
#define UI_TEXT_DEBUGGING_CZ        "Debug"
#define UI_TEXT_HOME_DELTA_CZ       "Home delta"
#define UI_TEXT_HOME_ALL_CZ         "Home vsech"
#define UI_TEXT_HOME_X_CZ           "Home X"
#define UI_TEXT_HOME_Y_CZ           "Home Y"
#define UI_TEXT_HOME_Z_CZ           "Home Z"
#define UI_TEXT_PREHEAT_PLA_CZ      "Ohrat pro PLA"
#define UI_TEXT_PREHEAT_ABS_CZ      "Ohrat pro ABS"
#define UI_TEXT_LIGHTS_ONOFF_CZ     "Svetla:%lo"
#define UI_TEXT_COOLDOWN_CZ         "Zchladit"
#define UI_TEXT_SET_TO_ORIGIN_CZ    "Nastavit pocatek"
#define UI_TEXT_DISABLE_STEPPER_CZ  "Vypnout motory"
#define UI_TEXT_X_POSITION_CZ       "X pozice"
#define UI_TEXT_X_POS_FAST_CZ       "X rychle"
#define UI_TEXT_Y_POSITION_CZ       "Y pozice"
#define UI_TEXT_Y_POS_FAST_CZ       "Y rychle"
#define UI_TEXT_Z_POSITION_CZ       "Z pozice"
#define UI_TEXT_Z_POS_FAST_CZ       "Z rychle"
#define UI_TEXT_E_POSITION_CZ       "Pozice extruderu"
#define UI_TEXT_BED_TEMP_CZ         "Teplota desky: %Eb\002C"
#define UI_TEXT_EXTR0_TEMP_CZ       "Teplota 1:%e0/%E0\002C"
#define UI_TEXT_EXTR1_TEMP_CZ       "Teplota 2:%e1/%E1\002C"
#define UI_TEXT_EXTR2_TEMP_CZ       "Teplota 3:%e2/%E2\002C"
#define UI_TEXT_EXTR0_OFF_CZ        "Extruder 1 vyp."
#define UI_TEXT_EXTR1_OFF_CZ        "Extruder 2 vyp."
#define UI_TEXT_EXTR2_OFF_CZ        "Extruder 3 vyp."
#define UI_TEXT_EXTR0_SELECT_CZ     "%X0 Zvolit Extr. 1"
#define UI_TEXT_EXTR1_SELECT_CZ     "%X1 Zvolit Extr. 2"
#define UI_TEXT_EXTR2_SELECT_CZ     "%X1 Zvolit Extr. 3"
#define UI_TEXT_EXTR_ORIGIN_CZ      "Nastavit pocatek"
#define UI_TEXT_PRINT_X_CZ          "Tisk X:%ax"
#define UI_TEXT_PRINT_Y_CZ          "Tisk Y:%ay"
#define UI_TEXT_PRINT_Z_CZ          "Tisk Z:%az"
#define UI_TEXT_PRINT_Z_DELTA_CZ    "Tisk:%az"
#define UI_TEXT_MOVE_X_CZ           "Posun X:%aX"
#define UI_TEXT_MOVE_Y_CZ           "Posun Y:%aY"
#define UI_TEXT_MOVE_Z_CZ           "Posun Z:%aZ"
#define UI_TEXT_MOVE_Z_DELTA_CZ     "Posun:%aZ"
#define UI_TEXT_JERK_CZ             "Jerk:%aj"
#define UI_TEXT_ZJERK_CZ            "Z-Jerk:%aJ"
#define UI_TEXT_ACCELERATION_CZ     "Akcelerace"
#define UI_TEXT_STORE_TO_EEPROM_CZ  "Ulozit do EEPROM"
#define UI_TEXT_LOAD_EEPROM_CZ      "Nahrat z EEPROM"
#define UI_TEXT_DBG_ECHO_CZ         "Echo   :%do"
#define UI_TEXT_DBG_INFO_CZ         "Info   :%di"
#define UI_TEXT_DBG_ERROR_CZ        "Chyby :%de"
#define UI_TEXT_DBG_DRYRUN_CZ       "Beh nanecisto:%dd"
#define UI_TEXT_OPS_OFF_CZ          "%O0 OPS Vypnuto"
#define UI_TEXT_OPS_CLASSIC_CZ      "%O1 OPS Klasicke"
#define UI_TEXT_OPS_FAST_CZ         "%O2 OPS Rychle"
#define UI_TEXT_OPS_RETRACT_CZ      "Retrakce :%Or"
#define UI_TEXT_OPS_BACKSLASH_CZ    "Vule. :%Ob"
#define UI_TEXT_OPS_MINDIST_CZ      "Min.vzd,:%Od"
#define UI_TEXT_OPS_MOVE_AFTER_CZ   "Posunuti po:%Oa"
#define UI_TEXT_ANTI_OOZE_CZ        "Proti kapani"
#define UI_TEXT_PRINT_FILE_CZ       "Tisknout soubor"
#define UI_TEXT_PAUSE_PRINT_CZ      "Pozastavit tisk"
#define UI_TEXT_CONTINUE_PRINT_CZ   "Pokracovani tisku"
#define UI_TEXT_UNMOUNT_CARD_CZ     "Odpojit kartu"
#define UI_TEXT_MOUNT_CARD_CZ       "Pripojit kartu"
#define UI_TEXT_DELETE_FILE_CZ      "Smazat soubor"
#define UI_TEXT_FEEDRATE_CZ         "Rychlost"
#define UI_TEXT_FEED_MAX_X_CZ       "Max X:%fx"
#define UI_TEXT_FEED_MAX_Y_CZ       "Max Y:%fy"
#define UI_TEXT_FEED_MAX_Z_CZ       "Max Z:%fz"
#define UI_TEXT_FEED_MAX_Z_DELTA_CZ "Max:%fz"
#define UI_TEXT_FEED_HOME_X_CZ      "Home X:%fX"
#define UI_TEXT_FEED_HOME_Y_CZ      "Home Y:%fY"
#define UI_TEXT_FEED_HOME_Z_CZ      "Home Z:%fZ"
#define UI_TEXT_FEED_HOME_Z_DELTA_CZ "Home:%fZ"
#define UI_TEXT_ACTION_XPOSITION4A_CZ "X:%x0 mm"
#define UI_TEXT_ACTION_XPOSITION4B_CZ "Min koncak:%sx"
#define UI_TEXT_ACTION_XPOSITION4C_CZ "Max koncak:%sX"
#define UI_TEXT_ACTION_XPOSITION4D_CZ ""
#define UI_TEXT_ACTION_YPOSITION4A_CZ "Y:%x1 mm"
#define UI_TEXT_ACTION_YPOSITION4B_CZ "Min koncak:%sy"
#define UI_TEXT_ACTION_YPOSITION4C_CZ "Max koncak:%sY"
#define UI_TEXT_ACTION_YPOSITION4D_CZ ""
#define UI_TEXT_ACTION_ZPOSITION4A_CZ "Z:%x2 mm"
#define UI_TEXT_ACTION_ZPOSITION4B_CZ "Min koncak:%sz"
#define UI_TEXT_ACTION_ZPOSITION4C_CZ "Max koncak:%sZ"
#define UI_TEXT_ACTION_ZPOSITION4D_CZ ""
#define UI_TEXT_ACTION_XPOSITION_FAST4A_CZ "X:%x0 mm"
#define UI_TEXT_ACTION_XPOSITION_FAST4B_CZ "Min koncak:%sx"
#define UI_TEXT_ACTION_XPOSITION_FAST4C_CZ "Max koncak:%sX"
#define UI_TEXT_ACTION_XPOSITION_FAST4D_CZ ""
#define UI_TEXT_ACTION_YPOSITION_FAST4A_CZ "Y:%x1 mm"
#define UI_TEXT_ACTION_YPOSITION_FAST4B_CZ "Min koncak:%sy"
#define UI_TEXT_ACTION_YPOSITION_FAST4C_CZ "Max koncak:%sY"
#define UI_TEXT_ACTION_YPOSITION_FAST4D_CZ ""
#define UI_TEXT_ACTION_ZPOSITION_FAST4A_CZ "Z:%x2 mm"
#define UI_TEXT_ACTION_ZPOSITION_FAST4B_CZ "Min koncak:%sz"
#define UI_TEXT_ACTION_ZPOSITION_FAST4C_CZ "Max koncak:%sZ"
#define UI_TEXT_ACTION_ZPOSITION_FAST4D_CZ ""
#define UI_TEXT_ACTION_EPOSITION_FAST2A_CZ "E:%x3 mm"
#define UI_TEXT_ACTION_EPOSITION_FAST2B_CZ "1 kliknuti = 1 mm"
#define UI_TEXT_ACTION_XPOSITION2A_CZ "X:%x0 mm"
#define UI_TEXT_ACTION_XPOSITION2B_CZ "Min:%sx Max:%sX"
#define UI_TEXT_ACTION_YPOSITION2A_CZ "Y:%x1 mm"
#define UI_TEXT_ACTION_YPOSITION2B_CZ "Min:%sy Max:%sY"
#define UI_TEXT_ACTION_ZPOSITION2A_CZ "Z:%x2 mm"
#define UI_TEXT_ACTION_ZPOSITION2B_CZ "Min:%sz Max:%sZ"
#define UI_TEXT_ACTION_XPOSITION_FAST2A_CZ "X:%x0 mm"
#define UI_TEXT_ACTION_XPOSITION_FAST2B_CZ "Min:%sx Max:%sX"
#define UI_TEXT_ACTION_YPOSITION_FAST2A_CZ "Y:%x1 mm"
#define UI_TEXT_ACTION_YPOSITION_FAST2B_CZ "Min:%sy Max:%sY"
#define UI_TEXT_ACTION_ZPOSITION_FAST2A_CZ "Z:%x2 mm"
#define UI_TEXT_ACTION_ZPOSITION_FAST2B_CZ "Min:%sz Max:%sZ"
#define UI_TEXT_FANSPEED_CZ          "Rychlost vetraku"
#define UI_TEXT_ACTION_FANSPEED_CZ   "Aktualni rychlost:%Fs%%%"
#define UI_TEXT_FAN_OFF_CZ           "Vypnout"
#define UI_TEXT_FAN_25_CZ            "Vetrak na 25%%%"
#define UI_TEXT_FAN_50_CZ            "Vetrak na 50%%%"
#define UI_TEXT_FAN_75_CZ            "Vetrak na 75%%%"
#define UI_TEXT_FAN_FULL_CZ          "Vetrak na plno"
#define UI_TEXT_STEPPER_INACTIVE_CZ  "Neaktivni motory"
#define UI_TEXT_STEPPER_INACTIVE2A_CZ "Vypnout po :%i m"
#define UI_TEXT_STEPPER_INACTIVE2B_CZ "[min] 0=Off"
#define UI_TEXT_POWER_INACTIVE_CZ    "Max. neaktivni"
#define UI_TEXT_POWER_INACTIVE2A_CZ   "Vypnout po: %i m"
#define UI_TEXT_POWER_INACTIVE2B_CZ   "[min] 0=Off"
#define UI_TEXT_GENERAL_CZ           "Zakladni"
#define UI_TEXT_BAUDRATE_CZ          "Rychlost:%oc"
#define UI_TEXT_EXTR_STEPS_CZ        "kroku/MM:%Se"
#define UI_TEXT_EXTR_START_FEED_CZ   "Start FR:%Xf"
#define UI_TEXT_EXTR_MAX_FEED_CZ     "Max FR:%XF"
#define UI_TEXT_EXTR_ACCEL_CZ        "Zrychl.:%XA"
#define UI_TEXT_EXTR_WATCH_CZ        "Stab.cas:%Xw"
#define UI_TEXT_EXTR_ADVANCE_L_CZ    "Rozsir. lin:%Xl"
#define UI_TEXT_EXTR_ADVANCE_K_CZ    "Rozsir. quad:%Xa"
#define UI_TEXT_EXTR_MANAGER_CZ      "Control:%Xh"
#define UI_TEXT_EXTR_PGAIN_CZ        "PID P:%Xp"
#define UI_TEXT_EXTR_DEADTIME_CZ     "Mrtva doba:%Xp"
#define UI_TEXT_EXTR_DMAX_DT_CZ      "Ovladani PWM:%XM"
#define UI_TEXT_EXTR_IGAIN_CZ        "PID I:%Xi"
#define UI_TEXT_EXTR_DGAIN_CZ        "PID D:%Xd"
#define UI_TEXT_EXTR_DMIN_CZ         "Drive Min:%Xm"
#define UI_TEXT_EXTR_DMAX_CZ         "Drive Max:%XM"
#define UI_TEXT_EXTR_PMAX_CZ         "PID Max:%XD"
#define UI_TEXT_EXTR_XOFF_CZ         "X-Offset:%Xx"
#define UI_TEXT_EXTR_YOFF_CZ         "Y-Offset:%Xy"
#define UI_TEXT_STRING_HM_BANGBANG_CZ "BangBang"
#define UI_TEXT_STRING_HM_PID_CZ     "PID"
#define UI_TEXT_STRING_ACTION_CZ     "Akce:%la"
#define UI_TEXT_HEATING_EXTRUDER_CZ  "Ohrivani extruderu"
#define UI_TEXT_HEATING_BED_CZ       "Ohrivani desky"
#define UI_TEXT_KILLED_CZ            "Zastaveno"
#define UI_TEXT_STEPPER_DISABLED_CZ  "Motor vypnut"
#define UI_TEXT_EEPROM_STOREDA_CZ     "Konfigurace"
#define UI_TEXT_EEPROM_STOREDB_CZ     "Ulozena v EEPROM"
#define UI_TEXT_EEPROM_LOADEDA_CZ     "Konfigurace"
#define UI_TEXT_EEPROM_LOADEDB_CZ     "Nactena z EEPROM"
#define UI_TEXT_UPLOADING_CZ         "Nahravam..."
#define UI_TEXT_PAGE_BUFFER_CZ       "Buffer:%oB"
#define UI_TEXT_PAGE_EXTRUDER_CZ     " E:%ec/%Ec\002C\176%oC"
#define UI_TEXT_PAGE_EXTRUDER1_CZ     "E1:%e0/%E0\002C\176%o0"
#define UI_TEXT_PAGE_EXTRUDER2_CZ     "E2:%e1/%E1\002C\176%o1"
#define UI_TEXT_PAGE_EXTRUDER3_CZ     "E3:%e2/%E2\002C\176%o2"
#define UI_TEXT_PAGE_BED_CZ          " B:%eb/%Eb\002C\176%ob"
#define UI_TEXT_SPEED_MULTIPLY_CZ    "Rychlost:%om%%%"
#define UI_TEXT_FLOW_MULTIPLY_CZ     "Flow nasobit:%of%%%"
#define UI_TEXT_SHOW_MEASUREMENT_CZ  "Ukazat merení"
#define UI_TEXT_RESET_MEASUREMENT_CZ "Obnovit mereni"
#define UI_TEXT_SET_MEASURED_ORIGIN_CZ "Set Z=0"
#define UI_TEXT_ZCALIB_CZ             "Z kalib."
#define UI_TEXT_SET_P1_CZ            "Set P1"
#define UI_TEXT_SET_P2_CZ            "Set P2"
#define UI_TEXT_SET_P3_CZ            "Set P3"
#define UI_TEXT_CALCULATE_LEVELING_CZ "Vypocitat leveling"
#define UI_TEXT_LEVEL_CZ             "Level delta"
#define UI_TEXT_EXTR_WAIT_RETRACT_TEMP_CZ  "Tepl. cekani%XT\002C"
#define UI_TEXT_EXTR_WAIT_RETRACT_UNITS_CZ "Jedn. cekani:%XUmm"
#define UI_TEXT_SD_REMOVED_CZ       "SD karta vyjmuta."
#define UI_TEXT_SD_INSERTED_CZ      "Vlozena SD karta"
#define UI_TEXT_PRINTER_READY_CZ    "Tiskarna OK"
// Printtime output gets aggregated like <Days_5gisgits>UI_TEXT_PRINTTIME_DAYS<Hours>UI_TEXT_PRINTTIME_HOURS<Minutes>UI_TEXT_PRINTTIME_MINUTES
// ___88 days 12:45
#define UI_TEXT_PRINTTIME_DAYS_CZ   " dnu "
#define UI_TEXT_PRINTTIME_HOURS_CZ  ":"
#define UI_TEXT_PRINTTIME_MINUTES_CZ ""
#define UI_TEXT_PRINT_TIME_CZ     "Cas tisku"
#define UI_TEXT_PRINT_FILAMENT_CZ "Filament tisteny"
#define UI_TEXT_PRINTED_CZ           "Protisknuto"
#define UI_TEXT_POWER_CZ            "Zapnout ATX zdroj"
#define UI_TEXT_STRING_HM_DEADTIME_CZ     "Dead Time"
#define UI_TEXT_STRING_HM_SLOWBANG_CZ     "SlowBang"
#define UI_TEXT_STOP_PRINT_CZ "Zastavit tisk"
#define UI_TEXT_Z_BABYSTEPPING_CZ "Z babystep.:%oYmm"
#define UI_TEXT_CHANGE_FILAMENT_CZ "Zmena filament"
#define UI_TEXT_WIZ_CH_FILAMENT1_CZ "Zmena filament"
#define UI_TEXT_WIZ_CH_FILAMENT2_CZ "Otocit se pohybovat"
#define UI_TEXT_WIZ_CH_FILAMENT3_CZ "vlaken nahoru/dolu"
#define UI_TEXT_CLICK_DONE_CZ "Pokr. s cvaknutim"
#define UI_TEXT_AUTOLEVEL_ONOFF_CZ  "Autolevel: %ll"
#define UI_TEXT_SERVOPOS_CZ "Servo pozice: %oS"
#define UI_TEXT_IGNORE_M106_CZ      "Ignorovat M106 %Fi"
#define UI_TEXT_WIZ_REHEAT1_CZ "Klikněte ohrat"
#define UI_TEXT_WIZ_REHEAT2_CZ "extruders."
#define UI_TEXT_WIZ_WAITTEMP1_CZ "Pockejte na cilove"
#define UI_TEXT_WIZ_WAITTEMP2_CZ "teploty ..."
#define UI_TEXT_EXTRUDER_JAM_CZ "Extruder jam"
#define UI_TEXT_STANDBY_CZ "Standby"
#define UI_TEXT_BED_COATING_CZ "Postel nater"
#define UI_TEXT_BED_COATING_SET1_CZ "Postel nater:"
#define UI_TEXT_BED_COATING_SET2_CZ ""
#define UI_TEXT_NOCOATING_CZ "No nater"
#define UI_TEXT_BUILDTAK_CZ "BuildTak"
#define UI_TEXT_KAPTON_CZ "Kapton"
#define UI_TEXT_BLUETAPE_CZ "Modra mask. paska"
#define UI_TEXT_PETTAPE_CZ "Zelena PET paska"
#define UI_TEXT_GLUESTICK_CZ "Lepici tycinka"
#define UI_TEXT_CUSTOM_CZ "Vlastni"
#define UI_TEXT_COATING_CUSTOM_CZ "Vlastni:%oCmm"
#define UI_TEXT_LANGUAGE_CZ "Jazyk"

#if NUM_EXTRUDER > 2 || MIXING_EXTRUDER != 0
  #define UI_TEXT_MAINPAGE6_1_CZ "\xa %ec/%Ec\xb0 X:%x0"
#else
  #define UI_TEXT_MAINPAGE6_1_CZ "\xa %e0/%E0\xb0 X:%x0"
#endif // NUM_EXTRUDER
#if NUM_EXTRUDER == 2 && MIXING_EXTRUDER == 0
  #define UI_TEXT_MAINPAGE6_2_CZ "\xa %e1/%E1\xb0 Y:%x1"
#elif HAVE_HEATED_BED
  #define UI_TEXT_MAINPAGE6_2_CZ "\xe %eb/%Eb\xb0 Y:%x1"
#else
  #define UI_TEXT_MAINPAGE6_2_CZ "             Y:%x1"
#endif
#if HAVE_HEATED_BED && NUM_EXTRUDER == 2 && MIXING_EXTRUDER == 0
 #define UI_TEXT_MAINPAGE6_3_CZ "\xe %eb/%Eb\xb0 Z:%x2"
#elif FEATURE_DITTO_PRINTING
  #define UI_TEXT_MAINPAGE6_3_CZ "Kopii: %ed     Z:%x2"
#else
  #define UI_TEXT_MAINPAGE6_3_CZ "Flow:\xfd %of%%%   Z:%x2"
#endif
#define UI_TEXT_MAINPAGE6_4_CZ "Mul: %om%%% \xfd   E: %x4m"
#define UI_TEXT_MAINPAGE6_5_CZ "Buf: %oB"
#define UI_TEXT_MAINPAGE6_6_CZ "%os"
#define UI_TEXT_MAINPAGE_TEMP_BED_CZ cTEMP "%ec/%Ec" cDEG "B%eB/%Eb" cDEG
#define UI_TEXT_MAINPAGE_BED_CZ "B%eB/%Eb" cDEG
#define UI_TEXT_MAINPAGE_Z_BUF_CZ "Z:%x2  Buf : %oB"
#define UI_TEXT_MAINPAGE_MUL_EUSAGE_CZ "Mul: %om   E:%x4"
#define UI_TEXT_MAINPAGE_XY_CZ "X:%x0 Y:%x1"
#define UI_TEXT_PRINT_TIME_VALUE_CZ "%Ut"
#define UI_TEXT_PRINT_FILAMENT_VALUE_CZ "%Uf m"
#define UI_TEXT_METER_PRINTED_CZ "%Uf m " UI_TEXT_PRINTED_CZ
#define UI_TEXT_STATUS_CZ "%os"
#define UI_TEXT_EMPTY_CZ ""
#define UI_TEXT_TEMP_SET_CZ cTEMP "%ec/%Ec" cDEG
#define UI_TEXT_CURRENT_TEMP_CZ cTEMP "%ec" cDEG
#define UI_TEXT_COATING_THICKNESS_CZ " %oCmm"
#define UI_TEXT_EXTR3_TEMP_CZ "Teplota 4:%e3/%E3" cDEG "C"
#define UI_TEXT_EXTR4_TEMP_CZ "Teplota 5:%e4/%E4" cDEG "C"
#define UI_TEXT_EXTR5_TEMP_CZ "Teplota 6:%e5/%E5" cDEG "C"
#define UI_TEXT_EXTR3_OFF_CZ "Extruder 4 vyp."
#define UI_TEXT_EXTR4_OFF_CZ "Extruder 5 vyp."
#define UI_TEXT_EXTR5_OFF_CZ "Extruder 6 vyp."
#define UI_TEXT_EXTR3_SELECT_CZ "%X3 Zvolit Extr. 4"
#define UI_TEXT_EXTR4_SELECT_CZ "%X4 Zvolit Extr. 5"
#define UI_TEXT_EXTR5_SELECT_CZ "%X5 Zvolit Extr. 6"
#define UI_TEXT_DITTO_0_CZ "%D0 Zadne Kopie"
#define UI_TEXT_DITTO_1_CZ "%D1 1 Kopie"
#define UI_TEXT_DITTO_2_CZ "%D2 2 Kopii"
#define UI_TEXT_DITTO_3_CZ "%D3 3 Kopii"
#define UI_TEXT_ZPROBE_HEIGHT_CZ "Vyska z-test:%zh"

#define UI_TEXT_OFFSETS_CZ "Set print offsets"
#define UI_TEXT_X_OFFSET_CZ "Set X offset:%T0mm"
#define UI_TEXT_Y_OFFSET_CZ "Set Y offset:%T1mm"
#define UI_TEXT_Z_OFFSET_CZ "Set Z offset:%T2mm"


// *************** Polish translation ****************
// ***************       By MIS       ****************
// version: 2015/01/18

#define UI_TEXT_ON_PL               "Zal"
#define UI_TEXT_OFF_PL              "Wyl"
#define UI_TEXT_NA_PL               "Brak" // Output for not available
#define UI_TEXT_YES_PL              "Tak"
#define UI_TEXT_NO_PL               "Nie"
#define UI_TEXT_PRINT_POS_PL        "Drukowanie..."
#define UI_TEXT_PRINTING_PL         "Drukowanie"
#define UI_TEXT_IDLE_PL             "Wolna"
#define UI_TEXT_NOSDCARD_PL         "Brak karty SD"
#define UI_TEXT_ERROR_PL            "**** BLAD ****"
#define UI_TEXT_BACK_PL             "Powrot " cUP
#define UI_TEXT_QUICK_SETTINGS_PL   "Szybkie ustawienia"
#define UI_TEXT_ERRORMSG_PL         "%oe"
#define UI_TEXT_CONFIGURATION_PL    "Konfiguracja"
#define UI_TEXT_POSITION_PL         "Pozycja"
#define UI_TEXT_EXTRUDER_PL         "Ekstruder"
#define UI_TEXT_SD_CARD_PL          "Karta SD"
#define UI_TEXT_DEBUGGING_PL        "Testowanie"
#define UI_TEXT_HOME_DELTA_PL       "Home delta"
#define UI_TEXT_HOME_ALL_PL         "Zeruj wszystkie osie"
#define UI_TEXT_HOME_X_PL           "Zeruj X"
#define UI_TEXT_HOME_Y_PL           "Zeruj Y"
#define UI_TEXT_HOME_Z_PL           "Zeruj Z"
#define UI_TEXT_PREHEAT_PLA_PL      "Rozgrzej PLA"
#define UI_TEXT_PREHEAT_ABS_PL      "Rozgrzej ABS"
#define UI_TEXT_LIGHTS_ONOFF_PL     "Oswietlenie :%lo"
#define UI_TEXT_COOLDOWN_PL         "Chlodzenie"
#define UI_TEXT_SET_TO_ORIGIN_PL    "Ustaw jako zero"
#define UI_TEXT_DISABLE_STEPPER_PL  "Wylacz silniki"
#define UI_TEXT_X_POSITION_PL       "Pozycja X"
#define UI_TEXT_X_POS_FAST_PL       "Pozycja X Szybko"
#define UI_TEXT_Y_POSITION_PL       "Pozycja Y"
#define UI_TEXT_Y_POS_FAST_PL       "Pozycja Y Szybko"
#define UI_TEXT_Z_POSITION_PL       "Pozycja Z"
#define UI_TEXT_Z_POS_FAST_PL       "Pozycja Z Szybko"
#define UI_TEXT_E_POSITION_PL       "Pozycja Extrudera"
#define UI_TEXT_BED_TEMP_PL         "Temp.Stolu:%eb/%Eb" cDEG "C"
#define UI_TEXT_EXTR0_TEMP_PL       "Temp.Ex1:%e0/%E0" cDEG "C"
#define UI_TEXT_EXTR1_TEMP_PL       "Temp.Ex2:%e1/%E1" cDEG "C"
#define UI_TEXT_EXTR2_TEMP_PL       "Temp.Ex3:%e2/%E2" cDEG "C"
#define UI_TEXT_EXTR0_OFF_PL        "Wyl. Extruder 1"
#define UI_TEXT_EXTR1_OFF_PL        "Wyl. Extruder 2"
#define UI_TEXT_EXTR2_OFF_PL        "Wyl. Extruder 3"
#define UI_TEXT_EXTR0_SELECT_PL     "%X0 Wybierz Extr. 1"
#define UI_TEXT_EXTR1_SELECT_PL     "%X1 Wybierz Extr. 2"
#define UI_TEXT_EXTR2_SELECT_PL     "%X1 Wybierz Extr. 3"
#define UI_TEXT_EXTR_ORIGIN_PL      "Ustaw jako zero"
#define UI_TEXT_PRINT_X_PL          "Drukow. X   :%ax"
#define UI_TEXT_PRINT_Y_PL          "Drukow. Y   :%ay"
#define UI_TEXT_PRINT_Z_PL          "Drukow. Z   :%az"
#define UI_TEXT_PRINT_Z_DELTA_PL    "Drukowania  :%az"
#define UI_TEXT_MOVE_X_PL           "Przesuw. X  :%aX"
#define UI_TEXT_MOVE_Y_PL           "Przesuw. Y  :%aY"
#define UI_TEXT_MOVE_Z_PL           "Przesuw. Z  :%aZ"
#define UI_TEXT_MOVE_Z_DELTA_PL     "Przesuwania :%aZ"
#define UI_TEXT_JERK_PL             "Jerk:%aj"
#define UI_TEXT_ZJERK_PL            "Z-Jerk:%aJ"
#define UI_TEXT_ACCELERATION_PL     "Przyspieszenie"
#define UI_TEXT_STORE_TO_EEPROM_PL  "Zapisz do EEPROM"
#define UI_TEXT_LOAD_EEPROM_PL      "Odczyt z EEPROM"
#define UI_TEXT_DBG_ECHO_PL         "Echo        : %do"
#define UI_TEXT_DBG_INFO_PL         "Informacje  : %di"
#define UI_TEXT_DBG_ERROR_PL        "Bledy       : %de"
#define UI_TEXT_DBG_DRYRUN_PL       "Bez wydruku : %dd"
#define UI_TEXT_OPS_OFF_PL          "%O0 OPS Off"
#define UI_TEXT_OPS_CLASSIC_PL      "%O1 OPS Classic"
#define UI_TEXT_OPS_FAST_PL         "%O2 OPS Fast"
#define UI_TEXT_OPS_RETRACT_PL      "Retract :%Or"
#define UI_TEXT_OPS_BACKSLASH_PL    "Backsl. :%Ob"
#define UI_TEXT_OPS_MINDIST_PL      "Min.dist:%Od"
#define UI_TEXT_OPS_MOVE_AFTER_PL   "Przesun po:%Oa"
#define UI_TEXT_ANTI_OOZE_PL        "Anti Ooze"
#define UI_TEXT_PRINT_FILE_PL       "Drukuj z pliku"
#define UI_TEXT_PAUSE_PRINT_PL      "Wstrzymaj druk"
#define UI_TEXT_CONTINUE_PRINT_PL   "Wznow drukow."
#define UI_TEXT_UNMOUNT_CARD_PL     "Odmontuj karte"
#define UI_TEXT_MOUNT_CARD_PL       "Zamontuj karte"
#define UI_TEXT_DELETE_FILE_PL      "Usun plik"
#define UI_TEXT_FEEDRATE_PL         "Szybkosc"
#define UI_TEXT_FEED_MAX_X_PL       "Max X:%fx"
#define UI_TEXT_FEED_MAX_Y_PL       "Max Y:%fy"
#define UI_TEXT_FEED_MAX_Z_PL       "Max Z:%fz"
#define UI_TEXT_FEED_MAX_Z_DELTA_PL "Max:%fz"
#define UI_TEXT_FEED_HOME_X_PL      "Powrot X:%fX"
#define UI_TEXT_FEED_HOME_Y_PL      "Powrot Y:%fY"
#define UI_TEXT_FEED_HOME_Z_PL      "Powrot Z:%fZ"
#define UI_TEXT_FEED_HOME_Z_DELTA_PL "Powrot:%fZ"
#define UI_TEXT_ACTION_XPOSITION4A_PL "X:%x0 mm"
#define UI_TEXT_ACTION_XPOSITION4B_PL "Krancowka MIN: %sx"
#define UI_TEXT_ACTION_XPOSITION4C_PL "Krancowka MAX: %sX"
#define UI_TEXT_ACTION_XPOSITION4D_PL ""
#define UI_TEXT_ACTION_YPOSITION4A_PL "Y:%x1 mm"
#define UI_TEXT_ACTION_YPOSITION4B_PL "Krancowka MIN: %sy"
#define UI_TEXT_ACTION_YPOSITION4C_PL "Krancowka Max: %sY"
#define UI_TEXT_ACTION_YPOSITION4D_PL ""
#define UI_TEXT_ACTION_ZPOSITION4A_PL "Z:%x2 mm"
#define UI_TEXT_ACTION_ZPOSITION4B_PL "Krancowka MIN: %sz"
#define UI_TEXT_ACTION_ZPOSITION4C_PL "Krancowka Max: %sZ"
#define UI_TEXT_ACTION_ZPOSITION4D_PL ""
#define UI_TEXT_ACTION_XPOSITION_FAST4A_PL "X:%x0 mm"
#define UI_TEXT_ACTION_XPOSITION_FAST4B_PL "Krancowka MIN: %sx"
#define UI_TEXT_ACTION_XPOSITION_FAST4C_PL "Krancowka MAX: %sX"
#define UI_TEXT_ACTION_XPOSITION_FAST4D_PL ""
#define UI_TEXT_ACTION_YPOSITION_FAST4A_PL "Y:%x1 mm"
#define UI_TEXT_ACTION_YPOSITION_FAST4B_PL "Krancowka MIN: %sy"
#define UI_TEXT_ACTION_YPOSITION_FAST4C_PL "Krancowka MAX: %sY"
#define UI_TEXT_ACTION_YPOSITION_FAST4D_PL ""
#define UI_TEXT_ACTION_ZPOSITION_FAST4A_PL "Z:%x2 mm"
#define UI_TEXT_ACTION_ZPOSITION_FAST4B_PL "Krancowka MIN: %sz"
#define UI_TEXT_ACTION_ZPOSITION_FAST4C_PL "Krancowka MAX: %sZ"
#define UI_TEXT_ACTION_ZPOSITION_FAST4D_PL ""
#define UI_TEXT_ACTION_EPOSITION_FAST2A_PL "E:%x3 mm"
#define UI_TEXT_ACTION_EPOSITION_FAST2B_PL "Jednostka 1 mm"
#define UI_TEXT_ACTION_XPOSITION2A_PL "X:%x0 mm"
#define UI_TEXT_ACTION_XPOSITION2B_PL "Min:%sx Max:%sX"
#define UI_TEXT_ACTION_YPOSITION2A_PL "Y:%x1 mm"
#define UI_TEXT_ACTION_YPOSITION2B_PL "Min:%sy Max:%sY"
#define UI_TEXT_ACTION_ZPOSITION2A_PL "Z:%x2 mm"
#define UI_TEXT_ACTION_ZPOSITION2B_PL "Min:%sz Max:%sZ"
#define UI_TEXT_ACTION_XPOSITION_FAST2A_PL "X:%x0 mm"
#define UI_TEXT_ACTION_XPOSITION_FAST2B_PL "Min:%sx Max:%sX"
#define UI_TEXT_ACTION_YPOSITION_FAST2A_PL "Y:%x1 mm"
#define UI_TEXT_ACTION_YPOSITION_FAST2B_PL "Min:%sy Max:%sY"
#define UI_TEXT_ACTION_ZPOSITION_FAST2A_PL "Z:%x2 mm"
#define UI_TEXT_ACTION_ZPOSITION_FAST2B_PL "Min:%sz Max:%sZ"
#define UI_TEXT_FANSPEED_PL          "Obroty wiatraka"
#define UI_TEXT_ACTION_FANSPEED_PL   "Obroty wiatraka:%Fs%%%"
#define UI_TEXT_FAN_OFF_PL           "Wylacz wiatrak"
#define UI_TEXT_FAN_25_PL            "Ustaw na 25%%%"
#define UI_TEXT_FAN_50_PL            "Ustaw na 50%%%"
#define UI_TEXT_FAN_75_PL            "Ustaw na 75%%%"
#define UI_TEXT_FAN_FULL_PL          "Ustaw na 100%%%"
#define UI_TEXT_STEPPER_INACTIVE_PL  "Wylacz silniki po"
#define UI_TEXT_STEPPER_INACTIVE2A_PL "Wylacz po: %is min."
#define UI_TEXT_STEPPER_INACTIVE2B_PL "0=Nie wylaczaj"
#define UI_TEXT_POWER_INACTIVE_PL    "Wylacz zasil. po"
#define UI_TEXT_POWER_INACTIVE2A_PL   "Wylacz po: %ip min."
#define UI_TEXT_POWER_INACTIVE2B_PL   "0=Nie wylaczaj"
#define UI_TEXT_GENERAL_PL           "Ustawienia glowne"
#define UI_TEXT_BAUDRATE_PL          "Szybkosc USB:%oc"
#define UI_TEXT_EXTR_STEPS_PL        "Kroki/mm : %Se"
#define UI_TEXT_EXTR_START_FEED_PL   "Poczatkowa SZ:%Xf"
#define UI_TEXT_EXTR_MAX_FEED_PL     "Max Szybkosc :%XF"
#define UI_TEXT_EXTR_ACCEL_PL        "Przyspiesz.  :%XA"
#define UI_TEXT_EXTR_WATCH_PL        "Czas stabil. :%Xws"
#define UI_TEXT_EXTR_ADVANCE_L_PL    "Advance lin  :%Xl"
#define UI_TEXT_EXTR_ADVANCE_K_PL    "Advance quad :%Xa"
#define UI_TEXT_EXTR_MANAGER_PL      "Regulator:%Xh"
#define UI_TEXT_EXTR_DEADTIME_PL     "Deadtime :%Xp"
#define UI_TEXT_EXTR_DMAX_DT_PL      "Max. PWM :%XD"
#define UI_TEXT_EXTR_PGAIN_PL        "PID P    :%Xp"
#define UI_TEXT_EXTR_IGAIN_PL        "PID I    :%Xi"
#define UI_TEXT_EXTR_DGAIN_PL        "PID D    :%Xd"
#define UI_TEXT_EXTR_DMIN_PL         "Min I war: %Xm"
#define UI_TEXT_EXTR_DMAX_PL         "Max I war: %XM"
#define UI_TEXT_EXTR_PMAX_PL         "Max ster.: %XD"
#define UI_TEXT_EXTR_XOFF_PL         "Ofset X  :%Xx"
#define UI_TEXT_EXTR_YOFF_PL         "Ofset Y  :%Xy"
#define UI_TEXT_STRING_HM_BANGBANG_PL "Dwustanowy"
#define UI_TEXT_STRING_HM_PID_PL     "PID"
#define UI_TEXT_STRING_ACTION_PL     "Akcja:%la"
#define UI_TEXT_HEATING_EXTRUDER_PL  "Grzanie glowicy"
#define UI_TEXT_HEATING_BED_PL       "Grzanie stolu"
#define UI_TEXT_KILLED_PL            "Zatrzymany"
#define UI_TEXT_STEPPER_DISABLED_PL  "Silniki wylaczone"
#define UI_TEXT_EEPROM_STOREDA_PL     "Konfiguracja"
#define UI_TEXT_EEPROM_STOREDB_PL     "zapisana do EEPROM"
#define UI_TEXT_EEPROM_LOADEDA_PL     "Konfiguracja"
#define UI_TEXT_EEPROM_LOADEDB_PL     "odczytana z EEPROM"
#define UI_TEXT_UPLOADING_PL         "Ladowanie..."
#define UI_TEXT_PAGE_BUFFER_PL       "Bufor:%oB"
#define UI_TEXT_PAGE_EXTRUDER_PL     " E:%ec/%Ec" cDEG "C" cARROW "%oC"
#define UI_TEXT_PAGE_EXTRUDER1_PL     "E1:%e0/%E0" cDEG "C" cARROW "%o0"
#define UI_TEXT_PAGE_EXTRUDER2_PL     "E2:%e1/%E1" cDEG "C" cARROW "%o1"
#define UI_TEXT_PAGE_EXTRUDER3_PL     "E3:%e2/%E2" cDEG "C" cARROW "%o2"
#define UI_TEXT_PAGE_BED_PL          " B:%eb/%Eb" cDEG "C" cARROW "%ob"
#define UI_TEXT_SPEED_MULTIPLY_PL    "Szybkosc druku :%om%%%"
#define UI_TEXT_FLOW_MULTIPLY_PL     "Przeplyw filam.:%of%%%"
#define UI_TEXT_SHOW_MEASUREMENT_PL  "Pokaz pomiar"
#define UI_TEXT_RESET_MEASUREMENT_PL "Zeruj pomiar"
#define UI_TEXT_SET_MEASURED_ORIGIN_PL "Ustaw Z=0"
#define UI_TEXT_ZCALIB_PL             "Z kalib."
#define UI_TEXT_SET_P1_PL            "Ustaw P1"
#define UI_TEXT_SET_P2_PL            "Ustaw P2"
#define UI_TEXT_SET_P3_PL            "Ustaw P3"
#define UI_TEXT_CALCULATE_LEVELING_PL "Oblicz poziomowania"
#define UI_TEXT_LEVEL_PL             "Poziom delty"
#define UI_TEXT_EXTR_WAIT_RETRACT_TEMP_PL  "MinTemp wysuwu:%XT" cDEG "C"
#define UI_TEXT_EXTR_WAIT_RETRACT_UNITS_PL "Wysuw rozgrzew:%XUmm"
#define UI_TEXT_SD_REMOVED_PL       "Karta SD wyjeta"
#define UI_TEXT_SD_INSERTED_PL      "Karta SD wlozona"
#define UI_TEXT_PRINTER_READY_PL    "Drukarka gotowa"
// Printtime output gets aggregated like <Days_5gisgits>UI_TEXT_PRINTTIME_DAYS<Hours>UI_TEXT_PRINTTIME_HOURS<Minutes>UI_TEXT_PRINTTIME_MINUTES
// ___88 days 12:45
#define UI_TEXT_PRINTTIME_DAYS_PL   " dni, "
#define UI_TEXT_PRINTTIME_HOURS_PL  ":"
#define UI_TEXT_PRINTTIME_MINUTES_PL " h."
#define UI_TEXT_PRINT_TIME_PL     "Czas pracy"
#define UI_TEXT_PRINT_FILAMENT_PL "Zuzyto filamentu"
#define UI_TEXT_PRINTED_PL           "drukowane"
#define UI_TEXT_POWER_PL            "Wl/Wyl zasilanie"
#define UI_TEXT_STRING_HM_DEADTIME_PL     "Dead Time"
#define UI_TEXT_STRING_HM_SLOWBANG_PL     "SlowBang"
#define UI_TEXT_STOP_PRINT_PL       "Przerwij wydruk"
#define UI_TEXT_Z_BABYSTEPPING_PL   "Doreguluj Z:%oYmm"
#define UI_TEXT_CHANGE_FILAMENT_PL  "Zmiana filamentu"
#define UI_TEXT_WIZ_CH_FILAMENT1_PL "Zmien filament"
#define UI_TEXT_WIZ_CH_FILAMENT2_PL "Krec aby przesuwac"
#define UI_TEXT_WIZ_CH_FILAMENT3_PL "filament w gore/dol"
#define UI_TEXT_CLICK_DONE_PL       "Kliknij jak gotowe"
#define UI_TEXT_AUTOLEVEL_ONOFF_PL  "Autopoziomow.: %ll"
#define UI_TEXT_SERVOPOS_PL         "Pozycja Serwa: %oS"
#define UI_TEXT_IGNORE_M106_PL      "Ignoruj kom. M106 %Fi"
#define UI_TEXT_WIZ_REHEAT1_PL "Kliknij aby znów"
#define UI_TEXT_WIZ_REHEAT2_PL "rozgrzac ekstrudery"
#define UI_TEXT_WIZ_WAITTEMP1_PL "Poczekaj na zadane"
#define UI_TEXT_WIZ_WAITTEMP2_PL "temperatury ..."
#define UI_TEXT_EXTRUDER_JAM_PL "Ekstruder zablokowany"
#define UI_TEXT_STANDBY_PL "Standby"
#define UI_TEXT_BED_COATING_PL "Pokrycie stolu"
#define UI_TEXT_BED_COATING_SET1_PL "Wybierz material"
#define UI_TEXT_BED_COATING_SET2_PL "stolu:"
#define UI_TEXT_NOCOATING_PL "Czysty stol"
#define UI_TEXT_BUILDTAK_PL "BuildTak"
#define UI_TEXT_KAPTON_PL "Kapton"
#define UI_TEXT_BLUETAPE_PL "Nieb. tasma mask."
#define UI_TEXT_PETTAPE_PL "Zielona tasma PET"
#define UI_TEXT_GLUESTICK_PL "Klej w sztyfcie"
#define UI_TEXT_CUSTOM_PL "Inna"
#define UI_TEXT_COATING_CUSTOM_PL "Inna grubosc:%oCmm"
#define UI_TEXT_LANGUAGE_PL "Jezyk"
#if NUM_EXTRUDER > 2 || MIXING_EXTRUDER != 0
  #define UI_TEXT_MAINPAGE6_1_PL "\xa %ec/%Ec\xb0 X:%x0"
#else
  #define UI_TEXT_MAINPAGE6_1_PL "\xa %e0/%E0\xb0 X:%x0"
#endif // NUM_EXTRUDER
#if NUM_EXTRUDER == 2 && MIXING_EXTRUDER == 0
  #define UI_TEXT_MAINPAGE6_2_PL "\xa %e1/%E1\xb0 Y:%x1"
#elif HAVE_HEATED_BED
  #define UI_TEXT_MAINPAGE6_2_PL "\xe %eb/%Eb\xb0 Y:%x1"
#else
  #define UI_TEXT_MAINPAGE6_2_PL "             Y:%x1"
#endif
#if HAVE_HEATED_BED && NUM_EXTRUDER == 2 && MIXING_EXTRUDER == 0
 #define UI_TEXT_MAINPAGE6_3_PL "\xe %eb/%Eb\xb0 Z:%x2"
#elif FEATURE_DITTO_PRINTING
  #define UI_TEXT_MAINPAGE6_3_PL "Kopie: %ed     Z:%x2"
#else
  #define UI_TEXT_MAINPAGE6_3_PL "Przep:\xfd %of%%%  Z:%x2"
#endif
#define UI_TEXT_MAINPAGE6_4_PL "Mul: %om%%% \xfd   E: %x4m"
#define UI_TEXT_MAINPAGE6_5_PL "Buf: %oB"
#define UI_TEXT_MAINPAGE6_6_PL "%os"
#define UI_TEXT_MAINPAGE_TEMP_BED_PL cTEMP "%ec/%Ec" cDEG "B%eB/%Eb" cDEG
#define UI_TEXT_MAINPAGE_BED_PL "B%eB/%Eb" cDEG
#define UI_TEXT_MAINPAGE_Z_BUF_PL "Z:%x2  Buf : %oB"
#define UI_TEXT_MAINPAGE_MUL_EUSAGE_PL "Mul: %om   E:%x4"
#define UI_TEXT_MAINPAGE_XY_PL "X:%x0 Y:%x1"
#define UI_TEXT_PRINT_TIME_VALUE_PL "%Ut"
#define UI_TEXT_PRINT_FILAMENT_VALUE_PL "%Uf m"
#define UI_TEXT_METER_PRINTED_PL "%Uf m " UI_TEXT_PRINTED_PL
#define UI_TEXT_STATUS_PL "%os"
#define UI_TEXT_EMPTY_PL ""
#define UI_TEXT_TEMP_SET_PL cTEMP "%ec/%Ec" cDEG
#define UI_TEXT_CURRENT_TEMP_PL cTEMP "%ec" cDEG
#define UI_TEXT_COATING_THICKNESS_PL " %oCmm"
#define UI_TEXT_EXTR3_TEMP_PL "Temp.Ex4:%e3/%E3" cDEG "C"
#define UI_TEXT_EXTR4_TEMP_PL "Temp.Ex5:%e4/%E4" cDEG "C"
#define UI_TEXT_EXTR5_TEMP_PL "Temp.Ex6:%e5/%E5" cDEG "C"
#define UI_TEXT_EXTR3_OFF_PL "Wyl. Extruder 4"
#define UI_TEXT_EXTR4_OFF_PL "Wyl. Extruder 5"
#define UI_TEXT_EXTR5_OFF_PL "Wyl. Extruder 6"
#define UI_TEXT_EXTR3_SELECT_PL "%X3 Wybierz Extr. 4"
#define UI_TEXT_EXTR4_SELECT_PL "%X4 Wybierz Extr. 5"
#define UI_TEXT_EXTR5_SELECT_PL "%X5 Wybierz Extr. 6"
#define UI_TEXT_DITTO_0_PL "%D0 Nie kopiuj"
#define UI_TEXT_DITTO_1_PL "%D1 1 Kopia"
#define UI_TEXT_DITTO_2_PL "%D2 2 Kopie"
#define UI_TEXT_DITTO_3_PL "%D3 3 Kopie"
#define UI_TEXT_ZPROBE_HEIGHT_PL "Wys. Sondy Z:%zh"

#define UI_TEXT_OFFSETS_PL  "Polozenie wydruku"
#define UI_TEXT_X_OFFSET_PL "Przesun w X : %T0mm"
#define UI_TEXT_Y_OFFSET_PL "Przesun w Y : %T1mm"
#define UI_TEXT_Z_OFFSET_PL "Przesun w Z :%T2mm"
