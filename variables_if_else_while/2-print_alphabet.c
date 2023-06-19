#include <stdio.h>

/**
 * main - prints the alphabet in lowercase using only putchar
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char lower_Char;

	for (lower_Char = 'a'; lower_Char <= 'z'; lower_Char++)
	{
		putchar (lower_Char);
	}

	putchar ('\n');
	return (0);
}
