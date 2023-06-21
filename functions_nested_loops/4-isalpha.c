#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: check value
 * Return: (1) if lowercase
 */


int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	return (0);
}
