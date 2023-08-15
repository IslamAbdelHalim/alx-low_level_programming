#include <stdio.h>
#include "dog.h"

/**
 * init_dog - function that initialize a variable
 *
 * struct dog *d - structure of dog
 *
 * @d: pointer to strucure dog
 *
 * @name: the name
 *
 * @age: the age
 *
 * @owner: the owner
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog;

	d->name = name;
	d->owner = owner;
	d->age = age;
}
