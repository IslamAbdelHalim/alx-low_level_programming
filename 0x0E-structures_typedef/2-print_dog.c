#include "dog.h"
#include <stdio.h>

/**
 * print_dog - function that print info dogs
 *
 * @d: the structure dog
*/

void print_dog(struct dog *d)
{
	struct dog;

	printf("Name: %s\n", d->name);
	printf("Age: %0.1f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
