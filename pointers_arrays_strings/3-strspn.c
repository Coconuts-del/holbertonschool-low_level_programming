#include "main.h"
#include <stddef.h>

/**
 * _strspn -  calcule  la  longueur  (en  octet)  du segment initial de s
 * qui ne contient que des octets présents dans accept *
 * @s   : tester  arret du comptage des qu un caractere de s ne fait pas partie
 * accept
 * @accept  :  contient les caracters valides
 * Return: int
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, cpt = 0;

	for (i = 0 ; s[i] != '\0' && cpt == i; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
				cpt++;
		}
	}
	return (cpt);
}
