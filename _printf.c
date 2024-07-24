#include "main.h"

/**
 */

int _printf(const char *format, ...)
{
	format_typesfopt = get_format_types();
	va_list args;
	int i = 0, j, count = 0;
	int (f)(va_list);

	if (format == NULL)
		return (-1);

	va_start(args, format);

	while (format && format[i])
	{
		if (format[i] == '%')
		{
			i++;
			for (j = 0; fopt[j].fmt; j++)
			{
				if ((fopt[j].fmt) == format[i])
				{
					f = fopt[j].fn;
					count += f(args);
					break;
				}
			}
			if (fopt[j].fmt == NULL)
			{
				_putchar('%');
				_putchar(format[i]);
				count += 2;
			}
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
		i++;
	}

	va_end(args);
	return count;
}
