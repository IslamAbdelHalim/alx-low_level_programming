#include "main.h"

/**
 * _atoi - fucntion that converst the string into int
 *
 * @s: The string
 *
 * Return: The integer
*/

int _atoi(char *s)
{
	int sign = 1, num = 0;

	do {
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
			num = (num * 10) + (*s - '0');
		else if (num > 0)
			break;
	} while (*s++);
	return (num * sign);
}
