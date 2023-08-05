#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
*/

int main(void)
{
	int fDigit, sDigit, lDigit;

	for (fDigit = 0; fDigit <= 7; fDigit++)
	{
		for (sDigit = 1; sDigit <= 8; sDigit++)
		{
			for (lDigit = 2; lDigit <= 9; lDigit++)
			{
				if (sDigit == lDigit ||
						fDigit == sDigit ||
						sDigit > lDigit ||
						fDigit > sDigit)

				{
					continue;
				}
				putchar(fDigit + 48);
				putchar(sDigit + 48);
				putchar(lDigit + 48);
				if (fDigit != 7)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
