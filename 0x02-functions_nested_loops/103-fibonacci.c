#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
*/

int main(void)
{
	int i;
	long int fsum, nsum, lsum, sum;

	fsum = 0;
	nsum = 1;
	lsum = 0;
	sum = 0;

	for (i = 1; lsum < 4000000; i++)
	{
		lsum = fsum + nsum;

		if (lsum % 2 == 0)
		{
			sum += lsum;
		}
		fsum = nsum;
		nsum = lsum;
	}
	printf("%ld\n", sum);
	return (0);
}
