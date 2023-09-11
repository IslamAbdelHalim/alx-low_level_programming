#include "dog.h"

/**
 * init_dog - function That initialize a variable of type struct dog
 *
 * @struct dog *d: the structure of dog
 *
 * @d: pointer to structure dog
 *
 * @name: The name of dog
 *
 * @age: His age
 *
 * @owner: His owner
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog;

	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	};
}
