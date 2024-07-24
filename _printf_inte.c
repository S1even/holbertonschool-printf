#include <stdio.h>
#include <stdarg.h>
#include "main.h"

int _printf_integer(va_list args)
{
	int nb = va_arg(args, int);
	int count = 0;

	if (!nb)
	{
		_putchar('0');
		count++;
	}
	else
	{
		if (nb < 0)
		{
			_putchar('-');
			nb = _abs(nb);
			count++;
		}
		count += __printf_integer(nb, 0);
	}
	return (count);

}

int __printf_integer(int nb, int count)
{
	if (nb <= 0)
		return (count);
	count = __printf_integer(nb / 10, count + 1);
	_putchar((nb % 10) + '0');
	return (count);
}

int _abs(int c)
{
	return (c * ((c > 0) - (c < 0)));
}
