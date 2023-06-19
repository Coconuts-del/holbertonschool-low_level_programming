#include <stdio.h>

/**
 * main - prints the alphabet in lowercase except e q using only putchar
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char lower_Char;

	for (lower_Char = 'a'; lower_Char <= 'z'; lower_Char++)
	{
		if ((lower_Char != 'e') && (lower_Char != 'q'))
			putchar (lower_Char);
	}

	putchar ('\n');
	return (0);
}
