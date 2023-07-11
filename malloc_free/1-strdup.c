#include <stdlib.h>
#include "main.h"
/**
 * _strdup - pointer to a newly allocated space in memory which contains copy
 * of the string given as a parameter.
 *
 * @str  :  string to be copied
 * Return:  pointer to the duplicated string (success) NULL (failed)
 */

char *_strdup(char *str)
{
	char *cpstr;
	unsigned int i, lg;

	if (str == NULL)
		return (NULL);
	lg = _strlen(str) + 1;
	cpstr = malloc(lg * sizeof(char)) ;

	if (cpstr == NULL)
		return (NULL);
	for (i = 0; i < lg;  i++)
	{
		*(cpstr + i) = *(str + i);
	}
	return (cpstr);
}

/**
* _strlen  - returns the length of a string
*
* @s : s = valeur de s *s = address of s
* Return: (unsigned int)
*/

unsigned int _strlen(char *s)
{
	unsigned int i;

	for (i = 0; (s[i] != '\0'); i++)
	{
	}
	return (i);
}
