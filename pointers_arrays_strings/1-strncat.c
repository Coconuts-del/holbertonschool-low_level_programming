#include "main.h"
#include "2-strlen.c"

/**
* _strncat - append the string pointed to by src to dest without (\n)
* to the buffer pointed to by dest
*
* @dest : dest= first element of the array *dest = address of dest
* @src  : src = first element of the arrau *src  = address of src
* @n    : n  =  nombre octets a concatener
* Return: (char)
*/

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int lg = _strlen(dest);
	int k = n;

	for (i = 0; (src[i] != '\0'); i++)
	{
		if (k > 0)
		{
			dest[lg++]  = src[i];
			k--;
		}
	}
	if (k == n)
		dest[lg] = '\0';

	return (dest);
}
