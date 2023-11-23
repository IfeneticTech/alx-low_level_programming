#include "main.h"

/**
 * clear_bit - set the value of a bit to 0
 *
 * @n: pointer to the number
 * @index: position to change bit to 0
 * Return: integer
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int masked;

	masked = 1;
	masked = masked << index;
	if (index > sizeof(unsigned long int) * 8 || n == NULL)
		return (-1);
	if (((*n >> index) & 1) == 1)
		*n = masked ^ *n;

	return (1);
}
