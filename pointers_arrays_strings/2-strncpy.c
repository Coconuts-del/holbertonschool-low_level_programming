#include "main.h"

/**
* _strncpy - copies n caracteres de src dans dest
*
* @dest : dest= first element of the array *dest = address of dest
* @src  : src = first element of the arrau *src  = address of src
* @n    : numbers of characters to copy
* Return: (char)
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
