#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * _printf_integer - print integer
 * @args: arguments of the function
 * Return: count
 */

int _printf_integer(va_list args)
{
	int count = 0, i, j;
	int number = va_arg(args, int);
	char buffer[64];
	unsigned int n;

	if (!number)
	{
		_putchar('0');
		return (1);
	}

	if (number < 0)
	{
		_putchar('-');
		n = -number;
		count++;
	}

	else
		n = number;

	i = 0;
	while (n != 0)
	{
		buffer[i++] = (n % 10) + '0';
		n /= 10;
	}

	for (j = i - 1; j >= 0; j--)
	{
		_putchar(buffer[j]);
		count++;
	}

	return (count);
}
