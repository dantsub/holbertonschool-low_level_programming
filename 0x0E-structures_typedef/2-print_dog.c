#include "dog.h"
#include <stdio.h>
/**
  * print_dog - initialize a variable of type struct dog.
  * @d: struct.
  * Return: nothing.
  */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			d->name = "(nail)";
		if (d->owner == NULL)
			d->owner = "(nail)";
		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
	}
	else
	{
		return;
	}
}
