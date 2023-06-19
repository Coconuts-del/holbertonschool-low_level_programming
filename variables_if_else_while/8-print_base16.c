#include <stdio.h>

/**
 * main - prints all numbers of base16 (0 to 15)  using ascii value of numbers
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

	for (nmbr = 97; nmbr <= 102; nmbr++)
	{
		putchar(nmbr);
	}

	putchar ('\n');
	return (0);
}
