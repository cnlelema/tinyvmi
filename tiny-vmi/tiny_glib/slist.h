/* GLIB - Library of useful routines for C programming
 * Copyright (C) 1995-1997 Peter Mattis, Spencer Kimball and Josh MacDonald
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, see <http://www.gnu.org/licenses/>.
 */

/*
 * Modified by the GLib Team and others 1997-2000. See the AUTHORS
 * file for a list of people on the GLib Team. See the ChangeLog
 * files for a list of changes. These files are distributed with
 * GLib at ftp://ftp.gtk.org/pub/gtk/.
 */

#ifndef __G_SLIST_H__
#define __G_SLIST_H__

#include "types.h"

typedef struct _GSList GSList;

struct _GSList
{
 gpointer data;
 GSList *next;
};

/* Singly linked lists
 */

GSList* g_slist_alloc (void) ;

void g_slist_free (GSList *list);

void g_slist_free_1 (GSList *list);

#define g_slist_free1 g_slist_free_1

void g_slist_free_full (GSList *list,
 GDestroyNotify free_func);

GSList* g_slist_append (GSList *list,
 gpointer data) ;

GSList* g_slist_prepend (GSList *list,
 gpointer data) ;

GSList* g_slist_insert (GSList *list,
 gpointer data,
 gint position) ;

GSList* g_slist_insert_sorted (GSList *list,
 gpointer data,
 GCompareFunc func) ;

GSList* g_slist_insert_sorted_with_data (GSList *list,
 gpointer data,
 GCompareDataFunc func,
 gpointer user_data) ;

GSList* g_slist_insert_before (GSList *slist,
 GSList *sibling,
 gpointer data) ;

GSList* g_slist_concat (GSList *list1,
 GSList *list2) ;

GSList* g_slist_remove (GSList *list,
 gconstpointer data) ;

GSList* g_slist_remove_all (GSList *list,
 gconstpointer data) ;

GSList* g_slist_remove_link (GSList *list,
 GSList *link_) ;

GSList* g_slist_delete_link (GSList *list,
 GSList *link_) ;

GSList* g_slist_reverse (GSList *list) ;

GSList* g_slist_copy (GSList *list) ;

// GLIB_AVAILABLE_IN_2_34
GSList* g_slist_copy_deep (GSList *list,
 GCopyFunc func,
 gpointer user_data) ;

GSList* g_slist_nth (GSList *list,
 guint n);

GSList* g_slist_find (GSList *list,
 gconstpointer data);

GSList* g_slist_find_custom (GSList *list,
 gconstpointer data,
 GCompareFunc func);

gint g_slist_position (GSList *list,
 GSList *llink);

gint g_slist_index (GSList *list,
 gconstpointer data);

GSList* g_slist_last (GSList *list);

guint g_slist_length (GSList *list);

void g_slist_foreach (GSList *list,
 GFunc func,
 gpointer user_data);

GSList* g_slist_sort (GSList *list,
 GCompareFunc compare_func) ;

GSList* g_slist_sort_with_data (GSList *list,
 GCompareDataFunc compare_func,
 gpointer user_data) ;

gpointer g_slist_nth_data (GSList *list,
 guint n);

#define g_slist_next(slist) ((slist) ? (((GSList *)(slist))->next) : NULL)


#endif /* __G_SLIST_H__ */
