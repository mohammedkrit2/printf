#include "main.h"

/**
 * _printf - our own printf
 * handle_string - function
 * that complet _printf
 * Return: count
 */

int handle_string(char *str)
{
	int i = 0;

	if (str == NULL)
	{
		handle_string("(null)");
		return (1);
	}
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}

int _printf(const char *format, ...)
{
	int count = 0;

	va_list args;

	va_start(args, format);

	if (!format || !format[0])
		return (-1);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			count += handle_output(*format, args);
			format++;
		}
		else
		{
			_putchar(*format);
			format++;
			count++;
		}
	}

	va_end(args);

	return (count);
}
