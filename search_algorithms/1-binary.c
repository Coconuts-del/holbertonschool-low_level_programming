#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 *      using the Binary search algorithm
 * @array: pointer to the first element of th array to search in
 * @size : number of elements of the array
 * @value : value to search
 * Return: first match index (success) -1 (otherwise)
 */

int binary_search(int *array, size_t size, int value)
{
	int i, beg_idx = 0, end_idx = size - 1, mid_idx = 0;

	if (array == NULL)
		return (-1);

	for (i = beg_idx; beg_idx  <= end_idx; i++)
	{
		mid_idx = (end_idx + beg_idx) / 2;

		printf("Searching in array: ");
		for (i = beg_idx; i <= end_idx; i++)
		{
			if (i != beg_idx)
				printf(", ");
			printf("%d", array[i]);
		}
		printf("\n");

		if (array[mid_idx] == value)
			return (mid_idx);
		if (array[mid_idx] < value)
			beg_idx = mid_idx + 1;
		else
			end_idx = mid_idx - 1;
	}
	return (-1);
}
