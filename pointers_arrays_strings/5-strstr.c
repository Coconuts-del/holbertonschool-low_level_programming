#include "main.h"
#include <stddef.h>

/**
 * _strstr - cherchee la 1ere occurence de la seconde chaine dans la premiere
 * @haystack : chaine a tester
 * @needle   : chaine a rechercher
 * Return: adresse  chaine
*/

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *h = haystack;
		char *n = needle;

		while (*n != '\0' && *n == *h)
		{
			n++;
			h++;
		}
		if (*n == '\0')
			return (haystack);
	}
	return (NULL);
}
