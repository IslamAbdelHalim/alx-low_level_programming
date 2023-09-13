#include "function_pointers.h"

/**
 * print_name - function to print The name
 *
 * @name: The name array of char
 *
 * @f: The function pointer to instruction
 *
 * @char*: The f take a name
*/

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
