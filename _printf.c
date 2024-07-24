#include "main.h"

/**
 */

int _printf(const char *format, ...)
{
	char opt[2];
	int (*formatter)(va_list);
	int num_char = 0, i;

	va_list args;
	va_start(args, format);

	while (format[i])
	{
		if (format[i] == '%')
		{
			format++;
			opt = format[i];
			if (format[i] == '\0')
			{
				va_end(args);
				return(-1);
			}

			formatter = get_format_funct(opt);

			if (formatter)
				num_char += formatter(args);
		}
		
		else
		{
			_putchar(*format);
			num_char++;
		}
		format++;
	}
	va_end(args);
	return (num_char);
}


int (*get_format_funct(char *opt))(va_list)
{
	int i;

	format_types fopt[] = {
		{"c", _printf_char},
		{"s", _printf_string},
		{"%", _printf_percent},
		{NULL, NULL}
	};

	for (i = 0; fopt[i].op != NULL; i++)
		if (fopt[i].op[0] == opt[0] && fopt[i].op[1] == '\0')
			return (fopt[i].f);
	return (NULL);
}
