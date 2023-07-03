#include "main.h"

/**
* _print_rev_recursion - prints a string in reverse,
*  followed by a new line,to stdout
*
* @s : s = valeur de s *s = address of s
* Return: (void)
*/

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
