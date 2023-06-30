#include "main.h"
#include <stdio.h>

/**
 * print_diagsums -afficher les sommes des diagomales
 * @a  : tableau a 2 dimensisons
 * @size  : taill
 * Return: void
*/

void print_diagsums(int *a, int size)
{
	int sum1, sum2, i;

	sum1 = 0;
	sum2 = 0;
	for (i = 0; i < size;  i++)
	{
		sum1 = sum1 + a[i * size + i];
	}

	for (i = size - i; i >= 0; i--)
	{
		sum2 = sum2 + a[i * size + (size - i - 1)];
	}
	printf("%d, %d\n", sum1, sum2);
}
