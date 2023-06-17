#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints size of various types on the computer it is compiled
 * and run on
 * followed by a newline
 * Return: Always 0 (Success)
 */


int main(void)

{
	fprintf(stderr, "Size of a char: %d byte(s) \n", sizeof(char));
	fprintf(stderr, "Size of an int: %d byte(s) \n", sizeof(int));
	fprintf(stderr, "Size of a long int: %d byte(s) \n", sizeof(long int));
	fprintf(stderr, "Size of a long long int: %d byte(s) \n",
						sizeof(long long int));
	fprintf(stderr, "Size of a float: %d byte(s) \n", sizeof(float));

	return (0);
}
