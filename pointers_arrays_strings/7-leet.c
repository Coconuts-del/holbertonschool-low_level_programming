#include "main.h"

/**
 * leet - encodes a string into 1337
 *
 * @str  :  str
 * Return: ptr
*/

char *leet(char *str)
{
	char *ptr = str;
	char c[] = {'a', 'e', 'o', 't', 'l'};
	char n[] = {4, 3, 0, 7, 1};
	int i;

	for ( ; *str; str++)
	{
		for (i = 0; i < 5; i++)
		{
			if (*str == c[i] || *str == c[i] - 32)
				*str = n[i] + '0';
		}
	}

	return (ptr);
}
