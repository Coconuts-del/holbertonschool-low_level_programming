#include <stdlib.h>

/**
 * create_array - creates a chars array,initializes it with a specific char.
 *
 * @size : size  array's number of elements
 * @c    : c      character of initializing
 * Return: (char)
 */

char *create_array(unsigned int size, char c)
{
	char *ch;
	unsigned int i;

	if (size == 0)
		return (NULL);
	ch = malloc(size * sizeof(char));
	if (ch == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		ch[i] = c;
	}
	return (ch);
}
