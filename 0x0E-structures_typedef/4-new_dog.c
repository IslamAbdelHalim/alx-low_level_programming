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
	char *nameptr = malloc(strlen(name) + 1);
	char *ownerptr = malloc(strlen(owner) + 1);
	dog_t *dog;

	if (nameptr == NULL || ownerptr == NULL)
	{
		free(nameptr);
		free(ownerptr);
		return (NULL);
	}
	strcpy(nameptr, name);
	strcpy(ownerptr, owner);
	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
	{
		free(nameptr);
		free(ownerptr);
		return (NULL);
	}
	dog->name = nameptr;
	dog->owner = ownerptr;
	dog->age = age;
	return (dog);
}
