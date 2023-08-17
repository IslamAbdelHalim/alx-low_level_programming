#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - function that print naem by more than way
 *  may be upparcase or lowercase
 *
 *  @name: The array of character which will be print
 *
 *  @f: pointer to function that will be
 *  the way which wil print
*/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		f(" ");
	(*f)(name);
	/*f(name);*/
}
