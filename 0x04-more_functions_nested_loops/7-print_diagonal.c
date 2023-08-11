#include "main.h"

/**
 * print_diagonal - function to print diagonal shap
 * by print the time of spaces followed by \ and new line
 *
 * @n: The number of space and lines
*/

void print_diagonal(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int j;

		i = 0;

		while (i < n)
		{
			j = 0;
			while (j < i + 1)
			{
				_putchar(' ');
				j++;
			}
			_putchar('\\');
			_putchar('\n');
			i++;
		}
	}
}
