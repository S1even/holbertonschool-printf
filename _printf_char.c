#include "main.h"

/**
 * _printf_char - Print a character
 * @args: arguments of the function
 * Return: 1
 */

int _printf_char(va_list args)
{
	_putchar(va_arg(args, int));
	return (1);
}
