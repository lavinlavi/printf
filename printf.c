#include "main.h"
/**
 * _printf - function to print a formatted string
 *
 * @format: pointer to required string
 *
 * Return: returns the number of printed characters.
 */

int _printf(const char *format, ...)
{
	int i, chars_printed, sp_chars_printed;
	va_list the_args;

	va_start(the_args, format);
	chars_printed = 0;

	if (*format == '\0')
	{
		return (-1);
	}

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '%')
			{
				write(1, &format[i], 1);
				chars_printed++;
				i++;
			}
			else
			{
				sp_chars_printed = print_special(&format[i], the_args);
				if (sp_chars_printed == -1)
				{
					return (-1);
				}
				chars_printed += sp_chars_printed;
			   	i++;
			}
		}

		else
		{
			write(1, &format[i], 1);
			chars_printed++;
		}
	}
	va_end(the_args);
	return (chars_printed);
}
