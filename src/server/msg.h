/*
 * msg.h - Client/server messages for Speech Dispatcher
 *
 * Copyright (C) 2001, 2002, 2003 Brailcom, o.p.s.
 *
 * This is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2, or (at your option)
 * any later version.
 *
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 * $Id: msg.h,v 1.31 2008-07-01 08:50:46 hanke Exp $
 */

#ifndef MSG_H
#define MSG_H

#define NEWLINE							"\r\n"
#define OK_LANGUAGE_SET					"201 OK LANGUAGE SET" NEWLINE
#define OK_PRIORITY_SET					"202 OK PRIORITY SET" NEWLINE
#define OK_RATE_SET						"203 OK RATE SET" NEWLINE
#define OK_PITCH_SET					"204 OK PITCH SET" NEWLINE
#define OK_PUNCT_MODE_SET				"205 OK PUNCTUATION SET" NEWLINE
#define OK_CAP_LET_RECOGN_SET			"206 OK CAP LET RECOGNITION SET" NEWLINE
#define OK_SPELLING_SET					"207 OK SPELLING SET" NEWLINE
#define OK_CLIENT_NAME_SET				"208 OK CLIENT NAME SET" NEWLINE
#define OK_VOICE_SET					"209 OK VOICE SET" NEWLINE
#define OK_STOPPED						"210 OK STOPPED" NEWLINE
#define OK_PAUSED						"211 OK PAUSED" NEWLINE
#define OK_RESUMED						"212 OK RESUMED" NEWLINE
#define OK_CANCELED						"213 OK CANCELED" NEWLINE
#define OK_TABLE_SET					"215 OK TABLE SET" NEWLINE
#define OK_OUTPUT_MODULE_SET			"216 OK OUTPUT MODULE SET" NEWLINE
#define OK_PAUSE_CONTEXT_SET			"217 OK PAUSE CONTEXT SET" NEWLINE
#define OK_VOLUME_SET					"218 OK VOLUME SET" NEWLINE
#define OK_SSML_MODE_SET				"219 OK SSML MODE SET" NEWLINE
#define OK_NOTIFICATION_SET				"220 OK NOTIFICATION SET" NEWLINE

#define OK_CUR_SET_FIRST				"220 OK CURSOR SET FIRST" NEWLINE
#define OK_CUR_SET_LAST					"221 OK CURSOR SET LAST" NEWLINE
#define OK_CUR_SET_POS					"222 OK CURSOR SET TO POSITION" NEWLINE
#define OK_CUR_MOV_FOR					"223 OK CURSOR MOVED FORWARD" NEWLINE
#define OK_CUR_MOV_BACK					"224 OK CURSOR MOVED BACKWARD" NEWLINE
#define C_OK_MESSAGE_QUEUED				"225"
#define OK_MESSAGE_QUEUED				"225 OK MESSAGE QUEUED" NEWLINE
#define OK_SND_ICON_QUEUED				"226 OK SOUND ICON QUEUED" NEWLINE
#define OK_MSG_CANCELED					"227 OK MESSAGE CANCELED" NEWLINE

#define OK_RECEIVE_DATA					"230 OK RECEIVING DATA" NEWLINE
#define OK_BYE							"231 HAPPY HACKING" NEWLINE

#define OK_CLIENT_LIST_SENT				"240 OK CLIENTS LIST SENT" NEWLINE
#define C_OK_CLIENTS					"240"
#define OK_MSGS_LIST_SENT				"241 OK MSGS LIST SENT" NEWLINE
#define C_OK_MSGS						"241"
#define OK_LAST_MSG						"242 OK LAST MSG SAID" NEWLINE
#define C_OK_LAST_MSG					"242"
#define OK_CUR_POS_RET					"243 OK CURSOR POSITION RETURNED" NEWLINE
#define C_OK_CUR_POS					"243"
#define OK_TABLE_LIST_SENT				"244 OK TABLE LIST SEND" NEWLINE
#define C_OK_TABLES						"244"
#define OK_CLIENT_ID_SENT				"245 OK CLIENT ID SENT" NEWLINE
#define C_OK_CLIENT_ID					"245"
#define OK_MSG_TEXT_SENT				"246 OK MESSAGE TEXT SENT" NEWLINE
#define C_OK_MSG_TEXT					"246"
#define OK_HELP_SENT					"248 OK HELP SENT" NEWLINE
#define C_OK_HELP						"248"
#define OK_VOICE_LIST_SENT				"249 OK VOICE LIST SENT" NEWLINE
#define C_OK_VOICES						"249"
#define OK_MODULES_LIST_SENT			"250 OK MODULE LIST SENT" NEWLINE
#define C_OK_MODULES					"250"
#define OK_GET							"251 OK GET RETURNED" NEWLINE
#define C_OK_GET						"251"

#define OK_INSIDE_BLOCK					"260 OK INSIDE BLOCK" NEWLINE
#define OK_OUTSIDE_BLOCK				"261 OK OUTSIDE BLOCK" NEWLINE

#define OK_DEBUGGING					"262 OK DEBUGGING SET" NEWLINE

#define OK_PITCH_RANGE_SET				"263 OK PITCH RANGE SET" NEWLINE

#define OK_NOT_IMPLEMENTED				"299 OK BUT NOT IMPLEMENTED -- DOES NOTHING" NEWLINE

#define ERR_NO_CLIENT					"401 ERR NO CLIENT" NEWLINE
#define ERR_NO_SUCH_CLIENT				"402 ERR NO SUCH CLIENT" NEWLINE
#define ERR_NO_MESSAGE					"403 ERR NO MESSAGE" NEWLINE
#define ERR_POS_LOW						"404 ERR POSITION TOO LOW" NEWLINE
#define ERR_POS_HIGH					"405 ERR POSITION TOO HIGH" NEWLINE
#define ERR_ID_NOT_EXIST				"406 ERR ID DOESNT EXIST" NEWLINE
#define ERR_UNKNOWN_ICON				"407 ERR UNKNOWN ICON" NEWLINE
#define ERR_UNKNOWN_PRIORITY			"408 ERR UNKNOWN PRIORITY" NEWLINE
#define ERR_RATE_TOO_HIGH				"409 ERR RATE TOO HIGH" NEWLINE
#define ERR_RATE_TOO_LOW				"410 ERR RATE TOO LOW" NEWLINE
#define ERR_PITCH_TOO_HIGH				"411 ERR PITCH TOO HIGH" NEWLINE
#define ERR_PITCH_TOO_LOW				"412 ERR PITCH TOO LOW" NEWLINE
#define ERR_VOLUME_TOO_HIGH				"413 ERR PITCH TOO HIGH" NEWLINE
#define ERR_VOLUME_TOO_LOW				"414 ERR PITCH TOO LOW" NEWLINE

#define ERR_PITCH_RANGE_TOO_HIGH		"415 ERR PITCH RANGE TOO HIGH" NEWLINE
#define ERR_PITCH_RANGE_TOO_LOW			"416 ERR PITCH RANGE TOO LOW" NEWLINE

#define ERR_INTERNAL					"300 ERR INTERNAL" NEWLINE
#define ERR_COULDNT_SET_PRIORITY		"301 ERR COULDNT SET PRIORITY" NEWLINE
#define ERR_COULDNT_SET_LANGUAGE		"302 ERR COULDNT SET LANGUAGE" NEWLINE
#define ERR_COULDNT_SET_RATE			"303 ERR COULDNT SET RATE" NEWLINE
#define ERR_COULDNT_SET_PITCH			"304 ERR COULDNT SET PITCH" NEWLINE
#define ERR_COULDNT_SET_PUNCT_MODE		"305 ERR COULDNT SET PUNCT MODE" NEWLINE
#define ERR_COULDNT_SET_CAP_LET_RECOG	"306 ERR COULDNT SET CAP LET RECOGNITION" NEWLINE
#define ERR_COULDNT_SET_SPELLING		"308 ERR COULDNT SET SPELLING" NEWLINE
#define ERR_COULDNT_SET_VOICE			"309 ERR COULDNT SET VOICE" NEWLINE
#define ERR_COULDNT_SET_TABLE			"310 ERR COULDNT SET TABLE" NEWLINE
#define ERR_COULDNT_SET_CLIENT_NAME		"311 ERR COULDNT SET CLIENT_NAME" NEWLINE
#define ERR_COULDNT_SET_OUTPUT_MODULE	"312 ERR COULDNT SET OUTPUT MODULE" NEWLINE
#define ERR_COULDNT_SET_PAUSE_CONTEXT	"313 ERR COULDNT SET PAUSE CONTEXT" NEWLINE
#define ERR_COULDNT_SET_VOLUME			"314 ERR COULDNT SET VOLUME" NEWLINE
#define ERR_COULDNT_SET_SSML_MODE		"315 ERR COULDNT SET SSML MODE" NEWLINE
#define ERR_COULDNT_SET_NOTIFICATION	"316 ERR COULDNT SET NOTIFICATION" NEWLINE
#define ERR_COULDNT_SET_DEBUGGING		"317 ERR COULDNT SET DEBUGGING" NEWLINE

#define ERR_NO_SND_ICONS				"320 ERR NO SOUND ICONS" NEWLINE
#define ERR_CANT_REPORT_VOICES			"321 ERR MODULE CANT REPORT VOICES" NEWLINE
#define ERR_NO_OUTPUT_MODULE			"321 ERR NO OUTPUT MODULE LOADED" NEWLINE

#define ERR_ALREADY_INSIDE_BLOCK		"330 ERR ALREADY INSIDE BLOCK" NEWLINE
#define ERR_ALREADY_OUTSIDE_BLOCK		"331 ERR ALREADY OUTSIDE BLOCK" NEWLINE
#define ERR_NOT_ALLOWED_INSIDE_BLOCK	"332 ERR NOT ALLOWED INSIDE BLOCK" NEWLINE

#define ERR_COULDNT_SET_PITCH_RANGE		"340 ERR COULDNT SET PITCH RANGE" NEWLINE

#define ERR_NOT_IMPLEMENTED				"380 ERR NOT YET IMPLEMENTED" NEWLINE

#define ERR_INVALID_COMMAND				"500 ERR INVALID COMMAND" NEWLINE
#define ERR_INVALID_ENCODING			"501 ERR INVALID ENCODING" NEWLINE
#define ERR_MISSING_PARAMETER			"510 ERR MISSING PARAMETER" NEWLINE
#define ERR_NOT_A_NUMBER				"511 ERR PARAMETER NOT A NUMBER" NEWLINE
#define ERR_NOT_A_STRING				"512 ERR PARAMETER NOT A STRING" NEWLINE
#define ERR_PARAMETER_NOT_ON_OFF		"513 ERR PARAMETER NOT ON OR OFF" NEWLINE
#define ERR_PARAMETER_INVALID			"514 ERR PARAMETER INVALID" NEWLINE

#define EVENT_INDEX_MARK_C				"700"
#define EVENT_INDEX_MARK				EVENT_INDEX_MARK_C" INDEX MARK" NEWLINE
#define EVENT_BEGIN_C					"701"
#define EVENT_BEGIN						EVENT_BEGIN_C" BEGIN" NEWLINE
#define EVENT_END_C						"702"
#define EVENT_END						EVENT_END_C" END" NEWLINE
#define EVENT_CANCELED_C				"703"
#define EVENT_CANCELED					EVENT_CANCELED_C" CANCELED" NEWLINE
#define EVENT_PAUSED_C					"704"
#define EVENT_PAUSED					EVENT_PAUSED_C" PAUSED" NEWLINE
#define EVENT_RESUMED_C					"705"
#define EVENT_RESUMED					EVENT_RESUMED_C" RESUMED" NEWLINE

#endif /* MSG_H */
