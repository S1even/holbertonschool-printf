#include "main.h"

/**
 */

int (*get_format_funct(char *opt))(va_list)
{
	int i;

	format_types fopt[] = {
		{"c", _printf_char},
		{"s", _printf_string},
		{"%", _printf_percent},
	};

	for (i = 0; i < 3; i++)
		if (fopt[i].op[0] == opt)
			return (fopt[i].f);
	return (NULL);
}
