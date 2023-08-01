#include "main.h"

/**
 * cap_string - function to capitalize the first character of all strings
 *
 * @str: the argument 
 *
 * Return: The final result of character
*/

char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] = ' ' || str[i] >= 33 && str[i] <= 46 || str[i] = 59 || 
				str[i] = 63 || str[i] >= 91 && str[i] <= 93 || str[i] = 123 || str[i] = 125)
		{
			if (str[i + 1] >= 97 && str[i + 1] <= 122)
			{
				str[i + 1] = str[i + 1] - 32; 
			}
		}
	}
	return (str);
}
