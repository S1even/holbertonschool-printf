#include "main.h"

/**
 * _printf_percent - print the character '%'
 * @args: argument of function
 * Return: 1
 */

int _printf_percent(va_list args)
{
	(void)args;
	_putchar('%');
	return (1);
}
