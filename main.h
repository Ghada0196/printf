#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stddef.h>

int _printf(const char *format, ...);
void handle_c(va_list arg);
void handle_s(va_list arg);

#endif
