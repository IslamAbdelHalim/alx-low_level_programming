#include <stdio.h>

/**
 * largest_prime_factor - function
 *
 * @num: The number argument
 *
 * Return: The prime factor
*/

int largest_prime_factor(long int num)
{
	int i, pf;

	i = 3;
	pf = 0;

	while (num % 2 == 0)
		num /= 2;
	while (num > 1)
	{
		while (num % i == 0)
		{
			num /= i;
			pf = i;
		}
		i += 2;
	}
	return (pf);

	if (i == 3)
		return (2);
}

/**
 * main - Entry point
 *
 * Return: Always 0
*/

int main(void)
{
	printf("%d\n", largest_prime_factor(612852475143));
	return (0);
}
