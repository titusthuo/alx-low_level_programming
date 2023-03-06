#include "main.h"

/**
 * print_chessboard - Prints a chessboard
 * @a: array
 * Return: Always 0 (Succsess)
 */
void print_chessboard(char (*a)[8])
{
	int j, k;

	for (j = 0; a[j][8]; j++)
	{
		for (k = 0; k < 8; k++)
			_putchar(a[j][k]);

		_putchar('\n');
	}
}
