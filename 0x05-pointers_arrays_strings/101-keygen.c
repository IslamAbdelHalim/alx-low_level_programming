#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point generat random function
 *
 * Return: 0 if success
*/

int main(void)
{
	int sum;
	char c;

	srand(time(NULL));

	while (sum <= 2645)
	{
		c = rand() % 128;
		sum += c;
		putchar(c);
	}
	putchar(2772 - sum);
	return (0);
}
