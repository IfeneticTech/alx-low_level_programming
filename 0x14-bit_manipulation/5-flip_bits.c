#include "main.h"

/**
 * flip_bits - function that returns the number of bits
 * you would need to flip to get from one number to another
 *
 * @n: first number to compare
 * @m: the second number to compare
 * Return: the number of bits you would like to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int the_result;
	unsigned long int the_count;

	the_result = n ^ m;
	for (the_count = 0; the_result > 0;)
	{
		if ((the_result & 1) == 1)
			the_count++;
		the_result = the_result >> 1;
	}
	return (the_count);
}
