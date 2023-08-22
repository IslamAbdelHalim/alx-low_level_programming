#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
*/

int main(void)
{
	int i;
	long int fsum, nsum, lsum;

	fsum = 0;
	nsum = 1;
	lsum = 0;

	for (i = 1; i <= 50; i++)
	{
		lsum = fsum + nsum;
		fsum = nsum;
		nsum = lsum;
		if (i == 50)
			printf("%ld", lsum);
		else
			printf("%ld, ", lsum);
	}
	printf("\n");
	return (0);
}
