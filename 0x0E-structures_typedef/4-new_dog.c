#include "dog.h"

/**
 * new_dog -  creates a new dog.
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: newly created dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d = malloc(sizeof(dog_t));

	if (d == NULL)
		return (NULL);

	d->name = malloc(sizeof(name));
	if (d->name == NULL)
		return (NULL);
	d->owner = malloc(sizeof(owner));
	if (d->owner == NULL)
		return (NULL);

	strcpy(d->name, name);
	strcpy(d->owner, owner);
	d->age = age;

	return (d);
}
