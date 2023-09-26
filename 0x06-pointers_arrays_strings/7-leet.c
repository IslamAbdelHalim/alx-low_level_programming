#include "main.h"

/**
 * leet - function to transfare alpha to numbers
 *
 * @str: array of string
 *
 * Returen: The pointer to new char
*/

char *leet(char *s)
{
	char alph[] = "aAeEoOtTlL";
	int nums[] = {4, 3, 0, 7, 1};
	unsigned int i;
	char *str = s;
	while (*s)
	{
		for (i = 0; i < sizeof(alph) / sizeof(char); i++)
		{
			if (*s == alph[i] || *s == alph[i] + 32)
			{
				*s = 48 + nums[i];
			}
		}
		s++;
	}	

	return (str);
}
