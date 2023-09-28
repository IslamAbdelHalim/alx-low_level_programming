#include "main.h"

/**
 * _strlen - function that know length of array
 *
 * @str: array of string
 *
 * Return: The array of string
*/

int _strlen(const char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;
	return (i);
}

/**
 * powBit - function That make power to two
 *
 * @n: The number of power
 *
 * Return: The power of two
*/

int powBit(int n)
{
	int num = 1;
	int i;

	for (i = 0; i < n; i++)
		num = 2 * num;
	return (num);
}

/**
 * binary_to_uint - function convert binary to int
 *
 * @b: The binary number
 *
 * Return: The decimal number
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int length = _strlen(b) - 1;
	int i;
	int pow = 0;

	if (!b)
		return (0);

	for (i = length; i >= 0; i--)
	{
		if (b[i] != '0' || b[i] != '1')
		{
			if (b[i] == '1')
				num = num + powBit(pow);
			pow++;
		}
		else
		{
			return (0);
		}
	}
	return (num);
}
