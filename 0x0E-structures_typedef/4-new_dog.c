#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;
	int n, o, i;

	if (name == NULL || owner == NULL)
		return (NULL);
	new = malloc(sizeof(dog_t));
	if (new == NULL)
		return (NULL);
	for (n = 0; name[n]; n++)
		;
	n++;
	new->name = malloc(n * sizeof(char));
	if (new->name == NULL)
	{
		free(new);
		return (NULL);
	}
	for (i = 0; i < n; i++)
		new->name[i] = name[i];
	new->age = age;

	for (o = 0; owner[o]; o++)
		;
	o++;
	new->owner = malloc(o * sizeof(char));
	if (new->owner == NULL)
	{
		free(new->name);
		free(new);
		return (NULL);
	}
	for (i = 0; i < o; i++)
		new->owner[i] = owner[i];
	return (new);
}
