#include "main.h"
#include <stdlib.h>

/**
 * calloc  - allocates memory array using malloc and call calloc if malloc failed 
 *
 * @nmenb : number of elements
 * @size  : size of each element
 * Return: pointeur (success) exit 98.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	
	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		ptr = calloc(nmemb, size);
		if (ptr == NULL)
			return (NULL);
	}
	return (ptr);
}


