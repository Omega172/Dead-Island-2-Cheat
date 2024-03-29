﻿#pragma once

/**
 * Name: Dead_Island_2
 * Version: 3.0.0.1103923
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Enums
	// --------------------------------------------------
	/**
	 * BoneSkeletalMesh SK_BaseZombiePreview.SK_BaseZombiePreview
	 */
	enum class EBone_SK_BaseZombiePreview : uint16_t
	{
		Root                         = 0,
		Pelvis                       = 1,
		spine_01                     = 2,
		Spine_02                     = 3,
		Spine_03                     = 4,
		spine_04                     = 5,
		clavicle_l                   = 6,
		shoulderVolume_l             = 7,
		upperarm_l                   = 8,
		lowerarmVolume_l             = 9,
		lowerarm_l                   = 10,
		Hand_L                       = 11,
		index_01_l                   = 12,
		index_02_l                   = 13,
		index_03_l                   = 14,
		middle_01_l                  = 15,
		middle_02_l                  = 16,
		middle_03_l                  = 17,
		pinky_metacarpal_l           = 18,
		pinky_01_l                   = 19,
		pinky_02_l                   = 20,
		pinky_03_l                   = 21,
		ring_01_l                    = 22,
		ring_02_l                    = 23,
		ring_03_l                    = 24,
		thumb_01_l                   = 25,
		thumb_02_l                   = 26,
		thumb_03_l                   = 27,
		lowerarm_twist_01_l          = 28,
		upperarm_twist_01_l          = 29,
		upperarm_twist_02_l          = 30,
		clavicle_r                   = 31,
		shoulderVolume_r             = 32,
		upperarm_r                   = 33,
		lowerarmVolume_r             = 34,
		lowerarm_r                   = 35,
		Hand_R                       = 36,
		index_01_r                   = 37,
		index_02_r                   = 38,
		index_03_r                   = 39,
		middle_01_r                  = 40,
		middle_02_r                  = 41,
		middle_03_r                  = 42,
		pinky_metacarpal_r           = 43,
		pinky_01_r                   = 44,
		pinky_02_r                   = 45,
		pinky_03_r                   = 46,
		ring_01_r                    = 47,
		ring_02_r                    = 48,
		ring_03_r                    = 49,
		thumb_01_r                   = 50,
		thumb_02_r                   = 51,
		thumb_03_r                   = 52,
		lowerarm_twist_01_r          = 53,
		upperarm_twist_01_r          = 54,
		upperarm_twist_02_r          = 55,
		neck_01                      = 56,
		neck_02                      = 57,
		head                         = 58,
		face                         = 59,
		scalp_01                     = 60,
		ear_r                        = 61,
		ear_l                        = 62,
		glasses                      = 63,
		brow_06_r                    = 64,
		brow_05_r                    = 65,
		brow_06_l                    = 66,
		brow_05_l                    = 67,
		brow_04_l                    = 68,
		brow_04_r                    = 69,
		bite_r                       = 70,
		bite_l                       = 71,
		chinThroat_01_r              = 72,
		chinThroat_01_l              = 73,
		chinThroat_01                = 74,
		cheek_02_r                   = 75,
		cheek_01_r                   = 76,
		cheek_02_l                   = 77,
		cheek_01_l                   = 78,
		zyg_04_r                     = 79,
		zyg_03_r                     = 80,
		zyg_02_r                     = 81,
		zyg_01_r                     = 82,
		zyg_04_l                     = 83,
		zyg_03_l                     = 84,
		zyg_02_l                     = 85,
		zyg_01_l                     = 86,
		chin_04_r                    = 87,
		chin_03_r                    = 88,
		chin_02_r                    = 89,
		chin_01_r                    = 90,
		chin_04_l                    = 91,
		chin_03_l                    = 92,
		chin_02_l                    = 93,
		chin_01_l                    = 94,
		chin                         = 95,
		lipChin_02_l                 = 96,
		lipChin_01_l                 = 97,
		lipChin                      = 98,
		lipChin_02_r                 = 99,
		lipChin_01_r                 = 100,
		lowLip_01_r                  = 101,
		lowLipIn_01_r                = 102,
		lowLip_01_l                  = 103,
		lowLipIn_01_l                = 104,
		lowLip_02                    = 105,
		lowLip_01                    = 106,
		lowLipIn                     = 107,
		mouth_r                      = 108,
		upLip_02_r                   = 109,
		lowLip_02_r                  = 110,
		mouth_l                      = 111,
		lowLip_02_l                  = 112,
		upLip_02_l                   = 113,
		upLip_01_r                   = 114,
		upLipIn_01_r                 = 115,
		upLip_03                     = 116,
		upLip_01                     = 117,
		upLipIn                      = 118,
		upLip_01_l                   = 119,
		upLipIn_01_l                 = 120,
		nosFlo_07_r                  = 121,
		nosFlo_06_r                  = 122,
		nosFlo_04_r                  = 123,
		nosFlo_03_r                  = 124,
		nosFlo_02_r                  = 125,
		nosFlo_01_r                  = 126,
		nosFlo_07_l                  = 127,
		nosFlo_06_l                  = 128,
		nosFlo_04_l                  = 129,
		nosFlo_03_l                  = 130,
		nosFlo_02_l                  = 131,
		nosFlo_01_l                  = 132,
		eyeFrame_04_r                = 133,
		eyeFrame_03_r                = 134,
		eyeFrame_02_r                = 135,
		eyeFrame_01_r                = 136,
		eyeFrame_04_l                = 137,
		eyeFrame_03_l                = 138,
		eyeFrame_02_l                = 139,
		eyeFrame_01_l                = 140,
		eyelid_r                     = 141,
		lowlid_01_r                  = 142,
		lowlid_02_r                  = 143,
		lowlid_03_r                  = 144,
		uplid_02_r                   = 145,
		uplid_01_r                   = 146,
		uplid_03_r                   = 147,
		browLid_02_r                 = 148,
		uplid_04_r                   = 149,
		eyeFrame_05_r                = 150,
		lowlidA_03_r                 = 151,
		lowlidA_02_r                 = 152,
		lowlidA_01_r                 = 153,
		eyelid_l                     = 154,
		lowlid_01_l                  = 155,
		lowlid_02_l                  = 156,
		lowlid_03_l                  = 157,
		uplid_01_l                   = 158,
		uplid_02_l                   = 159,
		uplid_03_l                   = 160,
		browLid_02_l                 = 161,
		uplid_04_l                   = 162,
		lowlidA_03_l                 = 163,
		lowlidA_02_l                 = 164,
		lowlidA_01_l                 = 165,
		eyeFrame_05_l                = 166,
		forehead_01_r                = 167,
		forehead_01_l                = 168,
		forehead_01                  = 169,
		noseWing_02_r                = 170,
		noseWing_01_r                = 171,
		noseWing_02_l                = 172,
		noseWing_01_l                = 173,
		noseRoot_02                  = 174,
		noseRoot_01                  = 175,
		nose                         = 176,
		browLid_03_r                 = 177,
		browLid_01_r                 = 178,
		brow_03_r                    = 179,
		brow_02_r                    = 180,
		brow_01_r                    = 181,
		browLid_03_l                 = 182,
		browLid_01_l                 = 183,
		brow_03_l                    = 184,
		brow_02_l                    = 185,
		brow_01_l                    = 186,
		brow                         = 187,
		troath                       = 188,
		eye_r                        = 189,
		eyeEnd_r                     = 190,
		eye_l                        = 191,
		eyeEnd_l                     = 192,
		lowerJaw                     = 193,
		tongue_base                  = 194,
		tongue_01                    = 195,
		tongue_02                    = 196,
		tongue_03                    = 197,
		wm_driver                    = 198,
		thigh_l                      = 199,
		calf_l                       = 200,
		calf_twist_01_l              = 201,
		foot_l                       = 202,
		ball_l                       = 203,
		thigh_r                      = 204,
		calf_r                       = 205,
		calf_twist_01_r              = 206,
		Foot_R                       = 207,
		ball_r                       = 208,
		glasses_01                   = 209,
		pelvisVolume_l               = 210,
		pelvisVolume_r               = 211,
		abdominalVolume_01           = 212,
		abdominalVolume_02           = 213,
		abdominalVolume_03           = 214,
		chestVolume_l                = 215,
		chestVolume_r                = 216,
		breastVolume_l               = 217,
		breastVolume_r               = 218,
		thighVolume_l                = 219,
		thighVolume_r                = 220,
		hipVolume_l                  = 221,
		hipVolume_r                  = 222,
		spine_03Volume_01_l          = 223,
		spine_03Volume_02_r          = 224,
		belly_ik_01                  = 225,
		belly_ik_02                  = 226,
		belly_ik_03                  = 227,
		belly_ik_pv                  = 228,
		spine01Volume_01             = 229,
		pelvis_corrector             = 230,
		bellyFrontVolume_l           = 231,
		bellyFrontVolume_r           = 232,
		belly_Ik_trg                 = 233,
		spine_03Volume_01_r          = 234,
		thighVolume_01_l             = 235,
		thighVolume_01_r             = 236,
		chestVolume_l_2              = 237,
		spine_03Volume_02_l          = 238,
		spine03Volume_01             = 239,
		spine03Volume_02             = 240,
		pelvisVolume_01_l            = 241,
		pelvisVolume_01_r            = 242,
		lowerarm_extra_01_l          = 243,
		lowerarm_extra_02_l          = 244,
		hand_extra_l                 = 245,
		thumb_extra_01_l             = 246,
		thumb_extra_02_l             = 247,
		thumb_extra_03_l             = 248,
		pinky_metacarpal_extra_l     = 249,
		pinky_extra_01_l             = 250,
		pinky_extra_02_l             = 251,
		pinky_extra_03_l             = 252,
		middle_extra_01_l            = 253,
		middle_extra_02_l            = 254,
		middle_extra_03_l            = 255,
		ring_extra_01_l              = 256,
		ring_extra_02_l              = 257,
		ring_extra_03_l              = 258,
		index_extra_01_l             = 259,
		index_extra_02_l             = 260,
		index_extra_03_l             = 261,
		spine_01Volume_01            = 262,
		thigh_rVolume_01_r           = 263,
		lowerarm_lVolume_01_l        = 264,
		lowerarm_rVolume_01_r        = 265,
		spine_04Volume_01            = 266,
		spine_04Volume_02            = 267,
		spine_04Volume_03            = 268,
		spine_04Volume_04            = 269,
		bandeau_top_front_volume     = 270,
		bandeau_top_back_volume      = 271,
		bandeau_right_volume         = 272,
		bandeau_left_volume          = 273,
		spine_02Volume_01            = 274,
		pelvisVolume_01              = 275,
		wristCorrector_ext_l         = 276,
		wristCorrector_int_l         = 277,
		wristCorrector_top_l         = 278,
		wristCorrector_ext_r         = 279,
		wristCorrector_int_r         = 280,
		wristCorrector_top_r         = 281,
		spine_03Volume_01            = 282,
		spine_01Volume_01_l          = 283,
		spine_01Volume_02_l          = 284,
		spine_01Volume_01_r          = 285,
		spine_01Volume_02_r          = 286,
		spine_01Volume_04_l          = 287,
		spine_01Volume_03_l          = 288,
		gapeMouth_12_l               = 289,
		gapeMouth_12_r               = 290,
		gapeMouth_10_l               = 291,
		gapeMouth_10_r               = 292,
		gapeMouth_11_l               = 293,
		gapeMouth_11_r               = 294,
		gapeMouth_04_r               = 295,
		gapeMouth_04_l               = 296,
		gapeMouth_05_l               = 297,
		gapeMouth_05_r               = 298,
		gapeMouth_06_l               = 299,
		gapeMouth_06_r               = 300,
		gapeMouth_07_l               = 301,
		gapeMouth_07_r               = 302,
		gapeMouth_08_l               = 303,
		gapeMouth_09_l               = 304,
		gapeMouth_09_r               = 305,
		gapeMouth_01_l               = 306,
		gapeMouth_02_l               = 307,
		gapeMouth_02_r               = 308,
		gapeMouth_03_r               = 309,
		lowerarmVolume_01_r          = 310,
		wristCorrector_extOut_l      = 311,
		lowerarm_twist_02_l          = 312,
		lowerarmVolume_01_l          = 313,
		lowerarmVolume_03_l          = 314,
		lowerarm_twist_03_l          = 315,
		lowerarmVolume_02_l          = 316,
		lowerarmVolume_04_l          = 317,
		upperarm_twist_02Volume_01_l = 318,
		upperarm_twist_02Volume_02_l = 319,
		upperarm_twist_01Volume_01_l = 320,
		upperarm_twist_01Volume_02_l = 321,
		upperarm_twist_01Volume_03_l = 322,
		upperarm_twist_01Volume_04_l = 323,
		clavicleVolume_02_l          = 324,
		clavicleVolume_03_l          = 325,
		wristCorrector_extOut_r      = 326,
		lowerarm_twist_03_r          = 327,
		lowerarm_twist_02_r          = 328,
		lowerarmVolume_04_r          = 329,
		lowerarmVolume_03_r          = 330,
		lowerarmVolume_02_r          = 331,
		upperarm_twist_02Volume_01_r = 332,
		upperarm_twist_02Volume_02_r = 333,
		upperarmVolume_02_r          = 334,
		upperarmVolume_01_r          = 335,
		upperarm_twist_01Volume_04_r = 336,
		upperarm_twist_01Volume_03_r = 337,
		upperarm_twist_01Volume_02_r = 338,
		upperarm_twist_01Volume_01_r = 339,
		clavicleVolume_02_r          = 340,
		clavicleVolume_03_r          = 341,
		spine_04Volume_02_l          = 342,
		spine_04Volume_03_l          = 343,
		spine_04Volume_02_r          = 344,
		spine_04Volume_04_r          = 345,
		spine_04Volume_03_r          = 346,
		spine_04Volume_05_l          = 347,
		spine_04Volume_05_r          = 348,
		spine_03Volume_02            = 349,
		spine_02Volume_02            = 350,
		spine_02Volume_03_l          = 351,
		spine_02Volume_03_r          = 352,
		foot_twist_01_l              = 353,
		foot_twist_01Volume_01_l     = 354,
		foot_twist_01Volume_02_l     = 355,
		calfVolume_02_l              = 356,
		calfVolume_02Chain_01_l      = 357,
		calfVolume_02Chain_02_l      = 358,
		calfVolume_02Chain_03_l      = 359,
		calfVolume_02Chain_04_l      = 360,
		thigh_twist_01_l             = 361,
		thigh_twist_01Volume_01_l    = 362,
		thigh_twist_01Volume_02_l    = 363,
		thigh_twist_01Volume_03_l    = 364,
		thigh_twist_01Volume_04_l    = 365,
		foot_twist_01_r              = 366,
		foot_twist_01Volume_01_r     = 367,
		foot_twist_01Volume_02_r     = 368,
		calf_twist_01_r1             = 369,
		calfVolume_02_r              = 370,
		calfVolume_02Chain_01_r      = 371,
		calfVolume_02Chain_02_r      = 372,
		calfVolume_02Chain_03_r      = 373,
		calfVolume_02Chain_04_r      = 374,
		thigh_twist_01_r             = 375,
		thigh_twist_01Volume_03_r    = 376,
		thigh_twist_01Volume_02_r    = 377,
		thigh_twist_01Volume_01_r    = 378,
		thigh_twist_01Volume_04_r    = 379,
		clavicleVolume_01_l          = 380,
		clavicleVolume_01_r          = 381,
		spine_04Volume_01_l          = 382,
		weapon_01_l                  = 383,
		weapon_01_r                  = 384,
		camera_pivot                 = 385,
		spine_04Volume_04_l          = 386,
		spine_04Volume_01_r          = 387,
		calf_twist_02_l              = 388,
		calf_twist_02Volume_01_l     = 389,
		calf_twist_02Volume_02_l     = 390,
		thigh_twist_02_l             = 391,
		calf_twist_02_r              = 392,
		calf_twist_02Volume_02_r     = 393,
		calf_twist_02Volume_01_r     = 394,
		thigh_twist_02_r             = 395,
		lowerarm_twist_01Volume_01_l = 396,
		lowerarm_twist_01Volume_01_r = 397,
		backpack_01                  = 398,
		chestHeart                   = 399,
		whip_01                      = 400,
		whip_02                      = 401,
		whip_03                      = 402,
		whip_04                      = 403,
		whip_05                      = 404,
		whip_06                      = 405,
		whip_07                      = 406,
		whip_08                      = 407,
		whip_09                      = 408,
		whip_010                     = 409,
		whip_011                     = 410,
		whip_012                     = 411,
		whip_013                     = 412,
		whip_014                     = 413,
		whip_015                     = 414,
		whip_016                     = 415,
		whip_017                     = 416,
		whip_018                     = 417,
		whip_019                     = 418,
		whip_020                     = 419,
		whip_021                     = 420
	};

	/**
	 * BoneSkeletalMesh SK_FemRogue.SK_FemRogue
	 */
	enum class EBone_SK_FemRogue : uint16_t
	{
		Root                             = 0,
		pelvis_3p                        = 1,
		thigh_3p_l                       = 2,
		calf_3p_l                        = 3,
		foot_3p_l                        = 4,
		thigh_3p_r                       = 5,
		calf_3p_r                        = 6,
		foot_3p_r                        = 7,
		Pelvis                           = 8,
		camera_pivot                     = 9,
		camera_root                      = 10,
		spine_01                         = 11,
		abdominal_01                     = 12,
		carry                            = 13,
		Spine_02                         = 14,
		abdominal_02                     = 15,
		Spine_03                         = 16,
		abdominal_03                     = 17,
		spine_04                         = 18,
		clavicle_l                       = 19,
		shoulderVolume_l                 = 20,
		upperarm_l                       = 21,
		lowerarmVolume_l                 = 22,
		lowerarm_l                       = 23,
		Hand_L                           = 24,
		index_01_l                       = 25,
		indCorrector_01_ext_l            = 26,
		indCorrector_01_int_l            = 27,
		indCorrector_01_top_l            = 28,
		index_02_l                       = 29,
		indCorrector_02_int_l            = 30,
		indCorrector_02_top_l            = 31,
		index_03_l                       = 32,
		indCorrector_03_int_l            = 33,
		middle_01_l                      = 34,
		midCorrector_01_ext_l            = 35,
		midCorrector_01_int_l            = 36,
		midCorrector_01_top_l            = 37,
		middle_02_l                      = 38,
		midCorrector_02_int_l            = 39,
		midCorrector_02_top_l            = 40,
		middle_03_l                      = 41,
		midCorrector_03_int_l            = 42,
		pinky_metacarpal_l               = 43,
		pinky_01_l                       = 44,
		pinky_02_l                       = 45,
		pinky_03_l                       = 46,
		pnkCorrector_03_int_l            = 47,
		pnkCorrector_02_int_l            = 48,
		pnkCorrector_02_top_l            = 49,
		pnkCorrector_01_ext_l            = 50,
		pnkCorrector_01_int_l            = 51,
		pnkCorrector_01_top_l            = 52,
		ring_01_l                        = 53,
		ring_02_l                        = 54,
		ring_03_l                        = 55,
		rngCorrector_03_int_l            = 56,
		rngCorrector_02_int_l            = 57,
		rngCorrector_02_top_l            = 58,
		rngCorrector_01_ext_l            = 59,
		rngCorrector_01_int_l            = 60,
		rngCorrector_01_top_l            = 61,
		thumb_01_l                       = 62,
		thumb_02_l                       = 63,
		thumb_03_l                       = 64,
		tmbCorrector_03_int_l            = 65,
		tmbCorrector_03_top_l            = 66,
		tmbCorrector_02_int_l            = 67,
		tmbCorrector_02_top_l            = 68,
		tmbCorrector_01_ext_l            = 69,
		tmbCorrector_01_int_l            = 70,
		tmbCorrector_01_top_l            = 71,
		weapon_01_l                      = 72,
		lowerarm_twist_01_l              = 73,
		wristCorrector_ext_l             = 74,
		wristCorrector_int_l             = 75,
		wristCorrector_top_l             = 76,
		upperarm_twist_01_l              = 77,
		upperarm_twist_02_l              = 78,
		clavicle_r                       = 79,
		shoulderVolume_r                 = 80,
		upperarm_r                       = 81,
		lowerarmVolume_r                 = 82,
		lowerarm_r                       = 83,
		Hand_R                           = 84,
		index_01_r                       = 85,
		indCorrector_01_ext_r            = 86,
		indCorrector_01_int_r            = 87,
		indCorrector_01_top_r            = 88,
		index_02_r                       = 89,
		indCorrector_02_int_r            = 90,
		indCorrector_02_top_r            = 91,
		index_03_r                       = 92,
		indCorrector_03_int_r            = 93,
		middle_01_r                      = 94,
		midCorrector_01_ext_r            = 95,
		midCorrector_01_int_r            = 96,
		midCorrector_01_top_r            = 97,
		middle_02_r                      = 98,
		midCorrector_02_int_r            = 99,
		midCorrector_02_top_r            = 100,
		middle_03_r                      = 101,
		midCorrector_03_int_r            = 102,
		pinky_metacarpal_r               = 103,
		pinky_01_r                       = 104,
		pinky_02_r                       = 105,
		pinky_03_r                       = 106,
		pnkCorrector_03_int_r            = 107,
		pnkCorrector_02_int_r            = 108,
		pnkCorrector_02_top_r            = 109,
		pnkCorrector_01_ext_r            = 110,
		pnkCorrector_01_int_r            = 111,
		pnkCorrector_01_top_r            = 112,
		ring_01_r                        = 113,
		ring_02_r                        = 114,
		ring_03_r                        = 115,
		rngCorrector_03_int_r            = 116,
		rngCorrector_02_int_r            = 117,
		rngCorrector_02_top_r            = 118,
		rngCorrector_01_ext_r            = 119,
		rngCorrector_01_int_r            = 120,
		rngCorrector_01_top_r            = 121,
		thumb_01_r                       = 122,
		thumb_02_r                       = 123,
		thumb_03_r                       = 124,
		tmbCorrector_03_int_r            = 125,
		tmbCorrector_03_top_r            = 126,
		tmbCorrector_02_int_r            = 127,
		tmbCorrector_02_top_r            = 128,
		tmbCorrector_01_ext_r            = 129,
		tmbCorrector_01_int_r            = 130,
		tmbCorrector_01_top_r            = 131,
		weapon_01_r                      = 132,
		lowerarm_twist_01_r              = 133,
		wristCorrector_ext_r             = 134,
		wristCorrector_int_r             = 135,
		wristCorrector_top_r             = 136,
		upperarm_twist_01_r              = 137,
		upperarm_twist_02_r              = 138,
		neck_01                          = 139,
		neck_02                          = 140,
		head                             = 141,
		thigh_l                          = 142,
		calf_l                           = 143,
		calf_twist_01_l                  = 144,
		foot_l                           = 145,
		ball_l                           = 146,
		hipVolume_l                      = 147,
		thighVolume_l                    = 148,
		thigh_r                          = 149,
		calf_r                           = 150,
		calf_twist_01_r                  = 151,
		Foot_R                           = 152,
		ball_r                           = 153,
		hipVolume_r                      = 154,
		thighVolume_r                    = 155,
		face                             = 156,
		scalp_01                         = 157,
		ear_r                            = 158,
		ear_l                            = 159,
		glasses_01                       = 160,
		brow_06_r                        = 161,
		brow_05_r                        = 162,
		brow_06_l                        = 163,
		brow_05_l                        = 164,
		brow_04_l                        = 165,
		brow_04_r                        = 166,
		bite_r                           = 167,
		bite_l                           = 168,
		chinThroat_01_r                  = 169,
		chinThroat_01_l                  = 170,
		chinThroat_01                    = 171,
		cheek_02_r                       = 172,
		cheek_01_r                       = 173,
		cheek_02_l                       = 174,
		cheek_01_l                       = 175,
		zyg_04_r                         = 176,
		zyg_03_r                         = 177,
		zyg_02_r                         = 178,
		zyg_01_r                         = 179,
		zyg_04_l                         = 180,
		zyg_03_l                         = 181,
		zyg_02_l                         = 182,
		zyg_01_l                         = 183,
		chin_04_r                        = 184,
		chin_03_r                        = 185,
		chin_02_r                        = 186,
		chin_01_r                        = 187,
		chin_04_l                        = 188,
		chin_03_l                        = 189,
		chin_02_l                        = 190,
		chin_01_l                        = 191,
		chin                             = 192,
		lipChin_02_l                     = 193,
		lipChin_01_l                     = 194,
		lipChin                          = 195,
		lipChin_02_r                     = 196,
		lipChin_01_r                     = 197,
		lowLip_01_r                      = 198,
		lowLipIn_01_r                    = 199,
		lowLip_01_l                      = 200,
		lowLipIn_01_l                    = 201,
		lowLip_02                        = 202,
		lowLip_01                        = 203,
		lowLipIn                         = 204,
		mouth_r                          = 205,
		upLip_02_r                       = 206,
		lowLip_02_r                      = 207,
		mouth_l                          = 208,
		lowLip_02_l                      = 209,
		upLip_02_l                       = 210,
		upLip_01_r                       = 211,
		upLipIn_01_r                     = 212,
		upLip_03                         = 213,
		upLip_01                         = 214,
		upLipIn                          = 215,
		upLip_01_l                       = 216,
		upLipIn_01_l                     = 217,
		nosFlo_07_r                      = 218,
		nosFlo_06_r                      = 219,
		nosFlo_04_r                      = 220,
		nosFlo_03_r                      = 221,
		nosFlo_02_r                      = 222,
		nosFlo_01_r                      = 223,
		nosFlo_07_l                      = 224,
		nosFlo_06_l                      = 225,
		nosFlo_04_l                      = 226,
		nosFlo_03_l                      = 227,
		nosFlo_02_l                      = 228,
		nosFlo_01_l                      = 229,
		eyeFrame_04_r                    = 230,
		eyeFrame_03_r                    = 231,
		eyeFrame_02_r                    = 232,
		eyeFrame_01_r                    = 233,
		eyeFrame_04_l                    = 234,
		eyeFrame_03_l                    = 235,
		eyeFrame_02_l                    = 236,
		eyeFrame_01_l                    = 237,
		eyelid_r                         = 238,
		lowlid_01_r                      = 239,
		lowlid_02_r                      = 240,
		lowlid_03_r                      = 241,
		uplid_02_r                       = 242,
		uplid_01_r                       = 243,
		uplid_03_r                       = 244,
		browLid_02_r                     = 245,
		uplid_04_r                       = 246,
		eyeFrame_05_r                    = 247,
		lowlidA_03_r                     = 248,
		lowlidA_02_r                     = 249,
		lowlidA_01_r                     = 250,
		eyelid_l                         = 251,
		lowlid_01_l                      = 252,
		lowlid_02_l                      = 253,
		lowlid_03_l                      = 254,
		uplid_01_l                       = 255,
		uplid_02_l                       = 256,
		uplid_03_l                       = 257,
		browLid_02_l                     = 258,
		uplid_04_l                       = 259,
		lowlidA_03_l                     = 260,
		lowlidA_02_l                     = 261,
		lowlidA_01_l                     = 262,
		eyeFrame_05_l                    = 263,
		forehead_01_r                    = 264,
		forehead_01_l                    = 265,
		forehead_01                      = 266,
		noseWing_02_r                    = 267,
		noseWing_01_r                    = 268,
		noseWing_02_l                    = 269,
		noseWing_01_l                    = 270,
		noseRoot_02                      = 271,
		noseRoot_01                      = 272,
		nose                             = 273,
		browLid_03_r                     = 274,
		browLid_01_r                     = 275,
		brow_03_r                        = 276,
		brow_02_r                        = 277,
		brow_01_r                        = 278,
		browLid_03_l                     = 279,
		browLid_01_l                     = 280,
		brow_03_l                        = 281,
		brow_02_l                        = 282,
		brow_01_l                        = 283,
		brow                             = 284,
		troath                           = 285,
		eye_r                            = 286,
		eyeEnd_r                         = 287,
		eye_l                            = 288,
		eyeEnd_l                         = 289,
		lowerJaw                         = 290,
		tongue_base                      = 291,
		tongue_01                        = 292,
		tongue_02                        = 293,
		tongue_03                        = 294,
		wm_driver                        = 295,
		hipFrontVolume_l                 = 296,
		hipFrontVolume_r                 = 297,
		garmentVolume_l                  = 298,
		garmentVolume_r                  = 299,
		chestCorrector_l                 = 300,
		chestCorrector_r                 = 301,
		lowerarmVolume_01_l              = 302,
		lowerarm_twist_02_l              = 303,
		armpitVolume_l                   = 304,
		lowerarmVolume_01_r              = 305,
		lowerarm_twist_02_r              = 306,
		armpitVolume_r                   = 307,
		scapulaVolume_l                  = 308,
		scapulaVolume_r                  = 309,
		calfVolume_l                     = 310,
		calfVolume_r                     = 311,
		glasses                          = 312,
		sleeveCorrector_l                = 313,
		sleeveCorrector_r                = 314,
		shirtCollarCorrector_l           = 315,
		shirtCollarCorrector_r           = 316,
		appendixCorrector                = 317,
		tie_01                           = 318,
		tie_02                           = 319,
		tie_03                           = 320,
		tie_04                           = 321,
		tie_05                           = 322,
		tie_06                           = 323,
		tie_07                           = 324,
		upperarmVolume_01_l              = 325,
		upperarmVolume_02_l              = 326,
		upperarmVolume_01_r              = 327,
		upperarmVolume_02_r              = 328,
		spine_04Volume_02_l              = 329,
		spine_04Volume_01_l              = 330,
		spine_04Volume_01                = 331,
		spine_04Volume_01_r              = 332,
		spine_04Volume_02                = 333,
		spine_04Volume_02_r              = 334,
		chestVolume_r                    = 335,
		chestVolume_l                    = 336,
		spine_03Volume_01_l              = 337,
		spine_03VolumeChain_01_l         = 338,
		spine_03Volume_01                = 339,
		spine_03Volume_02                = 340,
		spine_03Volume_02Chain_02        = 341,
		spine_03Volume_02Chain_01        = 342,
		spine_03Volume_02_l              = 343,
		spine_03Volume_02Chain_01_l      = 344,
		spine_03Volume_02Chain_02_l      = 345,
		spine_03Volume_03_l              = 346,
		spine_03Volume_03Chain_01_l      = 347,
		spine_03Volume_03Chain_02_l      = 348,
		spine_03Volume_03Chain_02_l1     = 349,
		spine_03Volume_03_r              = 350,
		spine_03Volume_03Chain_01_r      = 351,
		spine_03Volume_03Chain_02_r      = 352,
		spine_03Volume_03Chain_02_r1     = 353,
		spine_03Volume_01_r              = 354,
		spine_03VolumeChain_01_r         = 355,
		spine_03Volume_02_r              = 356,
		spine_03Volume_02Chain_01_r      = 357,
		spine_03Volume_02Chain_02_r      = 358,
		thigh_twist_01_l                 = 359,
		thigh_twist_01Volume_01_l        = 360,
		thigh_twist_01_r                 = 361,
		pelvisVolume_r                   = 362,
		pelvisVolume_l                   = 363,
		pelvisFrontVolume_r              = 364,
		pelvisFrontVolume_l              = 365,
		spine_01Volume_01_l              = 366,
		spine_01Volume_01_r              = 367,
		abdominalVolume_01               = 368,
		abdominalVolume_02               = 369,
		abdominalVolume_03               = 370,
		breastVolume_l                   = 371,
		breastVolume_r                   = 372,
		thighVolume_01_r                 = 373,
		pelvisVolume_01_r                = 374,
		cigar                            = 375,
		clavicleVolume_01_l              = 376,
		clavicleVolume_02_l              = 377,
		clavicleVolume_01_r              = 378,
		clavicleVolume_02_r              = 379,
		thighVolume_02_l                 = 380,
		thighVolume_02_r                 = 381,
		pelvisVolume_01_l                = 382,
		pelvisVolume_01                  = 383,
		thighVolume_01_l                 = 384,
		spine_01Volume_01                = 385,
		spine_04Volume_03                = 386,
		spine_04Volume_04                = 387,
		handVolume_01_l                  = 388,
		handVolume_02_l                  = 389,
		handVolume_01_r                  = 390,
		handVolume_02_r                  = 391,
		spine_02Volume_01_l              = 392,
		spine_02Volume_01_r              = 393,
		spine_02Volume_01                = 394,
		pelvisVolume_02_l                = 395,
		pelvisVolume_02_r                = 396,
		hand_ik_l                        = 397,
		wristCorrector_extOut_l          = 398,
		lowerarmVolume_02_l              = 399,
		lowerarmVolume_03_l              = 400,
		wristCorrector_extOut_r          = 401,
		lowerarmVolume_02_r              = 402,
		lowerarmVolume_03_r              = 403,
		spine_04Volume_01Chain_01_l      = 404,
		spine_04Volume_01Chain_01_r      = 405,
		spine_04Volume_01Chain_02_l      = 406,
		spine_04Volume_01Chain_02_r      = 407,
		calfVolume_01_l                  = 408,
		calfVolume_01Chain_01_l          = 409,
		calfVolume_01_r                  = 410,
		calfVolume_01Chain_01_r          = 411,
		spine_04Volume_03_l              = 412,
		spine_04Volume_03_r              = 413,
		upperarmVolume_03_l              = 414,
		upperarmVolume_03_r              = 415,
		lowerarmVolume_04_l              = 416,
		upperarm_twist_02Volume_01_l     = 417,
		upperarm_twist_01Volume_01_l     = 418,
		upperarm_twist_01Volume_03_l     = 419,
		upperarm_twist_01Volume_04_l     = 420,
		upperarm_twist_01Volume_02_l     = 421,
		clavicleVolume_03_l              = 422,
		lowerarmVolume_04_r              = 423,
		upperarm_twist_02Volume_01_r     = 424,
		upperarm_twist_01Volume_01_r     = 425,
		upperarm_twist_01Volume_04_r     = 426,
		upperarm_twist_01Volume_02_r     = 427,
		upperarm_twist_01Volume_03_r     = 428,
		clavicleVolume_03_r              = 429,
		spine_04Volume_05_l              = 430,
		spine_04Volume_05_r              = 431,
		spine_02Volume_02_l              = 432,
		spine_02Volume_02_r              = 433,
		calfVolume_02_l                  = 434,
		calfVolume_02Chain_01_l          = 435,
		calfVolume_02Chain_02_l          = 436,
		calfVolume_02Chain_03_l          = 437,
		calfVolume_02Chain_04_l          = 438,
		foot_twist_01_l                  = 439,
		foot_twist_01Volume_01_l         = 440,
		foot_twist_01Volume_02_l         = 441,
		foot_twist_01Volume_03_l         = 442,
		foot_twist_01Volume_04_l         = 443,
		thigh_twist_01Volume_02_l        = 444,
		thigh_twist_02_l                 = 445,
		calfVolume_02_r                  = 446,
		calfVolume_02Chain_01_r          = 447,
		calfVolume_02Chain_02_r          = 448,
		calfVolume_02Chain_03_r          = 449,
		calfVolume_02Chain_04_r          = 450,
		foot_twist_01_r                  = 451,
		foot_twist_01Volume_01_r         = 452,
		foot_twist_01Volume_02_r         = 453,
		foot_twist_01Volume_03_r         = 454,
		foot_twist_01Volume_04_r         = 455,
		thigh_twist_01Volume_02_r        = 456,
		thigh_twist_01Volume_01_r        = 457,
		thigh_twist_02_r                 = 458,
		spine_twist_01                   = 459,
		spine_twist_01Volume_01_l        = 460,
		spine_twist_01Volume_01          = 461,
		spine_twist_01Volume_02          = 462,
		spine_twist_01Volume_01_r        = 463,
		thigh_twist_01Volume_03_l        = 464,
		thigh_twist_01Volume_04_l        = 465,
		thigh_twist_01Volume_04_r        = 466,
		thigh_twist_01Volume_03_r        = 467,
		lowerarm_twist_01Volume_01_r     = 468,
		spine_03_twist_01                = 469,
		spine_03_twist_01Volume_01_l     = 470,
		spine_03_twist_01Volume_01_r     = 471,
		spine_03_twist_01Volume_01       = 472,
		spine_03_twist_01Volume_02       = 473,
		spine_04_twist_01                = 474,
		spine_04_twist_01Volume_01_l     = 475,
		spine_04_twist_01Volume_01_r     = 476,
		spine_04_twist_01Volume_01       = 477,
		spine_04_twist_01Volume_02       = 478,
		calf_twist_02_l                  = 479,
		calf_twist_02Volume_01_l         = 480,
		calf_twist_02Volume_02_l         = 481,
		calf_twist_02Volume_03_l         = 482,
		calf_twist_02Volume_04_l         = 483,
		calf_twist_02_r                  = 484,
		calf_twist_02Volume_03_r         = 485,
		calf_twist_02Volume_04_r         = 486,
		calf_twist_02Volume_02_r         = 487,
		calf_twist_02Volume_01_r         = 488,
		lowerarm_twist_01Volume_01_top_l = 489,
		lowerarm_twist_01Volume_01_int_l = 490,
		neckCorrector_01                 = 491,
		spine_02Volume_04_l              = 492,
		spine_02Volume_04_r              = 493,
		spine_01Volume_04_l              = 494,
		spine_01Volume_04_r              = 495,
		beltCorrector_01                 = 496,
		beltCorrector_02                 = 497,
		lowerarm_twist_03_l              = 498,
		lowerarm_twist_03_r              = 499,
		lowerarm_twist_01Volume_01_l     = 500
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
