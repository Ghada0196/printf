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
	int i, final_len, j;
	va_list op;

	if (format == NULL)
		return (-1);

	while (format[len])
		len++;

	final_len = len;
	/* the printing part */

	va_start (op, format);

	for (i = 0; i < len; i++)
	{
		if (format[i] == '%')
		{
			/** got to use a struct with character and function as parameters instead */
			j = get_handle(format[i + 1], op);
			if (j != 0)
			{
				final_len += j;
				i = i + 2;
			}
		}

		write_char(format[i]);
	}

	va_end (op);

	/* returning length of format */

	return (final_len);
}
