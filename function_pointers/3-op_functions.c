#include "function_pointers.h"

/**
 * op_add - addition
 * @a : first argument
 * @b : second argument
 * Return: sum of the 2 arguments
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtraction
 * @a : first argument
 * @b : second argument
 * Return: difference of the 2 arguments
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication
 * @a : first argument
 * @b : second argument
 * Return: product of the 2 arguments
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division
 * @a : first argument
 * @b : second argument
 * Return: result of the divison of the 2 arguments
 */
int op_div(int a, int b)
{
	if (b != 0)
		return (a / b);

	printf("Error\n");
	exit(100);
}

/**
 * op_mod - modulo
 * @a : first argument
 * @b : second argument
 * Return: remainder of the divison of the 2 arguments
 */
int op_mod(int a, int b)
{
	if (b != 0)
		return (a % b);

	printf("Error\n");
	exit(100);
}
