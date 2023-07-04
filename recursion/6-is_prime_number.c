#include "main.h"
/**
* is_prime_number - function returns 1 ==> the input integer is a prime number,
* otherwise return 0
* @n : n  int checking if it is a prime number
* Return: (int)
*/

int is_prime_number(int n)
{
	if (n == 1 || n < 1)
		return (0);
	if (n % 2 == 0 || n % 3 == 0 || n % 5 == 0 || n % 7 == 0)
		return (0);
	return (1);
}

