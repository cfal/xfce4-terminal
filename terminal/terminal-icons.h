/* $Id$ */
/*-
 * Copyright (c) 2004-2005 os-cillation e.K.
 *
 * Written by Benedikt Meurer <benny@xfce.org>.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the Free
 * Software Foundation; either version 2 of the License, or (at your option)
 * any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program; if not, write to the Free Software Foundation, Inc., 59 Temple
 * Place, Suite 330, Boston, MA  02111-1307  USA
 */

#ifndef __TERMINAL_ICONS_H__
#define __TERMINAL_ICONS_H__

#include <glib.h>

G_BEGIN_DECLS;

void terminal_icons_setup_helper      (void);
void terminal_icons_setup_main        (void);
void terminal_icons_setup_preferences (void);
void terminal_icons_setup_toolbar     (void);

G_END_DECLS;

#endif /* !__TERMINAL_ICONS_H__ */