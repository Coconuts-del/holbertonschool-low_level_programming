#include "main.h"

/**
 * print_sign - checks positive 0 or negative number
 * @n : check value
 * Return: (1 0 -1) positive 0 negative
 */


int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{       _putchar('0');
		return (0);
	}
	_putchar('-');
	return (-1);
}
