#include "main.h"

/**
 * print_chessboard - Entry point
 * @a: array
 * Return: Always 0 (Success)
 */
void print_chessboard(char (*a)[8])
{
	int g;
	int k;

	for (g = 0; g < 8; g++)
	{
		for (k = 0; k < 8; k++)
		{
			_putchar(a[g][k]);
		}
		_putchar('\0');
	}
}
