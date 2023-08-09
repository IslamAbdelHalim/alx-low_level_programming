#include "main.h"
#include <stdlib.h>

/**
 * _strdup - return a pointer
 *
 * @str: string
 *
 * Return: The value
*/

char *_strdup(char *str)
{
	int i, size;
	char *m;

	i = 0;
	size = 0;

	if (str == NULL)
		return (NULL);
	for (; str[size] != '\0'; size++)
	;

	m = malloc(size * sizeof(*str) + 1);

	if (m == 0)
	{
		return (NULL);
	}
	else
	{
		for (; i < size; i++)
			m[i] = str[i];
	}
	return (m);
}
