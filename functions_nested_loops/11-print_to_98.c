#include <stdio.h>

/**
 * print_to_98 - print all natural number form nb1 to 98
 * @n: integer
 * Return: (void)
 */


void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			if (n == 98)
			{
				printf("%d", n);
				printf("\n");
			}
			else
			{
				printf("%d, ", n);
			}
		}
	}
	else
	{
		for (; n >= 98; n--)
		{
			if (n == 98)
			{
				printf("%d", n);
				printf("\n");
			}
			else
			{
				printf("%d, ", n);
			}
		}
	}
}
