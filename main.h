#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 *
 */

typedef struct format_types
{
	char *op;
	int (*f)(va_list args);
} format_types;

int _putchar(char c);
int _printf(const char *format, ...);
int (*get_format_funct(char *opt))(va_list);
int _printf_string(va_list args);
int _printf_char(va_list args);
int _printf_percent(va_list args);

#endif
