#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

int _printf(const char *format, ...);
int _printf_char(va_list args);
int _printf_string(va_list args);
int _printf_percent(va_list args);
int _printf_integer(va_list args);
int __printf_integer(int nb, int count);
int _putchar(char c);

int _abs(int c);

int handle_format(char format, va_list args);

#endif
