#include <stdio.h>

/**
 * main - prints all numbers fron 0 to 9 followed by ", " using ascii value
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int nmbr;

	for (nmbr = 48; nmbr < 58; nmbr++)
	{
		putchar(nmbr);
		if (nmbr != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar ('\n');
	return (0);
}
