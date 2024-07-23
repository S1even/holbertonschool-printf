#include "main.h"

/**
 */

int _printf(const char *format, ...)
{
	char opt[2];
	int (*formatter)(va_list);
	int num_char = 0;

	va_list args;
	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			opt[0] = *format;
			opt[1] = '\0';
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
