#include "main.h"

/**
 * print_chessboard - prints chessboard.
 *
 * @a: rows
 * Return: Nothing
 */

void print_chessboard(char (*a)[81])
{
	int i, j;

	for (i = 0, i < 8, i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
