#include "main.h"
#include <stdlib.h>

/**
 * _calloc  - allocates memory array using malloc,call calloc if malloc failed
 *
 * @nmemb : number of elements
 * @size  : size of each element
 * Return: pointeur (success) null (failure).
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		if (nmemb == 0 || size == 0)
			return (NULL);

		ptr = calloc(nmemb, size);
		if (ptr == NULL)
			return (NULL);

	}
	return (ptr);
}


