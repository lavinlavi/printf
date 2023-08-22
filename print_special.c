#include "main.h"

int print_special(const char *format, va_list the_args)
{

	if (format[1] == 'd')
	{
		return(print_int(the_args));
	}
	if (format[1]== 'i')
	{
		return(print_int(the_args));

	}
	if (format[1] == 'c')
	{
		return(print_char(the_args));
	}
	if (format[1]== 's')
	{
		return(print_str(the_args));

	}
	else
	{
		return(0);
	}
}

