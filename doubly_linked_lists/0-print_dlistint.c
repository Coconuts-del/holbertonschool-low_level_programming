#include "lists.h"

/**
 * print_dlistint -  prints all elements of a dlistint_t list
 * @h  : pointer to the head of a list
 * Return: number of nodes
*/

size_t print_dlistint(const dlistint_t *h)
{
	int nb = 0;

	while (h)
	{
		nb++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nb);
}
