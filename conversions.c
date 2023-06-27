#include "main.h"

/**
 * write_char - print one character 
 * @c: the character
 *
 * Return: nothing
 */

void write_char(char c)
{
	write(1, &c, 1);
}

/**
 * handle_c - print the character provided for %c
 * @arg: the list of arguments provided
 *
 * Return: nothing
 */

int handle_c(va_list arg)
{
	char c;

	c = va_arg (arg, int);

	write_char(c);

	return (-1);
}

/**
 * handle_s - print the string provided for %s
 * @arg: the list of arguments provided
 *
 * Return: nothing
 */

int handle_s(va_list arg)
{
	char *s;
	int i = 0;

	s = va_arg (arg, char *);

	while (s[i])
	{
		write_char(s[i]);
		i++;
	}

	return (i);
}

/**
 * print_number - print a number
 * @n: the number
 *
 * Return: nothing
 */

int print_number(int n, int len)
{
	int num = n;

	len++;
	if (num < 0)
	{
		write_char('-');
		num = -num;
	}

	if ((num / 10) > 0)
	{
		print_number(num / 10, len);
	}

	write_char(num % 10 + '0');
	return (len);
}

/**
 * handle_d - print the integer provided for %d
 * @arg: the list of arguments provided
 *
 * Return: nothing
 */

int handle_d(va_list arg)
{
	int num;
	int len = 0;

	num = va_arg(arg, int);
	
	print_number(num, len);

	return (len);
}
