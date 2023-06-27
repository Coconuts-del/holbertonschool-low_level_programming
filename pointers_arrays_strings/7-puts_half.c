#include "main.h"

/**
* puts_half - prints a string, followed by a new line, to stdout
*
* @str : str = valeur de str *str = address of str
* Return: (void)
*/

void puts_half(char *str)
{
	int i, j, k;

	for (i = 0; (str[i] != '\0'); i++)
	{
	}
	if (i % 2 == 0)
		j = i / 2;
	else
		j = (i + 1) / 2;

	for (k = j; k < i; k++)
	{
		_putchar (str[k]);
	}
	_putchar ('\n');
}
