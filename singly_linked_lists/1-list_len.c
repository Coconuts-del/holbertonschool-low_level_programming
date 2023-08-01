#include "lists.h"

/**
 * list_len -  returns the number of elements of a list_t list
 * @h  : pointer to the head of a list
 * Return: number of elements of a list
*/

size_t list_len(const list_t *h)
{
	int nb = 0;

	while (h)
	{
		nb++;
		h = h->next;
	}
	return (nb);
}
