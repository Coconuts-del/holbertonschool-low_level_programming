#include <stdlib.h>
#include "main.h"
/**
 * str_concat - pointer to a newly allocated space in memory which contains
 * contents of s1 followed by the contents of s2 and null terminated.
 *
 * @s1 : string to be concatened
 * @s2 : string to be concatened
 * Return:  pointer to the concatened string (success) NULL (failed)
 */

char *str_concat(char *s1, char *s2)
{
	char *s3;
	unsigned int i, j = 0, lg, lg1, lg2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
/* size strings and memory allocation*/
	lg1 = _strlen(s1);
	lg2 = _strlen(s2);
	lg = lg1 + lg2 + 1;
	s3 = malloc(lg * sizeof(char));
	if (s3  == NULL)
		return (NULL);
/*  concatenation s1 and s2 in s3 */
	for (i = 0; i < lg1; i++)
	{
		*(s3 + j++) = *(s1 + i);
	}
	for (i = 0; i < lg2; i++)
	{
		*(s3 + j++) = *(s2 + i);
	}
	*(s3 + j++) = '\0';
	return (s3);
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
