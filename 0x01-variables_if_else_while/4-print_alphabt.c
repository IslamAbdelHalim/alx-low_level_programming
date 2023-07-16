#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 *
 * Description: A C function to know positive or negative
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == 'q' || i == 'e')
		{
			continue;
		}
		else
		{
			putchar(i);
		}
	}
	putchar('\n');
	return (0);
}
