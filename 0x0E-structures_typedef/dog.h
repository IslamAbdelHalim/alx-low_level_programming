#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure to store info dog
 *
 * @name: The name of dog
 *
 * @age: His age
 *
 * @owner: His owner
*/

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

#endif
