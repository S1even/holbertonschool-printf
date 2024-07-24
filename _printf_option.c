#include "main.h"

/**
 * handle_format - the format specifier
 * @format: the specifier format
 * @args: arguments a function
 * Return: number of characters
 */

int handle_format(char format, va_list args)
{
	int strFormat_leng = 0;


	if (format == 'c')
	{
		strFormat_leng = strFormat_leng + _printf_char(args);
	}

	else if (format == 's')
	{
		strFormat_leng = strFormat_leng + _printf_string(args);
	}

	else if (format == '%')
	{
		strFormat_leng = strFormat_leng + _printf_percent(args);
	}

	else if (format == 'd' || format == 'i')
	{
		strFormat_leng = strFormat_leng + _printf_integer(args);
	}
	else
	{
		_putchar('%');
		_putchar(format);
		strFormat_leng = strFormat_leng + 2;
	}
	return (strFormat_leng);
}
