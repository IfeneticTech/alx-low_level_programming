#include "main.h"
/**
 * string_toupper - function that changes all lowercase letters
 * of a string to uppercase.
 * @x: pointer to string.
 *
 * Return: pointer to uppercase string.
 */

char *string_toupper(char *x)
{
	int q;

	q = 0;

	while (x[q] != '\0')
	{
		if (x[q] >= 97 && x[q] <= 122)
		{
			x[q] = x[q] - 32;
		}
		q++;
	}
	return (x);
}
