#include "main.h"

/**
 * print_last_digit - iprints the last digit of a number
 * @n : argument
 * Return: (z)
 */


int print_last_digit(int n)
{
	int z;

	z = (n % 10);
	if (z < 0)
	{
	z = (z * -1);
	}
	_putchar (z + '0');
	return (z);
}
