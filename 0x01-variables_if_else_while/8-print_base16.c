#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C function to know positive or negative
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int i;
	char c;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
