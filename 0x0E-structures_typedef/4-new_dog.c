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
	dog_t *newDog;
	int i, j, k;

	newDog = malloc(sizeof(dog_t));
	if (newDog == NULL)
		return (NULL);

	for (i = 0; name[i] != '\0'; i++)
		;
	i++;
	newDog->name = malloc(i * sizeof(char));
	if (newDog->name == NULL)
	{
		free(newDog);
		return (NULL);
	}

	for (j = 0; owner[j] != '\0'; j++)
		;
	j++;
	newDog->owner = malloc(j * sizeof(char));
	if (newDog->owner == NULL)
	{
		free(newDog->name);
		free(newDog);
		return (NULL);
	}

	newDog->age = age;
	for (k = 0; k < i; k++)
		newDog->name[k] = name[k];
	for (k = 0; k < j; k++)
		newDog->owner[k] = owner[k];

	return (newDog);
}
