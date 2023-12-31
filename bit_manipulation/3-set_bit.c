#include "main.h"

/**
 * set_bit  - set the value of a bit to 1 at a given index
 * @n      : pointer to number to modify
 * @index  : position of the bit wanted
 * Return: index (success) -1 (failed)
 */


int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = *n | 1ul << index;
	return (1);
}
