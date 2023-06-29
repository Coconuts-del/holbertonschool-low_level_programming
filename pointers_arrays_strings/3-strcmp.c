#include "main.h"

/**
* _strcmp - compare 2 files and exit if it different
*
* @s1   : s1 = first element of the array *s1 = address of s1
* @s2   : s2 = first element of the array *s2 = address of s2
* Return: (int)
*/

int _strcmp(char *s1, char *s2)
{
	for (; (*s1 && *s2); s1++, s2++)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
	}
	return (0);
}

