#include "main.h"

void buffer_print(char arr_buffer[], int *buf);
/**
 * _printf - variation of c-library's standard print f function
 *@format: stores the required format
 *
 * Return: returns the characters to be printed.
 */

int _printf(const char * format, ...)
{
	int i, chars_printed = 0;
	int index_buf = 0;
	va_list my_list;
	char buffer[BUFF_SIZE];

	if (format == NULL)
		return (-1);

	va_start (my_list, format);

	for (i = 0; format&& format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			buffer[index_buf++] = format[i];
			if (index_buf == BUFF_SIZE)
				buffer_print(buffer, &index_buf);
			chars_printed++;
		}
	}
	buffer_print(buffer, &index_buf);

	va_end(my_list);
	return (chars_printed);
}

/**
 * buffer_print - prints whatever is in the buffer
 * @buffer: characters in an array
 * @index_buf: index at which to add next char by specifying the length
 */

void buffer_print(char arr_buffer[], int *buf)
{
	if (*buf > 0)
		write(1, &arr_buffer[0], *buf);

	*buf = 0;
}

