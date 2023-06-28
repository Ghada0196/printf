#include "main.h"
#include <stdio.h>

/**
 * get_handle - get handle
 * @c: conversion speciifer
 *
 * Return: new length
 */

int get_handle(char c, va_list arg)
{
	int i = 0;
	int len = 0;
	handle_t handles[] = {
		{'c', handle_c},
		{'s', handle_s},
		{'d', handle_d},
		{'i', handle_d}
	};

	for (i = 0; i < 4; i++)
	{
		if (c == handles[i].c)
			len = (handles[i].f)(arg);
	}

	return (len);
}
