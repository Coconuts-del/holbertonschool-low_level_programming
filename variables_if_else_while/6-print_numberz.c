#include <stdio.h>

/**
 * main - prints all numbers fron 0 to 9 using ascii value of numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int nmbr;

	for (nmbr = 48; nmbr < 58; nmbr++)
	{
		putchar(nmbr);
	}

	putchar ('\n');
	return (0);
}
