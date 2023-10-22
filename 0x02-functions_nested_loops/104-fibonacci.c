#include <stdio.h>

/**
 * num_length - return the length of string
 *
 * @num: operand number
 *
 * Return: number of digits
*/

int num_length(int num)
{
	int length = 0;

	if (!num)
		return (0);
	while (num)
	{
		num = num / 10;
		length += 1;
	}
	return (length);
}

/**
 * main - Entry point
 *
 * Return: Always 0
*/

int main(void)
{
	int i, c;
	unsigned long num1 = 1, num2 = 2, lsum,
		      max = 1000000, flo = 0, f2o = 0, sum = 0;

	for (i = 1; i <= 98; i++)
	{
		if (flo > 0)
			printf("%lu", flo);
		c = num_length(max) - 1 - num_length(num1);

		while (flo > 0 && c > 0)
		{
			printf("%d", 0);
			c--;
		}
		printf("%lu", num1);

		lsum = (num1 + num2) % max;
		sum = flo + f2o + (num1 + num2) / max;
		num1 = num2;
		flo = f2o;
		num2 = lsum;
		f2o = sum;

		if (i != 98)
			printf(", ");
		else
			printf("\n");
	}
	return (0);
}
