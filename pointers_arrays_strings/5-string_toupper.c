#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 *
 * @str  :  str
 * Return: ptr
*/

char *string_toupper(char *str)
{
	char *ptr = str;

	for ( ; *str; str++)
	{
		if (*str >= 97 && *str <= 122)
			*str -= 32;
}
	return (ptr);
}
