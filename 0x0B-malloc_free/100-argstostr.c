#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - Function to know the length of string
 *
 * @s: The string
 *
 * Return: The length of string
*/
int _strlen(char *s)
{
	int size = 0;
	while (s[size] != '\0')
		size++;
	return (size);
}


/**
 * argstostr - function That concates all argument
 *
 * @ac: argument count
 *
 * */

char *argstostr(int ac, char **av)
{
	char *arguments;
	int i, j, tac = 0, cmp = 0;;
	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++, tac++)
		tac += _strlen(av[i]);

	arguments = malloc(sizeof(char) * tac + 1);

	if (arguments == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, cmp++)
			arguments[cmp] = av[i][j];

		arguments[cmp] = '\n';
		cmp++;
	}
	arguments[cmp] = '\0';
	return (arguments);
}
