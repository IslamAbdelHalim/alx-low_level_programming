#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - function to know the length
 *
 * @str: The string
 *
 * Return: The length of string
*/
int _strlen(char *str)
{
	int size = 0;

	while (str[size] != '\0')
		size++;

	return (size);
}

/**
 * str_concat - function that concat 2 strings
 *
 * @s1: The string 1
 *
 * @s2: The string 2
 *
 * Return: The address of new strign
*/
char *str_concat(char *s1, char *s2)
{
	char *str;
	int size1, size2, i = 0;

	if (s1 == NULL)
		s1 = "\0";
	else if (s2 == NULL)
		s2 = "\0";

	/*size of  string*/
	size1 = _strlen(s1);
	size2 = _strlen(s2);

	/*Allocat memory*/
	str = malloc(sizeof(*s1) * (size1 + size2 + 1));
	/*Handle Malloc return*/
	if (str == NULL)
		return (NULL);
	/*concat the two string*/
	for (; i < (size1 + size2); i++)
	{
		if (i < size1)
			str[i] = s1[i];
		else
			str[i] = s2[i - size1];
	}
	str[i] = '\0';

	return (str);

}
