#include "main.h"
/**
 * _strcmp - compares two strings.
 * @s1: pointer to first string.
 * @s2: pointer to second string.
 * Return: value less than 0 if string is less than the other,
 * value greater than 0 if string is greater than the other
 * and 0 if strings are equal.
 */

int _strcmp(char *s1, char *s2)
{
	int u, m;

	u = 0;
	while (s1[u] == s2[u] && s1[u] != '\0')
	{
		u++;
	}

	m = s1[u] - s2[u];
	return (m);
}
