
/*
 * module.h - Definition of a module for Speech Dispatcher
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
 * $Id: module.h,v 1.6 2008-06-27 12:28:43 hanke Exp $
 */

#ifndef MODULE_H
#define MODULE_H

#include <stdlib.h>
#include <glib.h>
#include <spd_audio.h>

typedef struct {
	char *name;
	char *filename;
	char *configfilename;
	char *debugfilename;
	char *progdir;
	char *configdir;
	int pipe_in[2];
	int pipe_out[2];
	int pipe_speak[2];
	FILE *stream_out;
	int stderr_redirect;
	pid_t pid;
	int working;
	AudioID *audio;
	pthread_mutex_t read_mutex;
	pthread_cond_t reply_cond;
	pthread_cond_t event_cond;
	GString *reply;
	GString *event;
	gboolean reading_message;
	gboolean reading_events;
	gboolean waiting_for_reply;
} OutputModule;
#define AUDIOID_TOOPEN ((AudioID*) (-1))

GList *detect_output_modules(GList *modules, const char *modules_dirname, const char *user_config_dirname, const char *config_dirname);
OutputModule *load_output_module(const char *mod_name, const char *mod_prog,
				 const char *mod_cfgfile, const char *mod_dbgfile,
				 const char *mod_prog_dir, const char *mod_cfg_dir);
int unload_output_module(OutputModule * module);
int reload_output_module(OutputModule * old_module);
int output_module_debug(OutputModule * module);
int output_module_nodebug(OutputModule * module);
void destroy_module(OutputModule * module);

void module_add_load_request(char *module_name, char *module_cmd,
			     char *module_cfgfile, char *module_dbgfile,
			     char *module_cmd_dir, char *module_cfg_dir);
void module_load_requested_modules(void);
guint module_number_of_requested_modules(void);

#endif
