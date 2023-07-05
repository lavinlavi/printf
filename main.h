#ifndef __MAIN__
#define __MAIN__

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);
int print_my_int(va_list the_agrs);
int print_my_dec(va_list the_args);
int print_my_str(va_list the_args);
int _putchar(char s);
int _strlen_recursion(char *s);
int handle_spec_print(const char *my_fmt, int *ind, va_list the_args);

#endif
