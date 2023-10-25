#include "main.h"

int actual_prime(int r, int f);

/**
 * is_prime_number - says if an integer is a prime number or not
 * @n: number to evaluate
 *
 * Return: 1 if n is a prime number, 0 if not
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - calculates if a number is prime recursively
 * @r: number to evaluate
 * @f: iterator
 *
 * Return: 1 i r is a prime, 0 if not
 */
int actual_prime(int r, int f)
{
	if (f == 1)
		return (1);
	if (r % f == 0 && f > 0)
		return (0);
	return (actual_prime(r, f - 1));
}
