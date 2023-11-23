#include "main.h"

/**
 * binary_to_uint - a program that converts binary numbers
 * to integers/decimal numbers
 *
 * @b: a character pointer to a string containing the
 * binary numbers
 *
 * Return: the converted decimal (output)
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int len;
	size_t r = 0;
	size_t t = 0;
	size_t surm = 0;
	size_t porw = 1;
	int based = 2;

	if (b == NULL)
		return (0);
	for (len = 0; b[len] != '\0'; len++)
		;
	if (len == 1 && (b[0] == '0' || b[0] == '1'))
	{
		return (b[0] - 48);
	}
	for (r = 0; b[r] != '\0'; r++)
	{
		if (b[r] != '0' && b[r] != '1')
		return (0);
		for (t = len - 1; t > 0; t--)
		porw = porw * based;
		surm = surm + (porw * (b[r] - 48));
		len--;
		porw = 1;
	}
	return (surm);
}
