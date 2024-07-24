#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

/**
 *
 */

typedef struct format
{
	char *specifier;
	int (*f)(va_list args);
} format_types;

int _putchar(char c);
int _printf(const char *format, ...);
int _printf_char(va_list args);
int _printf_string(va_list args);
int _printf_percent(va_list args);
int _printf_integer(va_list args);
void print_number(int n, int *printed_chars);

#endif
