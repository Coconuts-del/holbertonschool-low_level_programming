#include "main.h"

/**
 * print_chessboard - afficher un  chessboard
 * @a  : tableau a 2 dimensisons
 * Return: void
*/

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8;  i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar (a[i][j]);
		}
		_putchar ('\n');
	}
}
