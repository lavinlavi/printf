#include "main.h"

int print_str(va_list the_args);

/**
 * print_char - a funtion to print a single character to the screen.
 * @the_args: the object with the function arguments.
 * Return: returns 1 if character printed/
 */

int print_char(va_list the_args)
{
	char *s;

	s = va_arg(the_args, char*);
	write(1, &s, 1);

	return (1);
}

/**
 * print_str - a functiont o print a string of characters
 * @the_args: the obkect with the function arguments.
 * Return: returns the number of characters printed.
 */

int print_str(va_list the_args)
{
	char *s;
	int len, i;

	s = va_arg(the_args, char*);
	len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		write(1, &s[i], 1);
		len++;
	}
	return (len);
}

