#include "dog.h"
#include <stdlib.h>
/**
  * new_dog - creates a new dog.
  *
  * @name: name.
  * @age: age.
  * @owner: owner.
  * Return: nothing.
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *d;

	d = malloc(sizeof(*d));
	if (d == NULL)
		return (NULL);
	d->name = name;
	d->age = age;
	d->owner = owner;
	return (d);
}
