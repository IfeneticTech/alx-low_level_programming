#include <stdio.h>


/**
 * numLength - returns the length of string
 * @num: operand number
 * Return: number of digits
 */

int numLength(int num)
{
	int length = 0;

	if (!num)
	{
		return (1);
	}

	while (num)
	{
		num = num / 10;
		length += 1;
	}

	return (length);
}
/**
 * main - prints prints the first 98 fibonacci sequences
 * Return: 0
 */

int main(void)
{
	unsigned long f1 = 1;
	unsigned long f2 = 2;
	unsigned long tmp;
	unsigned long mx = 100000000;
	unsigned long f1o = 0;
	unsigned long f2o = 0;
	unsigned long tmpo = 0;
	short int i = 1, initial0s;

	while (i <= 98)
	{
		if (f1o > 0)
			printf("%lu", f1o);
		initial0s = numLength(mx) - 1 - numLength(f1);
		while (f1o > 0 && initial0s > 0)
		{
			printf("%i", 0);
			initial0s--;
		}
		printf("%lu", f1);

		tmp = (f1 + f2) % mx;
		tmpo = f1o + f2o + (f1 + f2) / mx;
		f1 = f2;
		f1o = f2o;
		f2 = tmp;
		f2o = tmpo;

		if (i != 98)
			printf(", ");
		else
			printf("\n");
		i++;
	}
	return (0);
}
