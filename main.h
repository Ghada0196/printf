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

int _printf(const char *format, ...);
void write_char(char c);
int print_number(int n, int len);
int handle_c(va_list arg);
int handle_s(va_list arg);
int handle_d(va_list arg);

#endif
