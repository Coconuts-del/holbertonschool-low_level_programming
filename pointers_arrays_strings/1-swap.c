#include "main.h"

/**
* swap_int - swaps the values of two integers
*
* @a : a = valeur de a *a = address of a
* @b : a = valeur de b *b = address of b
* Return (void)
*/

void swap_int(int *a, int *b)
{
	int tmpval;

	tmpval = *a;
	*a = *b;
	*b = tmpval;
}

