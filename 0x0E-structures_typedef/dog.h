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

typedef struct dog
{
	char *name;
	char *owner;
	float age;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
