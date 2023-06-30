#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 *
 * @str  :  str
 * Return: ptr
*/

char *cap_string(char *str)
{
	char *ptr = str;
	char sep_words[] = {9, 10, 32, 33, 34, 40, 41, 44, 46, 59, 63, 123, 125};
	int i;
	int aig = 1;

	for ( ; *str; str++)
	{
		if (aig && *str >= 97 && *str <= 122)
			*str -= 32;
		aig = 0;
		for (i = 0; i < 12; i++)
		{
			if (*str == sep_words[i])
				aig = 1;
		}
	}
	return (ptr);
}
