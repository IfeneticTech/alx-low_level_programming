#include "main.h"
/**
 * _strncpy - a functions that copies a string.
 * @dest: destination string pointer.
 * @src: source string pointer.
 * @n: number of bytes to be used.
 *
 * Return: pointer to destination string.
 */

char *_strncpy(char *dest, char *src, int n)
{
int r;

for (r = 0; r < n && src[r] != '\0'; r++)
dest[r] = src[r];

for (; r < n; r++)
dest[r] = '\0';

return (dest);
}
