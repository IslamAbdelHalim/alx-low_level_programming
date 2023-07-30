#include "main.h"

/**
 * _strcmp - function to compare two string
 *
 * @s1: string one
 *
 * @s2: string two
 *
 * Return: The value of mistake
*/

int _strcmp(char *s1, char *s2)
{
	int comp = 0;

	while (*s1)
	{
		if (s1 != s2)
		{
			comp = ((int)*s1 - 48) - ((int)*s2 - 48);
			break;
		}
		s1++;
		s2++;
	}
	return (comp);
}
