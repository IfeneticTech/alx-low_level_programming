#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string.
 * @s: The string to be measured.
 *
 * Return: The length of the string.
 */

int _strlen_recursion(char *s)
{
	int artit = 0;

	if (*s)
	{
		artit++;
		artit += _strlen_recursion(s + 1);
	}

	return (artit);
}
