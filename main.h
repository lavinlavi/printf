#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/* utils.c */
int get_string_length(const char *);
int print_string(char *);
char *convert_integer_to_string(long int, int);

/* printf.c */
int my_printf(const char *, ...);

/* handler.c */
int handle_format(const char *, va_list);
int handle_percent(const char *, va_list, int *);

/* printers */
int print_formatted_string(va_list);
int print_formatted_char(va_list);
int print_formatted_integer(va_list);
int print_formatted_binary(va_list);
int print_formatted_rot(va_list);
int print_formatted_unsigned(va_list);
int print_formatted_octal(va_list);
int print_formatted_hexadecimal_low(va_list);
int print_formatted_hexadecimal_upp(va_list);
int print_formatted_pointer(va_list);
int print_formatted_rev_string(va_list);

/* _putchar.c */
int my_putchar(char);
int buffer(char);

/**
 * struct format_specifier - Format Specifier Structure
 *
 * @type: Format specifier
 * @function: Function associated with the format specifier
 **/
typedef struct format_specifier
{
	char type;
	int (*function)(va_list);
} format_specifier;

#endif /* MAIN_HEADER */

