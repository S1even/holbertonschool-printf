#include "main.h"

/**
 */

format_t ftypes[] = {
	{"c", _printf_char},
	{"s", _printf_string},
	{"i", _printf_integer},
	{"d", _printf_integer},
	{"%", _print_perc},
	{NULL, NULL}
};

int _printf(const char *format, ...)
{
	va_list args;
	int printed_chars = 0;
	const char *ptr;
	int i;

	va_start(args, format);

	for (ptr = format; *ptr != '\0'; ptr++)
	{
		if (*ptr == '%')
		{
			ptr++;
			for (i = 0; ftypes[i].specifier != NULL; i++)
			{
				if (*(ftypes[i].specifier) == *ptr)
				{
					printed_chars += ftypes[i].f(args);
					break;
				}
			}
			if (ftypes[i].specifier == NULL)
			{
				_putchar('%');
				_putchar(*ptr);
				printed_chars += 2;
			}
		}
		else
		{
			_putchar(*ptr);
			printed_chars++;
		}
	}
	va_ends(args);

	return (printed_chars);
}
