#include <stdio.h>

/**
 * main - prints all numbers fron 0 to 9
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int nmbr;

	for (nmbr = 0; nmbr < 10; nmbr++)
	{
		printf("%d", nmbr);
	}

	putchar ('\n');
	return (0);
}
