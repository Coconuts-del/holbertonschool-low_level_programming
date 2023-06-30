#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - affiche a partir du premier caracter commun le reste de la chaine
 * @s   : chaine a ttester
 * @accept  : contient les caracteres a rechercher
 * Return: adresse  chaine
*/

char *_strpbrk(char *s, char *accept)
{
	int i;

	for (; *s; s++)
	{
		for (i = 0; accept[i]; i++)
		{
			if (accept[i] == *s)
				return (s);
		}
	}
	return (NULL);
}
