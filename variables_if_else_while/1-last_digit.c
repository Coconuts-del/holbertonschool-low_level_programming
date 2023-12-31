#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints the last digit of the variable n  >6 ==0 0<n<6
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if ((n % 10) > 6)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, (n % 10));
	}
	else if ((n % 10) == 0)
	{
		printf("Last digit of %d is 0 and is 0\n", n);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n",
								n, (n % 10));
	}

	return (0);
}
