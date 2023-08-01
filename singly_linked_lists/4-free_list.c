#include "lists.h"

/**
 * free_list - free a list_t list
 * @head  : pointer to the head of a list
 * Return: nothing
*/

void free_list(list_t *head)
{
	list_t *tmp = NULL;

	while (head)
	{
		tmp = head->next;
		if (head->str)
			free(head->str);
		free(head);
		head = tmp;
	}
}
