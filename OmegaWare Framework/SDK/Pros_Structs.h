#pragma once

/**
 * Name: Dead_Island_2
 * Version: Cracked
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
	 * Enum Pros.EProsErrorCode
	 */
	enum class EProsErrorCode : uint16_t
	{
		SUCCESS                                                                               = 0,
		CANCELLED                                                                             = 1,
		UNKNOWN_ERROR                                                                         = 2,
		INVALID_ARGUMENT                                                                      = 3,
		DEADLINE_EXCEEDED                                                                     = 4,
		NOT_FOUND                                                                             = 5,
		ALREADY_EXISTS                                                                        = 6,
		PERMISSION_DENIED                                                                     = 7,
		RESOURCE_EXHAUSTED                                                                    = 8,
		FAILED_PRECONDITION                                                                   = 9,
		ABORTED                                                                               = 10,
		OUT_OF_RANGE                                                                          = 11,
		UNIMPLEMENTED                                                                         = 12,
		INTERNAL_ERROR                                                                        = 13,
		UNAVAILABLE                                                                           = 14,
		DATA_LOSS                                                                             = 15,
		UNAUTHENTICATED                                                                       = 16,
		INVALID_CONTEXT                                                                       = 17,
		CONCURRENCY_FAILURE                                                                   = 18,
		INVALID_HYDRA_USER_ID                                                                 = 19,
		SDK_NOT_INITIALIZED                                                                   = 20,
		SDK_BUSY                                                                              = 21,
		SDK_INTERNAL_ERROR                                                                    = 22,
		SDK_TIMEOUT                                                                           = 23,
		SDK_PARSE_ERROR                                                                       = 24,
		SDK_INCOMPATIBLE_MODULE_INTERFACE_ERROR                                               = 25,
		SDK_CANCELLED                                                                         = 26,
		SDK_NOT_ALLOWED                                                                       = 27,
		SDK_TIMEOUT_SPIKE                                                                     = 28,
		SDK_INVALID_PARAMETER                                                                 = 29,
		SDK_NO_SERVICE_ENDPOINT                                                               = 30,
		SDK_ENDPOINTS_DISPATCHER_NO_DEFAULT_ENVIRONMENT                                       = 31,
		SDK_INVALID_STATE                                                                     = 32,
		SDK_NOT_A_MEMBER                                                                      = 33,
		SDK_NOT_AN_OWNER                                                                      = 34,
		SDK_USER_IS_NOT_ALLOWED                                                               = 35,
		SDK_MAX_COUNT_LIMIT                                                                   = 36,
		SDK_NOT_FOUND                                                                         = 37,
		SDK_ASYNC_WAIT_CALLBACK                                                               = 38,
		SDK_MAINTENANCE                                                                       = 39,
		USER_LOGIN_ALREADY_EXISTS                                                             = 40,
		USER_SESSION_WAS_NOT_FOUND                                                            = 41,
		USER_VERSION_MISMATCH                                                                 = 42,
		USER_DATA_TOO_LARGE                                                                   = 43,
		USER_SESSION_REQUEST_CONTEXT_IS_MALFORMED                                             = 44,
		USER_SIGNED_OUT                                                                       = 45,
		USER_DATA_ACCESS_DENIED                                                               = 46,
		USER_DATA_INVALID_PARAMETERS                                                          = 47,
		USER_DATA_RULE_FOR_CONTAINER_DOES_NOT_EXIST                                           = 48,
		USER_SESSION_EXPIRED                                                                  = 49,
		USER_BAN_NOT_FOUND                                                                    = 50,
		USER_SERVICE_CALL_WAS_BANNED                                                          = 51,
		AUTHORIZATION_INVALID_CREDENTIALS                                                     = 52,
		AUTHORIZATION_INVALID_LOGIN                                                           = 53,
		AUTHORIZATION_INVALID_TOKEN                                                           = 54,
		AUTHORIZATION_TOKEN_EXPIRED                                                           = 55,
		AUTHORIZATION_INVALID_AUTH_TICKET                                                     = 56,
		AUTHORIZATION_DOUBLE_SIGN_IN                                                          = 57,
		AUTHORIZATION_SESSION_STORAGE_ISSUE                                                   = 58,
		AUTHORIZATION_PROVIDER_IS_DISABLED                                                    = 59,
		AUTHORIZATION_TITLE_NOT_FOUND                                                         = 60,
		AUTHORIZATION_TITLE_IS_DISABLED                                                       = 61,
		AUTHORIZATION_INVALID_TITLE_ID                                                        = 62,
		AUTHORIZATION_ROLE_NOT_FOUND                                                          = 63,
		AUTHORIZATION_SECRET_NOT_FOUND                                                        = 64,
		AUTHORIZATION_SECRET_EXPIRED                                                          = 65,
		AUTHORIZATION_SECRET_NOT_ACTIVE                                                       = 66,
		AUTHORIZATION_INVALID_STANDALONE_CODE                                                 = 67,
		AUTHORIZATION_NINTENDO_ENTITLEMENT_CHECK_FAILED                                       = 68,
		AUTHORIZATION_PSN_EMPTY_ID_TOKEN                                                      = 69,
		XBOX_CLAIM_NOT_FOUND                                                                  = 70,
		XBOX_S_TOKEN_REQUEST_FAILED                                                           = 71,
		XBOX_X_TOKEN_REQUEST_FAILED                                                           = 72,
		EOS_OWNERSHIP_VERIFICATION_FAILED                                                     = 73,
		STEAM_TOKEN_VALIDATION_FAILED                                                         = 74,
		STEAM_GAME_ACCESS_VALIDATION_FAILED                                                   = 75,
		STEAM_TOKEN_VALIDATION_UNEXPECTED_ERROR                                               = 76,
		GAME_CONFIGURATION_INVALID_VERSION                                                    = 77,
		DATACENTER_TAG_NOT_FOUND                                                              = 78,
		DATACENTER_PROVIDER_TAG_NOT_FOUND                                                     = 79,
		DATACENTER_CONFIGURATION_TAG_IS_NOT_UNIQUE                                            = 80,
		DATA_CENTER_NOT_FOUND                                                                 = 81,
		DATA_CENTER_IN_USE                                                                    = 82,
		DATA_CENTER_ALREADY_EXISTS                                                            = 83,
		DATA_CENTER_BAD_REQUEST                                                               = 84,
		FACTS_UNABLE_TO_WRITE_INDEX                                                           = 85,
		FACTS_CATEGORIES_CONTEXTS_EMPTY                                                       = 86,
		FACTS_PARAMETERS_NOT_SPECIFIED                                                        = 87,
		FACTS_UNABLE_TO_WRITE_CHUNK                                                           = 88,
		SERVER_MANAGER_AGENT_NOT_FOUND                                                        = 89,
		SERVER_MANAGER_PACKS_COUNT_LIMIT_EXCEEDED                                             = 90,
		SERVER_MANAGER_INVALID_DATACENTER_CONFIGURATION_TAG                                   = 91,
		SESSION_CONTROL_SESSION_NOT_FOUND                                                     = 92,
		SESSION_CONTROL_SESSION_FINISHED_NORMAL                                               = 93,
		SESSION_CONTROL_SESSION_FINISHED_REJECTED                                             = 94,
		SESSION_CONTROL_SESSION_FINISH_NO_MATCHING_DSM                                        = 95,
		SESSION_CONTROL_SESSION_FINISH_TIMEOUT_ACTIVATE                                       = 96,
		SESSION_CONTROL_SESSION_FINISH_TIMEOUT_DS                                             = 97,
		SESSION_CONTROL_DSM_TIMEOUT                                                           = 98,
		SESSION_CONTROL_INVALID_CLIENT_VERSION                                                = 99,
		SESSION_CONTROL_INVALID_MAX_PLAYERS_COUNT                                             = 100,
		SESSION_CONTROL_INVALID_MANAGED_CONTEXT                                               = 101,
		SESSION_CONTROL_SESSION_ALREADY_ACTIVATED                                             = 102,
		SESSION_CONTROL_SESSION_ACTIVATION_FAILED                                             = 103,
		MESSAGING_UNEXPECTED                                                                  = 104,
		MESSAGING_INVALID_ARGUMENT                                                            = 105,
		MESSAGING_CHANNEL_NAME_VALIDATION                                                     = 106,
		MESSAGING_MESSAGE_HAS_INVALID_SIZE                                                    = 107,
		MESSAGING_CHANNEL_HAS_INVALID_MEMBER_COUNT                                            = 108,
		MESSAGING_CHANNEL_ALREADY_EXISTS                                                      = 109,
		MESSAGING_CHANNEL_REACHED_MAX_MEMBER_COUNT                                            = 110,
		MESSAGING_CHANNEL_MEMBERSHIP_LOCKED                                                   = 111,
		MESSAGING_USER_NOT_CHANNEL_OWNER                                                      = 112,
		MESSAGING_CHANNEL_INVALID_CREDENTIALS                                                 = 113,
		MESSAGING_CHANNEL_NO_ACCESS                                                           = 114,
		MESSAGING_CHANNEL_NO_WRITING                                                          = 115,
		MESSAGING_USER_NOT_JOINED_CHANNEL                                                     = 116,
		MESSAGING_CHANNEL_DOES_NOT_EXIST                                                      = 117,
		MESSAGING_MAX_CHANNELS_LIMIT_REACHED                                                  = 118,
		ENDPOINT_DISPATCHER_AUTH_ENDPOINTS_NOT_FOUND                                          = 119,
		ENDPOINT_DISPATCHER_INCOMPATIBLE_CLIENT_VERSIONS                                      = 120,
		ENDPOINT_DISPATCHER_INCOMPATIBLE_CLIENT_MAJOR_VERSION                                 = 121,
		ENDPOINT_DISPATCHER_INCOMPATIBLE_CLIENT_MINOR_VERSION                                 = 122,
		ENDPOINT_DISPATCHER_SERVICE_NOT_FOUND                                                 = 123,
		PRESENCE_UNEXPECTED                                                                   = 124,
		PRESENCE_PARTY_ALREADY_MEMBER                                                         = 125,
		PRESENCE_PARTY_MAX_COUNT_LIMIT                                                        = 126,
		PRESENCE_PLAYLIST_NOT_FOUND                                                           = 127,
		PRESENCE_PARTY_NOT_A_MEMBER                                                           = 128,
		PRESENCE_PARTY_NOT_AN_OWNER                                                           = 129,
		PRESENCE_SESSION_NOT_A_MEMBER                                                         = 130,
		PRESENCE_SESSION_NOT_AN_OWNER                                                         = 131,
		PRESENCE_INVALID_STATE                                                                = 132,
		PRESENCE_SESSION_JOIN_NO_SESSION                                                      = 133,
		PRESENCE_SESSION_JOIN_DOMAIN_MISMATCH                                                 = 134,
		PRESENCE_SESSION_JOIN_SESSION_FULL                                                    = 135,
		PRESENCE_SESSION_JOIN_SESSION_TEAM_MODE                                               = 136,
		PRESENCE_SESSION_JOIN_SESSION_SETTINGS                                                = 137,
		PRESENCE_SESSION_JOIN_IN_SESSION                                                      = 138,
		PRESENCE_VARIANTS_DUPLICATE_KEYS                                                      = 139,
		PRESENCE_VARIANTS_DUPLICATE_VALUES                                                    = 140,
		PRESENCE_DCPINGS_EMPTY                                                                = 141,
		PRESENCE_SESSSION_INVALID_MAX_COUNT                                                   = 142,
		PRESENCE_MEMBERS_EXCEED                                                               = 143,
		PRESENCE_PARTY_JOIN_NO_PARTY                                                          = 144,
		PRESENCE_PARTY_NOT_INVITABLE                                                          = 145,
		PRESENCE_USER_TIMEOUTED                                                               = 146,
		PRESENCE_INVITE_ALREADY_SENT                                                          = 147,
		PRESENCE_INVITE_NOT_FOUND                                                             = 148,
		PRESENCE_INVITE_DELEGATION_OWNER                                                      = 149,
		PRESENCE_PARTY_MAX_COUNT_EXCEEDS_PLAYLIST_COUNT                                       = 150,
		PRESENCE_PARTY_MAX_COUNT_EXCEEDS_CURRENT_COUNT                                        = 151,
		PRESENCE_PARTY_IS_NOT_JOINABLE                                                        = 152,
		PRESENCE_INVITE_PARTY_IS_NOT_JOINABLE                                                 = 153,
		PRESENCE_JOIN_CODE_PARTY_IS_NOT_JOINABLE                                              = 154,
		PRESENCE_DATA_SIZE_LIMIT                                                              = 155,
		PRESENCE_PARTY_MEMBERS_INCORRECT_STATE                                                = 156,
		PRESENCE_EXTERNAL_CALL_TIMEOUT                                                        = 157,
		PRESENCE_OPERATION_NOT_ALLOWED_LONG_OPERATION_IN_PROGRESS                             = 158,
		ZEN_TOURNAMENT_NOT_FOUND                                                              = 159,
		ZEN_TOURNAMENT_FINISHED                                                               = 160,
		ZEN_TOURNAMENT_INVALID_PROPERTIES                                                     = 161,
		ZEN_TOURNAMENT_INVALID_ATTEMPT_KEY                                                    = 162,
		ZEN_TOURNAMENT_ONLY_ONE_ACTIVE_USER_TOURNAMENT_ALLOWED                                = 163,
		ZEN_TOURNAMENT_INCORRECT_PASSWORD                                                     = 164,
		PUSH_TOKEN_ALREADY_CONNECTED                                                          = 165,
		PUSH_SYSTEM_FAILED_TO_INITIALIZE                                                      = 166,
		PUSH_SYSTEM_DISCONNECTED                                                              = 167,
		LEADERBOARD_INVALID_CONFIGURATION                                                     = 168,
		LEADERBOARD_UPDATE_EXCEEDS_MAX_UPDATE_COUNT                                           = 169,
		LEADERBOARD_UPDATE_MUST_CONTAIN_USER_RESULTS                                          = 170,
		LEADERBOARD_RESULTS_COUNT_EXCEEDS                                                     = 171,
		LEADERBOARD_CUSTOM_DATA_EXCEEDS                                                       = 172,
		LEADERBOARD_WRONG_LEADERBOARD_ID                                                      = 173,
		LEADERBOARD_TEMPORARY_UNAVAILABLE                                                     = 174,
		RATINGS_CONFIGURATION_INVALID_RATING_ID                                               = 175,
		RATINGS_RESULTS_COUNT_EXCEEDS                                                         = 176,
		RATINGS_CUSTOM_DATA_EXCEEDS                                                           = 177,
		RATINGS_UPDATE_EXCEEDS_MAX_UPDATE_COUNT                                               = 178,
		RATINGS_WRONG_RATING_ID                                                               = 179,
		FRIENDS_FIREND_REQUEST_ALREADY_SENT                                                   = 180,
		FRIENDS_ALREADY_FRIEND                                                                = 181,
		FRIENDS_FRIEND_NOT_FOUND                                                              = 182,
		CHALLENGES_CHALLENGE_UPDATE_FAILED                                                    = 183,
		CHALLENGES_CHALLENGE_UPDATE_AFTER_REWARD_FAILED                                       = 184,
		ECONOMY_OFFER_NOT_FOUND                                                               = 185,
		ECONOMY_UNEXPECTED_OFFER_ERROR                                                        = 186,
		ECONOMY_DOES_NOT_HAVE_ITEM                                                            = 187,
		ECONOMY_ITEM_ALREADY_BOUGHT                                                           = 188,
		ECONOMY_COMMAND_NOT_SUPPORTED                                                         = 189,
		ECONOMY_ERROR                                                                         = 190,
		ECONOMY_DBC_ERROR                                                                     = 191,
		ECONOMY_VALIDATION_FAILED                                                             = 192,
		OFFER_UNSUCCESSFUL_STEAM_RESULT                                                       = 193,
		OFFER_GOOGLE_PLAY_RMT_FAILED                                                          = 194,
		BI_KAFKA_SENDING_FAILED                                                               = 195,
		BI_KAFKA_CONNECTION_ERROR                                                             = 196,
		BOT_SERVICE_RETRIABLE                                                                 = 197,
		BOT_SERVICE_FATAL                                                                     = 198,
		BOT_SERVICE_TERMINAL                                                                  = 199,
		BOT_LOGIC_ERROR                                                                       = 200,
		ROLES_INVALID_PARAMETERS                                                              = 201,
		TITLES_WORLD_ID_IS_EMPTY                                                              = 202,
		TITLES_STORAGE_IS_FULL                                                                = 203,
		TITLE_NAME_IS_INVALID                                                                 = 204,
		BUILDS_GROUP_DATA_FAILED                                                              = 205,
		BUILDS_GROUP_REQUEST_FAILED                                                           = 206,
		BUILDS_GROUP_LOGIC_FAILED                                                             = 207,
		BUILD_VERSION_ALREADY_REGISTERED                                                      = 208,
		BUILD_VERSION_IS_NOT_SPECIFIED                                                        = 209,
		DIAGNOSTICS_VALIDATION_FAILED                                                         = 210,
		DIAGNOSTICS_DATA_IS_EMPTY                                                             = 211,
		DIAGNOSTICS_UNABLE_TO_WRITE_DATA                                                      = 212,
		TITLES_STORAGE_WRONG_IMAGE_TYPE                                                       = 213,
		WEB_PORTAL_BACKEND_PARAMETER_INVALID_VALUE                                            = 214,
		WEB_PORTAL_BACKEND_TOKEN_DECRYPTION_FAILED                                            = 215,
		WEB_PORTAL_RECAPTCHA_FAILED                                                           = 216,
		PLUGIN_BAD_REQUEST                                                                    = 217,
		PLUGIN_INTERNAL_ERROR                                                                 = 218,
		PLUGIN_NOT_FOUND                                                                      = 219,
		PLUGIN_BUILD_NOT_FOUND                                                                = 220,
		PLUGIN_NOT_BELONGS_TO_TITLE                                                           = 221,
		PLUGIN_BUILD_NOT_BELONGS_TO_TITLE                                                     = 222,
		PLUGIN_ALREADY_EXISTS                                                                 = 223,
		PLUGIN_SECRET_NOT_FOUND                                                               = 224,
		PLUGIN_BUILD_ALREADY_UPLOADED                                                         = 225,
		PLUGIN_BUILD_NOT_UPLOADED                                                             = 226,
		PLUGIN_BUILD_ALREADY_REGISTERED                                                       = 227,
		BINARY_PACK_INVALID_COMPRESSION                                                       = 228,
		BINARY_PACK_INVALID_FORMAT                                                            = 229,
		NOTIFICATIONS_SLACK_TOKEN_IS_NOT_VALID                                                = 230,
		NOTIFICATIONS_TELEGRAM_TOKEN_IS_NOT_VALID                                             = 231,
		NOTIFICATIONS_SLACK_TOKEN_IS_ALREADY_LINKED                                           = 232,
		NOTIFICATIONS_TELEGRAM_TOKEN_IS_ALREADY_LINKED                                        = 233,
		NOTIFICATIONS_SLACK_NOT_ALLOWED_TOKEN_TYPE                                            = 234,
		NOC_PORTAL_SEARCH_TOKEN_DECRYPTION_FAILED                                             = 235,
		USER_REPORTS_SEND_REPORT_FAILED                                                       = 236,
		PRIVACY_BLOCK_LIST_LIMIT_REACHED                                                      = 237,
		PRIVACY_USER_BLOCK_NOT_FOUND                                                          = 238,
		ACCOUNT_CODE_EXPIRED                                                                  = 239,
		ACCOUNT_CODE_ALREADY_EXIST                                                            = 240,
		ACCOUNT_CODE_NOT_FOUND                                                                = 241,
		ACCOUNT_CODE_NOT_VALID                                                                = 242,
		WP_INVALID_PROVIDER                                                                   = 243,
		WP_INVALID_PASSWORD                                                                   = 244,
		WP_INVALID_LOGIN                                                                      = 245,
		WP_ACCOUNT_ALREADY_EXIST                                                              = 246,
		WP_CODE_ALREADY_LINKED                                                                = 247,
		WP_ACCOUNT_NOT_FOUND                                                                  = 248,
		WP_ACCOUNT_NOT_CONFIRMED                                                              = 249,
		WP_ACCOUNT_CONFIRMED                                                                  = 250,
		WP_THROTTLE_CONFIRMATION_CODE_GENERATION                                              = 251,
		WP_INVALID_CONFIRMATION_CODE                                                          = 252,
		WP_CONFIRMATION_CODE_EXPIRED                                                          = 253,
		WP_PASSWORD_RESET_CODE_CLAIMED                                                        = 254,
		WP_INVALID_PASSWORD_RESET_CODE                                                        = 255,
		WP_PASSWORD_RESET_CODE_EXPIRED                                                        = 256,
		WP_CODE_CLAIM_ATTEMPTS_EXCEEDED                                                       = 257,
		WP_ACCOUNT_INVALID_EMAIL                                                              = 258,
		WP_ACCOUNT_ANOTHER_USER_WITH_SAME_PROVIDER_ALREADY_LINKED                             = 259,
		WP_ACCOUNT_ANOTHER_USER_WITH_SAME_PROVIDER_AND_DIFFERENT_TITLE_ALREADY_LINKED         = 260,
		WP_ACCOUNT_USER_ALREADY_HAVE_ACCOUNT_WITH_LINKED_TITLES_FOR_CURRENT_PROVIDER          = 261,
		WP_ACCOUNT_EMAIL_ALREADY_EXIST                                                        = 262,
		WP_ACCOUNT_INVALID_USERNAME                                                           = 263,
		WP_ACCOUNT_INVALID_PROVIDER_FOR_EXISTING_ACCOUNT                                      = 264,
		WP_ACCOUNT_PASSWORD_ALREADY_SET                                                       = 265,
		WP_ACCOUNT_IS_UNDER_DELETION                                                          = 266,
		WP_ACCOUNT_IS_NOT_ACTIVE                                                              = 267,
		WP_ACCOUNT_IS_SUSPENDED                                                               = 268,
		WP_THROTTLE_CONFIRMATION_CODE_CLAIM                                                   = 269,
		WP_ACCOUNT_NOT_CONFIRMED_AND_CANT_RESEND_CONFIRMATION_CODE                            = 270,
		WP_ACCOUNT_LANGUAGE_IN_WRONG_FORMAT                                                   = 271,
		WP_SUPPORT_FILE_MALICIOUS_DETECTED                                                    = 272,
		WP_USERNAME_REQUIRES_MODERATION                                                       = 273,
		ENTITLEMENT_NOT_FOUND                                                                 = 274,
		ENTITLEMENT_NOT_VALID                                                                 = 275,
		ENTITLEMENT_UPDATE_FAILED                                                             = 276,
		ENTITLEMENT_REWARD_CODE_EXPIRED                                                       = 277,
		ENTITLEMENT_ACCOUNT_IS_NOT_LINKED_WITH_ANY_USER                                       = 278,
		ENTITLEMENT_REWARD_CODE_ALREADY_EXIST                                                 = 279,
		ENTITLEMENT_REWARD_CODE_WRONG_ACCOUNT                                                 = 280,
		ENTITLEMENT_REWARD_CODE_ALREADY_USED                                                  = 281,
		ENTITLEMENT_REWARD_CODE_FILTER_FAILED                                                 = 282,
		ENTITLEMENT_REWARD_CODE_NOT_FOUND                                                     = 283,
		ENTITLEMENT_CONSUME_COUNT_EXCEEDS_CONSUME_LIMIT                                       = 284,
		ENTITLEMENT_USER_NOT_LINKED                                                           = 285,
		ENTITLEMENT_TWITCH_CAMPAIGN_OVERLAPPING_PERIODS                                       = 286,
		ENTITLEMENT_CATALOG_ITEM_ID_ALREADY_EXISTS                                            = 287,
		ENTITLEMENT_CATALOG_ITEM_NOT_FOUND                                                    = 288,
		ENTITLEMENT_CATALOG_ITEM_INTERNAL_ERROR                                               = 289,
		PII_STORAGE_USER_NOT_FOUND                                                            = 290,
		PII_STORAGE_ACCOUNT_NOT_FOUND                                                         = 291,
		PII_SHARD_NOT_FOUND                                                                   = 292,
		BANNER_CONFIGURATION_NOT_FOUND                                                        = 293,
		WP_BANNER_CAMPAIGN_ALREADY_EXIST                                                      = 294,
		WP_BANNER_CAMPAIGN_CONTAINS_NONUNIQUE_BANNERS                                         = 295,
		WP_BANNER_CAMPAIGN_CONTAINS_MISMATCHED_BANNERS                                        = 296,
		WP_BANNER_CAMPAIGN_BANNERS_REQUIRED                                                   = 297,
		WP_BANNER_BAD_CONTENT_LOGIC_CONFIGURATION                                             = 298,
		BANNERS_BAD_CONFIGURATION                                                             = 299,
		WP_BANNER_EMPTY_PLATFORMS                                                             = 300,
		WP_BANNER_BAD_LOCALIZATION                                                            = 301,
		TITLE_STORAGE_TITLE_DETAILS_NOT_ALLOWED_FOR_REQUESTED_ACCOUNT                         = 302,
		TITLE_STORAGE_TITLE_FEATURES_CANT_BE_EMPTY                                            = 303,
		UNIQUE_CODE_GENERATION_CODE_NOT_CREATED                                               = 304,
		CAN_NOT_INIT_SEQUENCE_FOR_UNIQUE_CODE_GENERATION                                      = 305,
		CAN_NOT_UPDATE_SEQUENCE_FOR_UNIQUE_CODE_GENERATION                                    = 306,
		CONTENT_MODERATION_LIST_UPDATE_OPERATION_FAILED                                       = 307,
		CONTENT_MODERATION_IMPORT_FAILED                                                      = 308,
		NOT_SUPPORTED_AGREEMENT_DOCUMENT_TYPE                                                 = 309,
		AGREEMENTS_CACHE_CAN_NOT_BE_UPDATED                                                   = 310,
		AGREEMENT_STATUS_DRAFT_CAN_NOT_BE_SET                                                 = 311,
		AGREEMENT_OR_AGREEMENT_VERSION_NOT_IN_STATUS_DRAFT_CAN_NOT_BE_DELETED                 = 312,
		CAN_NOT_CREATE_AGREEMENT_VERSION_FOR_NON_EXISTING_AGREEMENT                           = 313,
		NEW_AGREEMENT_VERSION_MUST_BE_GREATER_THAN_LAST_EXISTING_VERSION                      = 314,
		AGREEMENT_VERSION_TAG_IS_INVALID                                                      = 315,
		AGREEMENT_DOES_NOT_EXIST                                                              = 316,
		AGREEMENT_VERSION_DOES_NOT_EXIST                                                      = 317,
		CAN_NOT_ACTIVATE_AGREEMENT_VERSION_WITH_LOWER_VERSION_THAN_PREVIOUS_ACTIVE            = 318,
		AGREEMENT_OR_AGREEMENT_VERSION_NOT_IN_STATUS_DRAFT_CAN_NOT_BE_SET_TO_STATUS_ACTIVE    = 319,
		AGREEMENT_OR_AGREEMENT_VERSION_NOT_IN_STATUS_ACTIVE_CAN_NOT_BE_SET_TO_STATUS_INACTIVE = 320,
		CAN_NOT_DELETE_AGREEMENT_VERSION_FOR_NON_EXISTING_AGREEMENT                           = 321,
		AGREEMENT_WITHOUT_ACTIVE_VERSION_CAN_NOT_BE_ACTIVATED                                 = 322,
		SIGNED_AGREEMENT_CAN_NOT_BE_CHANGED                                                   = 323,
		AGREEMENT_VERSION_ALREADY_EXISTS                                                      = 324,
		AGREEMENT_VERSION_NOT_IN_STATUS_DRAFT_CAN_NOT_BE_UPDATED                              = 325,
		LOCALIZATION_FOR_TITLE_NOT_FOUND                                                      = 326,
		LOCALIZATION_STRING_ID_NOT_FOUND                                                      = 327,
		LOCALIZATION_UPDATE_FAILED                                                            = 328,
		LOCALIZATION_STRING_ID_ALREADY_EXIST                                                  = 329,
		LOCALIZATION_NOT_SUPPORTED_FILE_TYPE                                                  = 330,
		LOCALIZATION_TRANSLATION_NOT_FOUND                                                    = 331,
		LOCALIZATION_INCORRECT_TITLE_ID_IN_THE_FILE                                           = 332,
		LOCALIZATION_INVALID_FILE_FORMAT                                                      = 333,
		LOCALIZATION_INVALID_STRING_ID_IN_THE_FILE                                            = 334,
		LOCALIZATION_INVALID_LOCALE_CODE_IN_THE_FILE                                          = 335,
		LOCALIZATION_INVALID_STRING_ID                                                        = 336,
		MAILING_TOPIC_DOESNT_EXIST                                                            = 337,
		MAILING_TOPIC_ALREADY_EXISTS                                                          = 338,
		MAILING_INVALID_NAME                                                                  = 339,
		MAILING_INVALID_EVENT                                                                 = 340,
		MAILING_TEMPLATE_PARSE_ERROR                                                          = 341,
		MAILING_IMAGE_BAD_DATA                                                                = 342,
		MAILING_IMAGE_NOT_FOUND                                                               = 343,
		CROSS_SAVE_TRANSFER_NOT_VALID                                                         = 344,
		CROSS_SAVE_SNAPSHOT_MAX_SIZE_EXCEEDED                                                 = 345,
		CROSS_SAVE_NEXT_TRANSFER_NOT_AVAILABLE                                                = 346,
		CROSS_SAVE_PLATFORM_NOT_LINKED                                                        = 347,
		CROSS_SAVE_SNAPSHOT_NOT_FOUND                                                         = 348,
		CROSS_SAVE_TARGET_PLATFORM_NOT_AVAILABLE                                              = 349,
		CROSS_SAVE_FEATURE_IS_DISABLED                                                        = 350,
		CROSS_SAVE_ACCOUNT_UPDATE_FAIL                                                        = 351,
		CROSS_SAVE_TRANSFER_TARGET_PLATFORM_UNAVAILABLE                                       = 352,
		CROSS_SAVE_BACKUP_SNAPSHOT_CANT_BE_NULL                                               = 353,
		CROSS_SAVE_SNAPSHOT_DESCRIPTION_SYMBOLS_LIMIT_EXCEEDED                                = 354,
		CROSS_SAVE_SNAPSHOT_CONTENT_TYPE_SYMBOLS_LIMIT_EXCEEDED                               = 355,
		AB_TESTING_SPACE_NOT_FOUND                                                            = 356,
		AB_TESTING_ACCOUNT_PROFILE_READ_FAILED                                                = 357,
		AB_TESTING_EXPERIMENT_STATUS_UPDATE_FORBIDDEN                                         = 358,
		AB_TESTING_EXPERIMENT_UPDATE_FAILED                                                   = 359,
		AB_TESTING_SPACE_UPDATE_FAILED                                                        = 360,
		AB_TESTING_SPACE_DELETE_FAILED_EXPERIMENTS_NOT_EMPTY                                  = 361,
		SOCIAL_CONNECTION_ALREADY_CONNECTED                                                   = 362,
		SOCIAL_CONNECTION_NOT_FOUND                                                           = 363,
		SOCIAL_CONNECTION_UNAVAILABLE                                                         = 364,
		SOCIAL_CONNECTION_OAUTH_STATE_EXPIRED                                                 = 365,
		SOCIAL_CONNECTION_OAUTH_PROVIDER_ERROR_OCCURED                                        = 366,
		SOCIAL_CONNECTION_TWITCH_ENTITLEMENT_STATUS_UPDATE_FAILED                             = 367,
		SOCIAL_CONNECTION_TWITCH_USER_ALREADY_LINKED                                          = 368,
		THIRD_PARTY_ACCOUNTS_COUNT_REQUEST_LIMIT                                              = 369,
		THIRD_PARTY_ACCOUNT_PAIRWISE_NOT_FOUND                                                = 370,
		THIRD_PARTY_TITLE_NOT_FOUND                                                           = 371,
		STATISTICS_WIDGET_DISABLED                                                            = 372,
		STATISTICS_WIDGET_BAD_STATISTIC_PARAMETER                                             = 373,
		STATISTICS_WIDGET_BAD_CONFIGURATION                                                   = 374,
		STATISTICS_WIDGET_BAD_IMAGE_DATA                                                      = 375,
		STATISTICS_WIDGET_CANT_DELETE_USED_PARAMETER                                          = 376,
		MOD_UNKNOWN_TAG                                                                       = 377,
		MOD_UNKNOWN_TYPE                                                                      = 378,
		MOD_DOES_NOT_EXIST                                                                    = 379,
		MOD_REQUESTED_USER_IS_NOT_MOD_AUTHOR                                                  = 380,
		MOD_VERSION_DOES_NOT_EXIST                                                            = 381,
		MOD_REQUESTED_USER_IS_NOT_MOD_AUTHOR_OR_MODERATOR                                     = 382,
		MOD_STATUS_IS_NOT_PUBLIC                                                              = 383,
		MOD_HAVE_NO_PUBLIC_VERSION                                                            = 384,
		MOD_IS_BLOCKED                                                                        = 385,
		MOD_VERSION_TRANSITION_REJECTED                                                       = 386,
		MOD_ELASTICSEARCH_CLIENT_IS_NULL                                                      = 387,
		MOD_IS_UNDER_DELETION                                                                 = 388,
		MOD_USE_DELETE_MOD_INSTEAD                                                            = 389,
		MOD_USE_DELETE_MOD_VERSION_INSTEAD                                                    = 390,
		MOD_ACCOUNT_NOT_LINKED_TO_TITLE                                                       = 391,
		MOD_COLLECTION_DOES_NOT_EXIST                                                         = 392,
		MOD_REQUESTED_USER_IS_NOT_MODERATOR                                                   = 393,
		MOD_VERSION_ALREADY_EXISTS                                                            = 394,
		MOD_DOCUMENT_STORAGE_OPERATION_FAILED                                                 = 395,
		MOD_INVALID_CONTINUATION_TOKEN                                                        = 396,
		MOD_NOT_SUPPORTED_PLATFORM                                                            = 397,
		MOD_VERSION_INFO_CAN_NOT_BE_CHANGED                                                   = 398,
		MOD_INFO_CAN_NOT_BE_CHANGED                                                           = 399,
		MOD_IS_DELETED                                                                        = 400,
		MOD_PROFILE_URL_IS_NULL_OR_WHITESPACE                                                 = 401,
		MOD_ACCOUNT_ID_REQUIRED                                                               = 402,
		MOD_NAME_IS_NULL_OR_WHITESPACE                                                        = 403,
		MOD_FILE_DOES_NOT_EXIST                                                               = 404,
		MOD_NAME_IS_NOT_UNIQUE                                                                = 405,
		MOD_TAGS_INTERSECTS                                                                   = 406,
		MOD_TAG_CATEGORIES_IS_NOT_UNIQUE                                                      = 407,
		MOD_PROFILE_URL_IS_NOT_UNIQUE                                                         = 408,
		MOD_IS_NOT_UNDER_DELETION                                                             = 409,
		MOD_DATA_ARCHIVE_MUST_BE_WITHOUT_PASSWORD                                             = 410,
		MOD_DATA_ARCHIVE_IS_INVALID                                                           = 411,
		MOD_DATA_ARCHIVE_HAS_WRONG_FORMAT                                                     = 412,
		MOD_DATA_ARCHIVE_HAS_INVALID_SIZE                                                     = 413,
		MOD_DATA_ARCHIVE_CHUNK_UPLOAD_FAILED                                                  = 414,
		MOD_DATA_ARCHIVE_FIRST_CHUNK_MOD_FILE_ID_MUST_BE_EMPTY                                = 415,
		MOD_DATA_FILE_WAS_NOT_FOUND_BY_CHUNK_UPLOAD_ID                                        = 416,
		MOD_DATA_ARCHIVE_IS_EMPTY                                                             = 417,
		MAX                                                                                   = 418
	};

	/**
	 * Enum Pros.EProsAccountServiceState
	 */
	enum class EProsAccountServiceState : uint8_t
	{
		Unknown           = 0,
		NotLinked         = 1,
		Linked            = 2,
		RequestInProgress = 3,
		LinkedCode        = 4,
		MAX               = 5
	};

	/**
	 * Enum Pros.EProsAccountSystemMode
	 */
	enum class EProsAccountSystemMode : uint8_t
	{
		Normal  = 0,
		TurnOff = 1,
		MAX     = 2
	};

	/**
	 * Enum Pros.EProsServiceState
	 */
	enum class EProsServiceState : uint8_t
	{
		OFFLINE       = 0,
		CONNECTING    = 1,
		ONLINE        = 2,
		DISCONNECTING = 3,
		MAX           = 4
	};

	/**
	 * Enum Pros.EProsBannerType
	 */
	enum class EProsBannerType : uint8_t
	{
		Tips  = 0,
		Promo = 1,
		MAX   = 2
	};

	/**
	 * Enum Pros.EProsBannerSeverity
	 */
	enum class EProsBannerSeverity : uint8_t
	{
		None      = 0,
		Important = 1,
		MAX       = 2
	};

	/**
	 * Enum Pros.EProsBannerUrlType
	 */
	enum class EProsBannerUrlType : uint8_t
	{
		ExternalUrl          = 0,
		InAppGameContent     = 1,
		InAppExternalContent = 2,
		MAX                  = 3
	};

	/**
	 * Enum Pros.EProsBannerSystemMode
	 */
	enum class EProsBannerSystemMode : uint8_t
	{
		Normal  = 0,
		TurnOff = 1,
		MAX     = 2
	};

	/**
	 * Enum Pros.EProsCrossSaveProvider
	 */
	enum class EProsCrossSaveProvider : uint8_t
	{
		STEAM    = 0,
		EOS      = 1,
		STADIA   = 2,
		XBOX     = 3,
		PSN      = 4,
		NINTENDO = 5,
		MS_STORE = 6,
		OCULUS   = 7,
		HYDRA    = 8,
		MAX      = 9
	};

	/**
	 * Enum Pros.EProsCrossSavePlatform
	 */
	enum class EProsCrossSavePlatform : uint8_t
	{
		UNKNOWN  = 0,
		WIN64    = 1,
		LINUX64  = 2,
		DURANGO  = 3,
		ORBIS    = 4,
		SWITCH   = 5,
		IOS      = 6,
		NDROID   = 7,
		PROSPERO = 8,
		SCARLETT = 9,
		STADIA   = 10,
		UNITY    = 11,
		NET      = 12,
		MAX      = 13
	};

	/**
	 * Enum Pros.EProsEntitlementType
	 */
	enum class EProsEntitlementType : uint8_t
	{
		Unknown    = 0,
		Durable    = 1,
		Consumable = 2,
		MAX        = 3
	};

	/**
	 * Enum Pros.EProsProvider
	 */
	enum class EProsProvider : uint8_t
	{
		STEAM    = 0,
		EOS      = 1,
		STADIA   = 2,
		XBOX     = 3,
		PSN      = 4,
		NINTENDO = 5,
		MS_STORE = 6,
		OCULUS   = 7,
		MAX      = 8
	};

	/**
	 * Enum Pros.EProsEnvironment
	 */
	enum class EProsEnvironment : uint8_t
	{
		PROD = 0,
		DEV  = 1,
		STG  = 2,
		MAX  = 3
	};

	/**
	 * Enum Pros.EProsConnectionState
	 */
	enum class EProsConnectionState : uint8_t
	{
		OFFLINE       = 0,
		CONNECTING    = 1,
		ONLINE        = 2,
		DISCONNECTING = 3,
		MAX           = 4
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct Pros.PluginVersioned
	 * Size -> 0x0018
	 */
	struct FPluginVersioned
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    VersionMajor;                                            // 0x0010(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    VersionMinor;                                            // 0x0014(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Pros.ProsAccountServiceStatus
	 * Size -> 0x0030
	 */
	struct FProsAccountServiceStatus
	{
	public:
		EProsAccountServiceState                                   LinkState;                                               // 0x0000(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N3L7[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              LinkUri;                                                 // 0x0008(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<unsigned char>                                      QRCodePng;                                               // 0x0018(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    ExpirationSec;                                           // 0x0028(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EProsAccountSystemMode                                     SystemMode;                                              // 0x002C(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6USQ[0x3];                                   // 0x002D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Pros.ProsLocDesc
	 * Size -> 0x0030
	 */
	struct FProsLocDesc
	{
	public:
		class FString                                              LanguageCode;                                            // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CountryCode;                                             // 0x0010(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Text;                                                    // 0x0020(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Pros.ProsBannerMessage
	 * Size -> 0x0020
	 */
	struct FProsBannerMessage
	{
	public:
		class FString                                              ID;                                                      // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FProsLocDesc>                                LocDescs;                                                // 0x0010(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Pros.ProsBanner
	 * Size -> 0x0048
	 */
	struct FProsBanner
	{
	public:
		class FString                                              CampaignId;                                              // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ImageUrl;                                                // 0x0010(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              RedirectUrl;                                             // 0x0020(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EProsBannerUrlType                                         RedirectUrlType;                                         // 0x0030(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EProsBannerSeverity                                        Severity;                                                // 0x0031(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EProsBannerType                                            Type;                                                    // 0x0032(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QAHR[0x5];                                   // 0x0033(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FProsBannerMessage>                          Messages;                                                // 0x0038(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Pros.ProsBannerConfig
	 * Size -> 0x0008
	 */
	struct FProsBannerConfig
	{
	public:
		int32_t                                                    DisplayMs;                                               // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EProsBannerSystemMode                                      Mode;                                                    // 0x0004(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZZDC[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Pros.ProsCrossSaveTransferInfo
	 * Size -> 0x0048
	 */
	struct FProsCrossSaveTransferInfo
	{
	public:
		class FString                                              TransferId;                                              // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ContentType;                                             // 0x0010(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Description;                                             // 0x0020(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EProsCrossSavePlatform                                     Platform;                                                // 0x0030(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EProsCrossSaveProvider                                     Provider;                                                // 0x0031(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9MYD[0x6];                                   // 0x0032(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDateTime                                           SaveCreatedAt;                                           // 0x0038(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDateTime                                           TransferCreatedAt;                                       // 0x0040(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Pros.ProsCrossSaveElement
	 * Size -> 0x0020
	 */
	struct FProsCrossSaveElement
	{
	public:
		class FString                                              Key;                                                     // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Data;                                                    // 0x0010(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Pros.ProsCrossSaveSnapshot
	 * Size -> 0x0030
	 */
	struct FProsCrossSaveSnapshot
	{
	public:
		class FString                                              ContentType;                                             // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Description;                                             // 0x0010(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FProsCrossSaveElement>                       Elements;                                                // 0x0020(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Pros.ProsCrossSaveSnapshotContainer
	 * Size -> 0x0030
	 */
	struct FProsCrossSaveSnapshotContainer
	{
	public:
		class FString                                              ContentType;                                             // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Description;                                             // 0x0010(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ContainerId;                                             // 0x0020(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Pros.ProsCrossSaveCompleteTransferResult
	 * Size -> 0x0060
	 */
	struct FProsCrossSaveCompleteTransferResult
	{
	public:
		struct FProsCrossSaveSnapshot                              Snapshot;                                                // 0x0000(0x0030) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FProsCrossSaveSnapshotContainer                     SnapshotContainer;                                       // 0x0030(0x0030) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Pros.ProsEntitlement
	 * Size -> 0x0060
	 */
	struct FProsEntitlement
	{
	public:
		class FString                                              ID;                                                      // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Name;                                                    // 0x0010(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EProsEntitlementType                                       Type;                                                    // 0x0020(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsOwned;                                                // 0x0021(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I6LN[0x6];                                   // 0x0022(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              PictureUrl;                                              // 0x0028(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ConsumeLimit;                                            // 0x0038(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ConsumeCount;                                            // 0x003C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FProsLocDesc>                                UiName;                                                  // 0x0040(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FProsLocDesc>                                UiDesc;                                                  // 0x0050(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Pros.ProsXSTSTokenConf
	 * Size -> 0x0020
	 */
	struct FProsXSTSTokenConf
	{
	public:
		class FString                                              RequestEndPointURL;                                      // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Verb;                                                    // 0x0010(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Pros.PluginEndpoint
	 * Size -> 0x0018
	 */
	struct FPluginEndpoint
	{
	public:
		class FString                                              Domain;                                                  // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Port;                                                    // 0x0010(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSecured;                                                // 0x0014(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SJNN[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
