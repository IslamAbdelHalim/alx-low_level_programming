#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
*/

int main(void)
{
	int i, pf;

	long int num = 612852475143;

	pf = 0;
	i = 3;

	while (num % 2 == 0)
	{
		num /= 2;
		pf = 2;
	}

	while (num > 1)
	{
		num /= i;
		pf = i;
		i += 2;
	}
	printf("%d\n", pf);
	return (0);
}
