#ifndef __main__
#define __main__

#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>

int _printf(const char *format, ...);
int print_special(const char *format,va_list the_args);

#endif
