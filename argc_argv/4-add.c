#include <stdio.h>
#include <stdlib.h>

/**
 * main -  program that add positive numbers
 * @argc : number of arguments
 * @argv : array of pointers to arguments
 * Return: Always 0.
*/


int main(int argc, char **argv)
{
	int i;
	long sum;

	sum = 0;
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			sum += atoi(argv[i]);
		}
		printf("%ld\n", sum);
	}
	else
		printf("0\n");
	return (0);
}
