#include "lists.h"

/**
 * print_list -  prints all elements of a list_t list
 * @h  : pointer to the head of a list
 * Return: number of elements of a list
*/

size_t print_list(const list_t *h)
{
	int nb = 0;

	while (h)
	{
		nb++;
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (nb);
}
