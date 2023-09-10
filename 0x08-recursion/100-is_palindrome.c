#include "main.h"

/**
 * length - function to know the lenght of string
 *
 * @s: array of character (string)
 *
 * Return: The lenght of string
*/

int length(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + length(s + 1));
}

/**
 * is_palindromerec - function to check two character
 *
 * @s: The new string
 *
 * @start: The first char
 *
 * @end: The second char
 *
 * Return: If the two char equal or not
*/
int is_palindromerec(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (s[start] != s[end])
		return (0);
	return (is_palindromerec(s, start + 1, end - 1));
}

/**
 * is_palindrome - function to check is the string
 * is palindroma or not
 *
 * @s: The string
 *
 * Return: 1 if the string is palindrome and 0 if is not
*/

int is_palindrome(char *s)
{
	int size = length(s);

	if (size == 0 || size == 1)
		return (1);

	return (is_palindromerec(s, 0, size - 1));
}
