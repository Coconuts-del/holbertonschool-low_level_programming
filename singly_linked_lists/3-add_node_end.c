#include "lists.h"

/**
 * add_node_end  -  adds a new node at the end of a list_t list
 * @head  : pointer to the head of a list
 * @str   : data to be add at the end of the list
 * Return: the address of the new elementi(success), NULL (failed)
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp;

	if (str == NULL)
		return (NULL);
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = NULL;
	if (*head  == NULL)
	{
		*head = new;
		return (new);
	}

	temp = *head;
	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next = new;
	return (new);

}

/**
* _strlen  - returns the length of a string
*
* @s : s = valeur de s *s = address of s
* Return: (unsigned int)
*/

unsigned int _strlen(const char *s)
{
	unsigned int i;

	for (i = 0; s[i];)
		i++;
	return (i);
}
