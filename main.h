#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

/**
 *
 */

typedef struct format_types
{
	char *types;
	int (*f)(va_list args);
} format_types;

int _putchar(char c);
int _printf(const char *format, ...);
int _printf_char(va_list args);
int _printf_string(va_list args);
int _printf_percent(va_list args);
int _printf_integer(va_list args);

#endif
