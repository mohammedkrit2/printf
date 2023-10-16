#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include "main.h"


int handle_other(char format)
{
	int count = 0;

	_putchar('%');
	count++;
	if (format)
	{
		_putchar(format);
		count++;
	}

	return (count);
}


int handle_output(char format, va_list args)
{
	int count = 0;

	if (format == 'c')
	{
		char c = va_arg(args, int);

		count += _putchar(c);
	}
	else if (format == 's')
	{
		char *str = va_arg(args, char *);

		count += handle_string(str);
	}
	else if (format == '%')
	{
		_putchar('%');
		count++;
	}
	else if (format == 'd' || format == 'i')
	{
		int n = va_arg(args, int);

		if (n < 0)
		{
			_putchar('-');
			count++;
			n = -n;
		}
		count += nbr_digits(n);
		print_nbr(n);
	}
	else
	{
		count += handle_other(format);
	}
	return (count);
}

