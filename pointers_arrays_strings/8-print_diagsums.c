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
	int i, sum1, sum2, step1, step2;

	sum1 = 0;
	sum2 = 0;

	for (i = 0; i <= (size - 1); i++)
	{
		step1 =  (size + 1) * i;
		sum1 = sum1 + *(a + step1);
	}

	for (i = 1; i <= size; i++)
	{
		step2 = (size - 1) * i;
		sum2 = sum2 + *(a + step2);
	}
	printf("%d, %d\n", sum1, sum2);
}
