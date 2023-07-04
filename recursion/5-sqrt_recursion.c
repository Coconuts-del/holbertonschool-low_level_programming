#include "main.h"
/**
* find_sqrt - cherche si n has a square root
* @n : n  nombre dont on cherche la racine carre
* @r : r  r * r = n ==> is square root
* Return: (int)
*/

int find_sqrt(int n, int r)
{
	if (r * r > n)
		return  (-1);
	else if (r * r == n)
		return (r);
	else
		return (find_sqrt(n, r + 1));
}

/**
* _sqrt_recursion - r returns the natural square root of a number
* @n : n  nombre dont on cherche la racine carre
* Return: (int)
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (find_sqrt(n, 0));
}
