#include "main.h"

/**
 * _islower - checks for lowercase
 * @c: check value
 * Return: (1) if lowercase
 */


int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
