#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - function that duplicat string
 *
 * @str: The array of character
 *
 * Return: The address of new string
*/

char *_strdup(char *str)
{
	char *nstr;
	int size = 0;
	int i = 0;

	if (str == NULL)
		return (NULL);

	while (str[size] != '\0')
	{
		size++;
	}

	nstr = malloc(sizeof(*str) * size + 1);

	if (nstr == NULL)
		return (NULL);

	for (; i < size; i++)
		nstr[i] = str[i];

	return (nstr);

}
