#include "main.h"

/**
 * print_diagonal - function to print diagonal shap
 * by print the time of spaces followed by \ and new line
 *
 * @n: The number of space and lines
*/

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= i; j++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
}
