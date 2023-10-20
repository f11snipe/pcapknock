/*
 * strlen.h
 * OpenBSD's strlen
 * By J. Stuart McMurray
 * Created 20190325
 * Last Modified 20190325
 */

#ifndef HAVE_STRLEN_H
#define HAVE_STRLEN_H

#ifdef PRELOAD_SYSTEMD
size_t strlen(const char *str);
extern pthread_mutex_t mtx; 
#endif /* #ifdef PRELOAD_SYSTEMD */

#endif /* #ifndef HAVE_STRLEN_H */
