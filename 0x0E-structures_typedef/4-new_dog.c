#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int count1, count2;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	for (count1 = 0; name[count1] != '\0'; count1++)
		;
	new_dog->name = malloc(sizeof(char) * (count1 + 1));
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	for (count2 = 0; count2 <= count1; count2++)
		new_dog->name[count2] = name[count2];

	new_dog->age = age;

	for (count1 = 0; owner[count1] != '\0'; count1++)
		;
	new_dog->owner = malloc(sizeof(char) * (count1 + 1));
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	for (count2 = 0; count2 <= count1; count2++)
		new_dog->owner[count2] = owner[count2];

	return (new_dog);
}
