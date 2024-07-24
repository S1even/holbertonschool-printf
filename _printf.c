#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * _printf - clone of printf
 * @format: character string
 * Return: the number of characters printed
 */

int _printf(const char *format, ...)
{
	int i = 0, j, number = 0;
	char opt1, opt2;
	va_list args;

	va_start(args, format);
	while (format[i] != '\0')
	{
		int print = 0;
		int (*f)(va_list args);

		opt1 = format[i];
		j = 1;

		if (opt1 == '%')
		{
			opt2 = format[i + 1];
			if (opt2 == '\0')
			{
				va_end(args);
				return (-1);
			}
			f = get_format_function(opt2);
			if (f)
			{
				number += f(args);
				j = 2;
				print = 1;
			}
		}
		if (print == 0)
		{
			number += 1;
			_putchar(opt1);
		}
		i += j;
	}
	va_end(args);
	return (number);
}

/**
 * get_format_function - function to return the function format
 * @opt2: option to check
 * Return: fonction or null
 */

int (*get_format_function(char opt2))(va_list)
{
	int index;
	format_t ftypes[] = {
		{"c", _printf_char},
		{"s", _printf_string},
		{"i", _printf_integer},
		{"d", _printf_integer},
		{"%", _printf_percent},
	};

	for (index = 0; index < 5; index++)
	{
		if (ftypes[index].op[0] == opt2)
		{
			return (ftypes[index].f);
		}
	}
	return (NULL);
}
