#include "dog.h"
/**
 * _strlen - return the len of string *s
 * @s: a string.
 * Return: len of string.
 */
unsigned int _strlen(char *s)
{
	unsigned int len = 0;

	while (*(s + len))
		len++;
	return (len);
}
/**
 * _strcpy - copy string
 * @s: string to copy
 * Return: copy string.
 */
char *_strcpy(char *s)
{
	char *new_s;
	unsigned int i, len;

	len = _strlen(s);
	new_s = malloc(sizeof(char) * (len + 1));
	/* allocation fails */
	if (!new_s)
		return (NULL);
	/* String copy */
	for (i = 0; *(s + i); i++)
		*(new_s + i) = *(s + i);
	/* add character null */
	*(new_s + i) = *(s + i);
	/* return result */
	return (new_s);
}
/**
  * new_dog - creates a new dog.
  * @name: name of dog.
  * @age: age of dog.
  * @owner: owner of dog.
  * Return: NULL if fail otherwise a dog.
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	char *cpy_name, *cpy_owner;

	d = malloc(sizeof(dog_t));
	if (!d)
		return (NULL);
	/* Copy strings */
	cpy_name = _strcpy(name);
	cpy_owner = _strcpy(owner);
	/* If fail someone free and return NULL */
	if (!cpy_name || !cpy_owner)
	{	free(d);
		if (cpy_name)
			free(cpy_name);
		if (cpy_owner)
			free(cpy_owner);
		return (NULL);
	}
	/* Otherwise assing name and owner */
	d->name = cpy_name;
	d->age = age;
	d->owner = cpy_owner;
	return (d);
}
