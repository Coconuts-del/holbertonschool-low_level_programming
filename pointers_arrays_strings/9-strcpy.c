#include "main.h"

/**
* _strcpy - copies the string pointed to by src,including (\0)
* to the buffer pointed to by dest
*
* @dest : dest= first element of the array *dest = address of dest
* @src  : src = first element of the arrau *src  = address of src
* Return: (void)
*/

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
