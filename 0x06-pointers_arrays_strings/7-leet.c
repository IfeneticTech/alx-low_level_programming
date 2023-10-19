#include "main.h"
/**
 * leet -function that encodes a string into 1337.
 * Letters a and A should be replaced by 4
 * Letters e and E should be replaced by 3
 * Letters o and O should be replaced by 0
 * Letters t and T should be replaced by 7
 * Letters l and L should be replaced by 1
 * @s: pointer to string.
 *
 * Return: pointer to s.
 */
char *leet(char *s)
{
	int g, c;
	char leetLetters[] = "aAeEoOtTlL";
	char leetNums[] = "4433007711";

/* scan through string */
	g = 0;
	while (s[g] != '\0')
/* check whether leetLetter is found */
	{
		c = 0;
		while (c < 10)
		{
			if (leetLetters[c] == s[g])
			{
				s[g] = leetNums[c];
			}
			c++;
		}
		g++;
	}
	return (s);
}
