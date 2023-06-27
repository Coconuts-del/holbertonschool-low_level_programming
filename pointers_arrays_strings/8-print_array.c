#include <stdio.h>
#include "main.h"

/**
* print_array - prints n elements of array of intergers,followed by a new line
*
* @a : a = first element of the array *a = address of a
* @n  :  numbers of elements of the array to be printed
* Return: (void)
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf(", ");
	}
	printf("\n");
}
