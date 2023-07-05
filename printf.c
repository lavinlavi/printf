#include "main.h"

/**
 * _printf - function to print string.
 *
 * @format: the format it prints in.
 *
 * Return: the length of the printed string.
 */

int _printf(const char *format, ...)
{
	int i, chars_printed = 0;
	int spec_printed = 0;
	va_list my_args;

	if (!format)
	{
		return (-1);
	}
	va_start(my_args, format);

	for (i = 0; format && format[i] !='\0'; i++)
	{
		if (format[i] != '%')
		{
			write(1, &format[i], 1);
			chars_printed++;
		}
		if (format[i] == '%' && format[(i + 1)] == '%')
		{
			write(1, "%%", 2);
			chars_printed += 2;
		}
		else
		{
			spec_printed = handle_spec_print(format, &i, my_args);
			chars_printed += spec_printed;
		}
	}
	return (chars_printed);
	va_end(my_args);
}
