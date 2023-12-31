#include "function_pointers.h"

/**
 * array_iterator -  executes a function given as a parameter
 *
 * @array : array to print
 * @action : pointer to the function
 * @size  : size of the array
 * Return: nothing.
 */


void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size;  i++)
		{
			action(array[i]);
		}
	}
}
