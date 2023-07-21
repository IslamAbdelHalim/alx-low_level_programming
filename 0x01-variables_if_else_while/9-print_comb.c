#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print number
 *
 * Return: Always 0
*/

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
		if (i < 9)
		{
			putchar(',');
			putchar(' ');

		}
		else
		{
			continue;
		}
	}
	putchar('\n');
	return (0);
}
