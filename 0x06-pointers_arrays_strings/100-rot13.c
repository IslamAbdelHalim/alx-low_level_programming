#include "main.h"

/**
 * rot13: fucntion
 *
 * @s: argument
 *
 * Return: The result
*/

char *rot13(char *s)
{
	int i;
	char *part1 = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *part2 = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *ptr = s;

	while (*s)
	{
		for (i = 0; i <= 52; i++)
		{
			if (*s == part1[i])
			{
				*s = part2[i];
				break;
			}
		}
		s++;
	}
	return (ptr);
}
