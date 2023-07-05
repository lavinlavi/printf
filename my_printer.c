#include "main.h"

int print_my_dec(va_list the_args);
int print_my_int(va_list the_args);

/**
 * print_my_string - function to print a string
 * @the_agrs: the string to be printed
 *
 * Return: the function returns the length of the printed string.
 */

int print_my_string(va_list the_args)
{
	char *s;
	int i, size;

	s = va_arg(the_args, char *);

	if (s == NULL)
	{
		s = "(null)";
		size  = _strlen_recursion(s);
		for (i = 0; i < size; i++)
			_putchar(s[i]);
		return (size);
	}
	else
	{
		size = _strlen_recursion(s);
		for (i = 0; i < size; i++)
			_putchar(s[i]);
		return (size);
	}
	return (-1);
}

/**
 * print_my_int - function to print an integer
 *
 * @the_args: the integer argument of the function.
 *
 * Return: returns the number of printed characters.
 */

int print_my_int(va_list the_args)
{
	int n = va_arg(args, int);
	int num, last = n % 10, digit, exp = 1;
	int  i = 1;

	n = n / 10;
	num = n;

	if (last < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		last = -last;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = n;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			i++;
		}
	}
	_putchar(last + '0');

	return (i);
}

/**
 * print_my_dec - function to print a decimal.
 *
 * @the_args: the next argument of the function.
 *
 * Return: returns the number of characters printed.
 */

int print_my_dec(va_list the_args)
{
	int n = va_arg(the_args, int);
	int num, last = n % 10, digit;
	int  i = 1;
	int exp = 1;

	n = n / 10;
	num = n;

	if (last < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		last = -last;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = n;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			i++;
		}
	}
	_putchar(last + '0');

	return (i);
}
