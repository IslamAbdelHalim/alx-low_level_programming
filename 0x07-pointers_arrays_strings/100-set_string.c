#include "main.h"

/**
 * set_string - function that sets the value of a pointer to a char
 *
 * @s: The pointer that have the main string
 *
 * @to: the pointer that add the new string
*/

void set_string(char **s, char *to)
{
	*s = to;
}
