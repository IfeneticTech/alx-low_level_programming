#include "variadic_functions.h"

/**
 * sum_them_all - calculate the sum of it's parameter
 * @n: number of arguments passed into the function
 *
 * Return: the resulting sum
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;

	va_list holder;

	va_start(holder, n);

	for (i = 0; i < n; i++)
	{
		if (n == 0)
		{
			return (0);
		}
		else
		{
			sum += va_arg(holder, int);
		}
	}
	va_end(holder);
	return (sum);
}
