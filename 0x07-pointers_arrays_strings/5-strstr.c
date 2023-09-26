#include "main.h"

/**
 * _strstr - function
 *
 * @haystack: argument
 *
 * @needle: argument2
 *
 * Return: a pointer
*/

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *h = haystack;
		char *d = needle;

		while (*h == *d && *d != '\0')
		{
			h++;
			d++;
		}
		if (*d == '\0')
			return (haystack);
	}
	return (0);
}
