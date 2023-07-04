#include <stdio.h>

/**
 * main -  program that prints its name, followed by a new line
 * @argc : number of arguements
 * @argv : array of pointers to arguements
 * Return: Always 0.
*/


int main(int argc __attribute__((unused)), char **argv)
{
	printf("%s\n", argv[0]);
	return (0);
}
