#include "main.h"
#include <stdlib.h>
/**
 * _printf - produces output according to a format
 * and returns length of string input
 * @format: the string
 *
 * Return: an integer that is the length of format
 */

int _printf(const char *format, ...)
{
	int len = 0;
	int i;
	va_list op;

	while (format[len])
		len++;

	/* the printing part */

	va_start (op, format);

	for (i = 0; i < len; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == 'c')
				handle_c(op);
			if (format[i + 1] == 's')
				handle_s(op);
			if (format[i + 1] == '%')
				i--;
			i = i + 2;
		}

		write (1, &format[i], 1);
	}

	va_end (op);

	/* returning length of format */

	return (len);
}
