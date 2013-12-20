#ifndef GO_GDK_PIXBUF_H
#define GO_GDK_PIXBUF_H

#include <gdk-pixbuf/gdk-pixbuf.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdarg.h>
#include <string.h>

//static const gchar* to_gcharptr(const char* s) { return (const gchar*)s; }
static guchar* to_gucharptr(void* s) { return (guchar*)s; }

static inline GdkPixbuf* toGdkPixbuf(void* p) { return GDK_PIXBUF(p); }

static inline gchar* toGstr(const char* s) { return (gchar*)s; }
static inline char* toCstr(const gchar* s) { return (char*)s; }

static inline void freeCstr(char* s) { free(s); }

static inline char** makeCstrv(int count) {
	return (char**)malloc(sizeof(char*) * count);
}

static inline void freeCstrv(char** cstrv) { free(cstrv); }
static inline char* getCstr(char** cstrv, int n) { return cstrv[n]; }
static inline void setCstr(char** cstrv, int n, char* str) { cstrv[n] = str; }
static inline gchar* getGstr(gchar** gstrv, int n) { return gstrv[n]; }

#endif
