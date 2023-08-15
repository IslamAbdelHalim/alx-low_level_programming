#ifndef DOG_H
#define DOG_H

/**
 * struct dog - struction to info dog
 *
 * @name: his name
 *
 * @owner: his owner
 *
 * @age: his age
*/

struct dog
{
	char *name;
	char *owner;
	float age;
};
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
