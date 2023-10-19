#include "main.h"
/**
 * cap_string - function that capitalizes all words of a sring.
 * @s: pointer to string.
 *
 * Return: pointer to s.
 */
char *cap_string(char *s)
{
	int u;

/* scan through string */
	u = 0;
	while (s[u] != '\0')
	{/* if next character after count is a char, capitalize it */
		if (s[0] >= 97 && s[0] <= 122)
		{
			s[0] = s[0] - 32;
		}
		if (s[u] == ' ' || s[u] == '\t' || s[u] == '\n'
				|| s[u] == ',' || s[u] == ';' || s[u] == '.'
				|| s[u] == '!' || s[u] == '?' || s[u] == '"'
				|| s[u] == '(' || s[u] == ')' || s[u] == '{' || s[u] == '}')
		{
			if (s[u + 1] >= 97 && s[u + 1] <= 122)
			{
				s[u + 1] = s[u + 1] - 32;
			}
		}
		u++;
	}
	return (s);
}
