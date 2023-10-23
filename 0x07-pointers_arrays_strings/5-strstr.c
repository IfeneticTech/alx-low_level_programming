#include "main.h"

/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 *
 * Return: Always 0 (Success)
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *r = haystack;
		char *h = needle;

		while (*r == *h && *h != '\0')
		{
			r++;
			h++;
		}

		if (*h == '\0')
			return (haystack);
	}

	return (0);
}
