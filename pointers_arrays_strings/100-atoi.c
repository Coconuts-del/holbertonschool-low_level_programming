#include "main.h"
#include "2-strlen.c"

/**
* _atoi - convert a string to an integer if there is an integer in the string
*
* @s : s  first element of the string *s = address of s
*
* Return: (int)
*/

int _atoi(char *s)
{
	unsigned int num = 0;
	int i;
	int aig = 0;
	int nbmoins = 0;

	for (i = 0 ; i < _strlen(s); i++)
	{
		if (s[i] == '-')
			nbmoins++;

		if (s[i] >= '0' && s[i] <= '9')
		{
			aig = 1;
			num = num * 10  + (s[i] - '0');
		}
		else
		{
			if (aig == 1)
				break;
		}
	}

	if (nbmoins % 2  !=  0)
		num = num * -1;

	return (num);
}
