#include "main.h"

/**
* _memset - fills memory with a constant byte
*
* @s    : pointeur
* @b    : constante a mettre dans les n bytes to the memory area s
* @n    : nbre de bytes a modifier
*
* Return: (char)
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
