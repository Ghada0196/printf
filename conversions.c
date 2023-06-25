#include "main.h"

/**
 * handle_c - print the character provided for %c
 * @arg: the list of arguments provided
 *
 * Return: nothing
 */

void handle_c(va_list arg)
{
	char c;

	c = va_arg (arg, int);

	write (1, &c, 1);
}

/**
 * handle_s - print the string provided for %s
 * @arg: the list of arguments provided
 *
 * Return: nothing
 */

void handle_s(va_list arg)
{
	char *s;
	int i = 0;

	s = va_arg (arg, char *);

	while (s[i])
	{
		write (1, &s[i], 1);
		i++;
	}
}
