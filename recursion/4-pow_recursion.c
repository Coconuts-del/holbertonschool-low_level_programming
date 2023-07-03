#include "main.h"
/**
* _pow_recursion - returns the value of x raised to the power of y
* @x : x  int a elever a puissance y
* @y : y  puissance de x
* Return: (int)
*/

int _pow_recursion(int x, int y)
{
	if (y < 2)
		if (y < 0)
			return (-1);
		else
			return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
