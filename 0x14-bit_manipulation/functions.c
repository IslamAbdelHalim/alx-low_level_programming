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
