#include "main.h"
#include <stdio.h>

/**
 * rev_string - function reverse string
 *
 * @s: array of string
*/

void rev_string(char *s)
{
	int i, n;
	char temp;
		i = 0;
	
	while(s[i])
		i++;

	for (n = 0; n < i / 2; n++)
	{
		temp = s[n];
		s[n] = s[i - 1 - n];
		s[i - 1- n] = temp;
	}
	
}
