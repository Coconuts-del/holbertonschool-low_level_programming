#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - print a name
 *
 * @name : name of the personn
 * @f : name of function
 *
 * Return: nothing.
 */


void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name); /* (f)(name) */
}
