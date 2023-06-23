#include <stdio.h>

/**
 * main - prints numbers 1 to 100 with remplacing *3 by Fizz *5 by Buzz
 * *3 et *5 by FizzBuzz
 * Return: Always 0 (Success)
 */


int main(void)

{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");
	return (0);
}
