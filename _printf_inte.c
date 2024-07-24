#include "main.h"

/**
 * _printf_integer - prints an integer
 * @n: integer to print
 * Return: number of characters printed
 */

int _printf_integer(int n)
{
	unsigned int num;
	int count = 0;

	if (n < 0)
	{
		_putchar('-');
		count++;
		num = -n;
	}

	else
	{
		num = n;
	}

	if (num / 10)
	{
		count += _printf_integer(num / 10);
	}

	_putchar((num % 10) + '0');
	count++;

	return (count)
}
