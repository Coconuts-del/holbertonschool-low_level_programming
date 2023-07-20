#include "3-calc.h"
/**
 * main - perform simple operations
 * @argc : number of arguments
 * @argv  : array of pointers to arguments
 * Return: 0
 */
int main(int argc, char **argv)
{
	int num1, num2, result;
	int (*f_op)(int, int);

	if (argc != 4)
	{
		printf("Error \n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	f_op = get_op_func(argv[2]);
	if (f_op == NULL)
	{
		printf("Error \n");
		exit(99);
	}
	result = f_op(num1, num2);
	printf("%d\n", result);

	return (0);
}
