#include "main.h"

/**
 */

int _printf(const char *format, ...)
{
	int num_char = 0;
	va_list args;
	va_start(args, format);
	char opt[2];
	int (*formatter)(va_list);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			opt[0] = *format;
			opt[1] = '\0';
			formatter = get_format_func(opt);

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
