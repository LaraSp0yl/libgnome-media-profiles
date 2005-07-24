/* gnome-media-profiles.h: public library API */

/*
 * Copyright (C) 2003 Thomas Vander Stichele
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public
 * License along with this library; if not, write to the
 * Free Software Foundation, Inc., 59 Temple Place - Suite 330,
 * Boston, MA 02111-1307, USA.
 */

#include <profiles/audio-profile.h>
#include <profiles/audio-profile-choose.h>
#include <profiles/audio-profile-edit.h>
#include <profiles/audio-profiles-edit.h>
#include <glade/glade.h>
#include <glade/glade-build.h>

void gnome_media_profiles_init (GConfClient *conf);
void gtk_dialog_build_children (GladeXML *self, GtkWidget *w,
				              GladeWidgetInfo *info);
GtkWidget *dialog_find_internal_child (GladeXML *xml,
				GtkWidget *parent,
				const gchar *childname);

