#pragma once

enum t_user_message
{
	UWM_SCRIPT_ERROR = WM_USER + 100,
	UWM_SCRIPT_ERROR_TIMEOUT,
	UWM_SCRIPT_DISABLE,
	UWM_SCRIPT_TERM,
	UWM_TIMER,
	UWM_SIZE,
	UWM_REFRESHBK,
	UWM_SHOWCONFIGURE,
	UWM_SHOWPROPERTIES,
	UWM_REFRESHBKDONE,
	UWM_TOGGLEQUERYCONTINUE,
	UWM_SIZELIMITECHANGED,
	UWM_SCN_KEYDOWN,

	CALLBACK_UWM_GETALBUMARTASYNCDONE,

	CALLBACK_UWM_FONT_CHANGED,
	CALLBACK_UWM_COLORS_CHANGED,
	
	// config_object_notify
	CALLBACK_UWM_PLAYLIST_STOP_AFTER_CURRENT,
	CALLBACK_UWM_CURSOR_FOLLOW_PLAYBACK,
	CALLBACK_UWM_PLAYBACK_FOLLOW_CURSOR,
	CALLBACK_UWM_NOTIFY_DATA,

	// playback_statistics_collector
	CALLBACK_UWM_ON_ITEM_PLAYED,

	// metadb_io_callback_dynamic
	CALLBACK_UWM_ON_CHANGED_SORTED,

	// ui_selection_callback
	CALLBACK_UWM_ON_SELECTION_CHANGED,

	// play_callback
	CALLBACK_UWM_ON_PLAYBACK_STARTING,
	CALLBACK_UWM_ON_PLAYBACK_NEW_TRACK,
	CALLBACK_UWM_ON_PLAYBACK_STOP,
	CALLBACK_UWM_ON_PLAYBACK_SEEK,
	CALLBACK_UWM_ON_PLAYBACK_PAUSE,
	CALLBACK_UWM_ON_PLAYBACK_EDITED,
	CALLBACK_UWM_ON_PLAYBACK_DYNAMIC_INFO,
	CALLBACK_UWM_ON_PLAYBACK_DYNAMIC_INFO_TRACK,
	CALLBACK_UWM_ON_PLAYBACK_TIME,
	CALLBACK_UWM_ON_VOLUME_CHANGE,

	// playlist_callback
	CALLBACK_UWM_ON_ITEM_FOCUS_CHANGE,
	CALLBACK_UWM_ON_PLAYBACK_ORDER_CHANGED,
	CALLBACK_UWM_ON_PLAYLIST_SWITCH,
};
