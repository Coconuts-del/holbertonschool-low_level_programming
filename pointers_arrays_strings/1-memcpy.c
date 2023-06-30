#include "main.h"

/**
* _memcpy - copies n bytes from memory area src to memory area des
*
* @src  : pointeur sur memory area
* @dest : pointeu  sur memory area
* @n    : nbre de bytes a modifier
*
* Return: (char)
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
