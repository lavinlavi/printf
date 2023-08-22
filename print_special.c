#include "main.h"

int print_special(const char *format, va_list the_args)
{
	int i,num, len, temp, last, n;
	char *s;
	char es;
	len = 0;


	if (format[1] == 'd')
	{

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

		while(temp > 10)
		{
			temp = temp/10;
			n = n * 10;
		}
		while(n != 1)
		{
			temp = num - num % n;
			temp = temp / n;
			temp = temp + '0';
			es = temp;
			write(1, &es, 1);
			num = num % n;
			n = n / 10;
			len++;
		}
		last = last + '0';
		es = last;
		write(1, &es, 1);
		return(len++);
	}
	if (format[1]== 'i')
	{
		num = va_arg(the_args, int);

	}
	if (format[1] == 'c')
	{
		s = va_arg(the_args, char*);
		write(1, &s, 1);
		return (1);
	}
	if (format[1]== 's')
	{
		s = va_arg(the_args, char*);
		
		len = 0;

		for (i = 0; s[i] != '\0'; i++)
		{
			write(1, &s[i], 1);
			len++;
		}
		
		return(len);

	}

	return (0);
}

