#include "dog.h"
#include <stdio.h>

/**
 * print_dog - function that print info dogs
 *
 * @d: the structure dog
*/

void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Nmae: %s\n", d->name ? d->name : "nil");
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner ? d->owner : "nil");
	}
}
