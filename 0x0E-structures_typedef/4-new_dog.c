#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * dog_t *new_dog - is a alias strucutre for struct dog
 *
 * new_dog - The function to create a new dog
 *
 * @name: the name of dog
 *
 * @age: his age
 *
 * @owner: his owner
 *
 * Return: newDog info and if null return null
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog = malloc(sizeof(dog_t));

	if (newDog != NULL)
	{
		newDog->name = name;
		newDog->age = age;
		newDog->owner = owner;
		return (newDog);
	}
	else
	{
		return (NULL);
	}
}
