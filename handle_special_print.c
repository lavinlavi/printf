#include "main.h"

/**
 * handle_special_print - handles the printing of the arguments
 * of variadic function.
 * @my_format: String that holds the arguments.
 * @buffer: the array of buff_size 1024 to handle print.
 * @my_list: list of the arguments to be printed.
 * Return: the function returns the number of printed characters.
 */

int handle_special_print(char *my_format, int *j, va_list my_list, char buffer[])
{
	int i;
	int chars_printed = -1;
	format_specs spec[] = {
		{'c': print_my_char}, {'d': print_my_int}, {'i': print_signed_dec}, {'s':print_my_string}, {'\0': NULL}
	};

	for (i = 0; spec[i].my_spec != '\0'; i++)
	{
		if(spec[i].my_spec == my_format[j])
		{
			return (spec[i].my_func(my_list, buffer));
	
		}
	}
	return (chars_printed + 1);
}

/**
 * print_my_int - takes a parameter and buffer and writes
 * the value given to output.
 *
 * @given_list: the next argument of the function.
 * @buffer: the buffer to which the value is to be written.
 *
 * Return: returns the number of printed characters.
 */

int print_my_int(va_list given_list, char *buffer)
{
	int n = va_arg(given_list, int);
	int num, last = n & 10, digit, exp = 1;
	int i;
}

/**
 * print_my_string - function to handle the printing of a string.
 * @given_list: the object containing the next argument in the function.
 * @buffer: the same buffer to be used for printing.
 * 
 * Return: returns the number of characters printed.
 */

int print_my_string(va_list given_list, char *buffer)
{

}

/**
 * print_signed_decimal - print the decimal passed.
 * @given_list: object containing the next argument in the function.
 * @buffer: the buffer to be used for printing.
 *
 * Return: returns the number of characters printed.
 */

int print_signed_decimal(va_list given_list, char *buffer)
{
}

/**
 * print_my_char - prints the character in the memory address.
 *
 * @given_list: object containing the next argument in the function.
 * @buffer: the buffer to be used for printing.
 *
 * Return: returns number of character printed.
 */

int print_my_char(va_list given_list, char *buffer)
{
	char c = va_args(given_list, char);
	int i = 1;
	if (c)
	{
		write(1, &buffer, 1);
	}
	return (i);
}

