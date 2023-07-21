#include "variadic_functions.h"

/**
 * sum_them_all - sum of all its parameters
 * @separator : argument contains string to be printed between arguments
 * @n :  argument contains number of arguments of variadic argument
 * @... : variadic argument
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	if (separator != NULL)
	{
		va_start(ap, n);
		for (i = 0; i < n; i++)
			printf("%d%s", va_arg(ap, int), separator);
		va_end(ap);
	}
	printf("\n");
}
