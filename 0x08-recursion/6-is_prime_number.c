#include "main.h"

/**
 * prime - function to know if the number is prime
 *
 * @n: The number
 *
 * @y: 1
 *
 * Return: if the prime true of false
*/

int prime(int n, int y)
{
	if (y >= n && n > 1)
		return (1);
	else if (n % y == 0 || n <= 1)
		return (0);
	else
		return (prime(n, y + 1));
}

/**
 * is_prime_number - function to print the state
 *
 * @n: the number
 *
 * Return: The state
*/

int is_prime_number(int n)
{
	return (prime(n, 2));
}
