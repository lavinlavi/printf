#include "main.h"

/**
 * handle_spec_print - function to print arguments.
 *
 * @my_fmt - the string with the specifiers.
 * @ind: the current character.
 * @the_args: the arguments of the variadic function
 *
 * Return: returns the number of special characters printed.
 */

int handle_spec_print(const char *my_fmt, int *ind, va_list the_args)
{
	int sp_chars_printed = 0;
	
	if (*ind == 'c')
	{
		char s;

		s = va_arg(the_args, int);
		_putchar(s);
		sp_chars_printed = 1;
		return (sp_chars_printed);
	}
	if (*ind == 's')
	{

		sp_chars_printed = print_my_str(the_args);
		return (sp_chars_printed);
	}
	if (*ind == 'd')
	{
		sp_chars_printed = print_my_int(the_args);
		return (sp_chars_printed);
	}
	if (*ind == 'i')
	{
		sp_chars_printed = print_my_dec(the_args);
		return (sp_chars_printed);
	}
	
	return (sp_chars_printed - 1);
}

