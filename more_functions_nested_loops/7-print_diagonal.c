#include "main.h"

/**
 * print_diagonal - function that draws a diagonanl line in the terminal
 * @n: number time to draw \
 * Return: (void)
 */


void print_diagonal(int n)
{
	int i, j;

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			if (i == j)
			{
				_putchar('\\');
				_putchar('\n');
			}
			else
			{
				_putchar(' ');
			}
		}
	}
	if (n <= 0)
		_putchar('\n');
}
