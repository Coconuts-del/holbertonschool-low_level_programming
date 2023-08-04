#include "main.h"

/**
 * flip_bits - returns number of bits to flip to get from one number to another
 * @n      : number to compare to m to determine number of bits
 * @m      : number to compare to n to determine number of bits
 * Return: nbbit
 */


unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor, nbbit;

	xor = n ^ m;
	nbbit = 0;
	while (xor > 0)
	{
		nbbit += (xor & 1);
		xor = xor >> 1;
	}
	return (nbbit);
}
