#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - create a new struct of type dog_t
 *
 * @name : element of the structure
 * @age  : element of the structure
 * @owner : element of the structure
 *
 * Return: : pointer to the structure (success) NULL(failed)
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newD;
	int i, lgN, lgO;

	if (name == NULL || owner == NULL || age < 0)
		return (NULL);
	newD = malloc(sizeof(*newD));
	if (newD == NULL)
		return (NULL);
	for (lgN = 0; name[lgN]; lgN++)
	newD->name = malloc(lgN + 1);
	if (newD->name == NULL)
	{
		free(newD);
		return (NULL);
	}
	for (lgO = 0; owner[lgO]; lgO++)
	newD->owner = malloc(lgO + 1);
	if (newD->owner == NULL)
	{
		free(newD->name);
		free(newD);
		return (NULL);
	}
	for (i = 0; i < lgN; i++)
	{
		newD->name[i] = name[i];
	}
	newD->name[i] = '\0';
	newD->age = age;
	for (i = 0; i < lgO; i++)
	{
		newD->owner[i] = owner[i];
	}
	newD->owner[i] = '\0';

	return (newD);
}

