#include "main.h"
#include "2-strlen.c"

/**
* _strcat - append the string pointed to by src to dest without (\n)
* to the buffer pointed to by dest
*
* @dest : dest= first element of the array *dest = address of dest
* @src  : src = first element of the arrau *src  = address of src
* Return: (char)
*/

char *_strcat(char *dest, char *src)
{
	int i;
	int lg = _strlen(dest);

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[lg++]  = src[i];
	}
	dest[lg] = '\0';
	return (dest);
}
