#include "main.h"

/**
 * print_number - print number chars
 * @n: integer parameter
 * Return: 0
 */

void print_number(int n)
{
	unsigned int fr;

	fr = n;

	if (n < 0)
	{
		_putchar('-');
		fr = -n;
	}

	if (fr / 10 != 0)
	{
		print_number(fr / 10);
	}
	_putchar((fr % 10) + '0');
}
