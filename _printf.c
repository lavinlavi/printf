#include "main.h"

/**
 * my_printf - Custom printf function that produces output according to a format
 * @format: The format string
 *
 * Return: The number of characters printed (excluding the null byte used to end output to strings)
 **/
int my_printf(const char *format, ...)
{
	int outputSize;
	va_list arguments;

	if (format == NULL)
		return (-1);

	outputSize = get_string_length(format);
	if (outputSize <= 0)
		return (0);

	va_start(arguments, format);
	outputSize = handle_format(format, arguments);

	my_putchar(-1);
	va_end(arguments);

	return (outputSize);
}

