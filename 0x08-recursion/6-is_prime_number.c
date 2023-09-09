#include "main.h"

/***/

int prime(int n, int y)
{
	if (n < 0)
		n *= -1;
	if (y * y == n || y * (y + 1) == n)
		return (0);
	if (y * y > n)
		return (1);
	else
		return (prime(n, y + 1));
}


/***/
int is_prime_number(int n)
{
	return (prime(n, 1));
}
