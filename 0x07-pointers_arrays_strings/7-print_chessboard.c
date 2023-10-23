#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: pointer ro pieces to print
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int g, k;

	for (g = 0; g < 8; g++)
	{
		for (k = 0; k < 8; k++)
		{
			_putchar(a[g][k]);
		}
		_putchar('\0');
	}
}
