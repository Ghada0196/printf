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

void handle_c(va_list arg)
{
	char c;

	c = va_arg (arg, int);

	write_char(c);
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
		write_char(s[i]);
		i++;
	}
}

/**
 * print_number - print a number
 * @n: the number
 *
 * Return: nothing
 */

void print_number(int n)
{
	int num = n;

	if (num < 0)
	{
		write_char('-');
		num = -num;
	}

	if ((num / 10) > 0)
		print_number(num / 10);

	write_char(num % 10 + '0');
}

/**
 * handle_d - print the integer provided for %d
 * @arg: the list of arguments provided
 *
 * Return: nothing
 */

void handle_d(va_list arg)
{
	int num;

	num = va_arg(arg, int);
	
	print_number(num);
}

