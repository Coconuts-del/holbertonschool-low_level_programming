#include "main.h"
#include <stddef.h>

/**
 *  *_strchr -  locates a character in a string
 *
 * @s  :  pointeur
 * @c  :  caractere a trouver
 * Return:  char * ou null
*/

char *_strchr(char *s, char c)
{
	for ( ; *s; s++)
	{
		if (*s == c)
			return (s);
	}
	return (NULL);
}
