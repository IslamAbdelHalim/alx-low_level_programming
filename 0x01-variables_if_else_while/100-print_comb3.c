#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (sucess)
*/

int main(void)
{
	int i;
	int j;

	for (i = 0; i < 9; i++) /*This for the first number */
	{
		for (j = 1; j <= 9; j++) /*This for the second number*/
		{
			putchar(i + '0');
			putchar(j + '0');
			if (i + j != 17)
			{
				putchar(',');
				putchar(' ');
			}
			
		}
	}
	putchar('\n');
	return (0);
}
