#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stddef.h>
#include <stdlib.h>

/***
 * struct handle - Struct handle
 * @c: conversion specifier
 * @f: function
 */

typedef struct handle
{
	char c;
	int (*f)(va_list);
} handle_t;

int _printf(const char *format, ...);
void write_char(char c);
void print_number(int n);
int handle_c(va_list arg);
int handle_s(va_list arg);
int handle_d(va_list arg);
int handle_percent(va_list arg __attribute__((unused)));
int get_handle(char c, va_list arg);

#endif
