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
	char s, C;

	for (s = 'a'; s <= 'z'; s++)
	{
		putchar(s);
	}
	for (C = 'A'; C <= 'Z'; C++)
	{
		putchar(C);
	}
	putchar('\n');
	return (0);
}
