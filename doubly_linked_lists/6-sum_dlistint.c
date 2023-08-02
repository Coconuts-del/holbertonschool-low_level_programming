#include "lists.h"

/**
 * sum_dlistint -  return the sum of all the data(n) of a dlistint_t list
 * @head  : head of a list
 * Return: the sum
*/

int sum_dlistint(dlistint_t *head)
{
	int i, sum;

	sum = 0;
	for (i = 0; head ; i++)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
