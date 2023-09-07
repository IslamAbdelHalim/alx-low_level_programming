#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - Function to know the length of string
 *
 * @s: The string
 *
 * Return: The length of String
*/

int _strlen(char *s)
{
	int size = 0;

	while (s[size] != '\0')
	{
		size++;
	}
	return (size);
}

/**
 * string_nconcat - function to concat string with num other char
 *
 * @s1: First string
 *
 * @s2: First string
 *
 * @n: The number of char other string
 *
 * Return: The pointer to new string
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int size1 = _strlen(s1);
	unsigned int i;
	/*Check if any string is NULL*/
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n <= 0)
		n = _strlen(s2);

	/*Allocat The first string memory*/
	str = malloc(sizeof(*s1) * (size1 +  n) + 1);
	if (str == NULL)
	{
		printf(" ");
		exit(1);
	}

	for (i = 0; i < (size1 + n); i++)
	{
		if (i < size1)
		{
			str[i] = s1[i];
		}
		else if (i >= size1)
		{
			str[i] = s2[i - size1];
		}
	}
	str[i] = '\0';
	return (str);

}
