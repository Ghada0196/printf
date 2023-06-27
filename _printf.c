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
	int i, final_len;
	va_list op;

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
			switch(format[i + 1]) {
					case 'c':
					final_len += handle_c(op);
					break;
					case 's':
					final_len += handle_s(op);
					break;
					case 'd':
					final_len += handle_d(op);
					break;
					case 'i':
					final_len += handle_d(op);
					break;
					case '%':
					write_char('%');
					final_len--;
					break;
					};

					i = i +2;
		}

		write (1, &format[i], 1);
	}

	va_end (op);

	/* returning length of format */

	return (final_len);
}
