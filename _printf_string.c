#include "main.h"

/**
 * _printf_string - print a string of characters
 * @args: character of the arguments
 * Return: the index
 */

int _printf_string(va_list args)
{
	int index = 0;
	char *str = va_arg(args, char*);

	if (str == NULL)
		str = ("null");

	while (*str != 0)
	{
		_putchar(*str);
		str++;
		index++;
	}
	return (index);
}
