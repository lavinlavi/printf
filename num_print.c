#include "main.h"

/**
 * print_int - a function to print integers
 * @the_args: object containing the arguments of the
 * variadic function.
 * Return: the number of characters printed.
 */
int print_int(va_list the_args)
{
	int num, len, temp, last, n;
	char es;

	num = va_arg(the_args, int);
	temp = num;
	n = 1;

	if (num < 1)
	{
		num = -1 * num;
		temp = num;
		es = '-';
		write(1, &es, 1);
	}
	last = num % 10;
	while (temp > 10)
	{
		temp /= 10;
		n *= 10;
	}
	while (n != 1)
	{
		temp = num - (num % n);
		temp  /= n;
		es = temp + '0';
		write(1, &es, 1);
		num %= n;
		n /= 10;
		len++;
	}
	last = last + '0';
	es = last;
	write(1, &es, 1);

	return (len++);
}

