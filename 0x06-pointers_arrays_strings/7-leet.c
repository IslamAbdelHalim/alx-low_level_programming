#include "main.h"

/**
 * leet - function to transfare alpha to numbers
 *
 * @s: array of string
 *
 * Return: The pointer to new char
*/

char *leet(char *s)
{
	int i, j;
	char alph[] = "aAeEoOtTlL";
	char nums[] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == alph[j])
				s[i] = nums[j];
		}
	}
	return (s);
}
