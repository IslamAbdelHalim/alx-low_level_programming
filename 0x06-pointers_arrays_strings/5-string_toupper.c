#include "main.h"

/**
 * string_toupper - function to transfare the string to upper
 *
 * @str: the string which transfare to uppercase
 *
 * Return: return the uppercase string
*/

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
	}
	return (str);
}
