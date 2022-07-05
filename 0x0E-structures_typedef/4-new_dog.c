#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - create new instance of struct dog
 * @name: member
 * @age: member
 * @owner: member
 * Return: initialized instance of struct dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *copy_of_name, *copy_of_owner;
	int len_name = 0, len_owner = 0, i;

	if (name == NULL || owner == NULL)
		return (NULL);

	while (name[len_name])
		len_name++;
	while (owner[len_owner])
		len_owner++;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	copy_of_name = malloc(len_name + 1);
	if (copy_of_name == NULL)
		return (NULL);
	for (i = 0; name[i]; i++)
		copy_of_name[i] = name[i];
	copy_of_name[i] = '\0';

	copy_of_owner = malloc(len_owner + 1);
	if (copy_of_owner == NULL)
		return (NULL);
	for (i = 0; owner[i]; i++)
		copy_of_owner[i] = owner[i];
	copy_of_owner[i] = '\0';

	new_dog->name = copy_of_name;
	new_dog->age = age;
	new_dog->owner = copy_of_owner;
	return (new_dog);
}
