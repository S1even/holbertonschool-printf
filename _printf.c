#include "main.h"

/**
 * _printf - clone of printf
 * @format: character string
 * Return: the number of characters printed
 */

int _printf(const char *format, ...)
{
	int index, strFormat_leng = 0;
	va_list args;

	if (format == NULL || format[0] == '\0' ||
	(format[0] == '%' && format[1] == '\0'))
		return (-1);

	va_start(args, format);

	for (index = 0; format[index] != '\0'; index++)
	{

		if (format[index] != '%')
		{
			_putchar(format[index]);
			strFormat_leng++;
		}

		else
		{
			index++;
			strFormat_leng += handle_format(format[index], args);
		}
	}

	va_end(args);

	return (strFormat_leng);
}
