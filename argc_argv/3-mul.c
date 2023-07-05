#include <stdio.h>
#include <stdlib.h>

/**
 * main -  program that multiplies two numbers
 * @argc : number of arguments
 * @argv : array of pointers to arguments
 * Return: Always 0.
*/


int main(int argc __attribute__((unused)), char **argv)
{
	int sum;

	sum = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", sum);
	return (0);
}
