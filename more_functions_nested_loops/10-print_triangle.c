#include "main.h"

/**
 * print_triangle - function that draws a diagonanl line in the terminal
 * @size: number time to draw # test
 * Return: (void)
 */


void print_triangle(int size)
{
	int i, j;

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size; j++)
		{
			if (j >= i)
			{
				_putchar('#');
				if (j == size)
				{
					_putchar('\n');
				}
			}
			else
			{
				_putchar(' ');
			}
		}
	}
	if (size <= 0)
		_putchar('\n');
}
