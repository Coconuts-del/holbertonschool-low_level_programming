#include "main.h"

/**
 * times_table - print 9 times table starting 0
 *
 * Return: (void)
 */


void times_table(void)
{
	int n1, n2, n3;

	for (n1 = 0; n1 <= 9; n1++)
	{
		_putchar('0');

		for (n2 = 1; n2 <= 9; n2++)
		{
			_putchar(',');
			_putchar(' ');

			n3 = (n1 * n2);
			if (n3 <= 9)
				_putchar(' ');
			else
				_putchar((n3 / 10) + '0');
			_putchar((n3 % 10) + '0');
		}
		_putchar('\n');
	}
}
