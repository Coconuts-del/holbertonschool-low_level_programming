#include <stdio.h>

/**
 * main - prints the alphabet in lowercase and uppercase using only putchar
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char lower_Upper;

	for (lower_Upper = 'a'; lower_Upper <= 'z'; lower_Upper++)
	{
		putchar (lower_Upper);
	}

	for (lower_Upper = 'A'; lower_Upper <= 'Z'; lower_Upper++)
	{
		putchar (lower_Upper);
	}

	putchar ('\n');
	return (0);
}
