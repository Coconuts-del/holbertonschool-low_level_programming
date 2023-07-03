#include "main.h"
/**
* factorial - returns the factorial of a given number
*
* @n : n  int dont on veut le factoriel
* Return: (int)
*/

int factorial(int n)
{
	if (n < 2)
		if (n < 0)
			return (-1);
		else
			return (1);
	else
		return (n * factorial(n - 1));
}

