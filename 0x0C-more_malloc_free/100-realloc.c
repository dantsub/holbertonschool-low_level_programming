#include "holberton.h"
/**
  * _memcpy - fills memory with a constant byte.
  * @dest: destiny.
  * @src: source.
  * @n: size of memory to copy.
  * Return: dest.
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
		dest[index] = src[index];
	return (dest);
}
/**
 * _realloc - reallocates a memory block using malloc and free.
 * @ptr: a pointer to the memory previously allocated.
 * @old_size: the size, in bytes, of the allocated space for ptr.
 * @new_size: the new size, in bytes of the new memory block.
 * Return: poiter with new size in memory or NULL if error
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if (new_size == old_size)
		return (ptr);
	if (!new_size)
	{
		if (ptr)
		{
			free(ptr);
			return (NULL);
		}
		if (!ptr && old_size > 0)
			new_size = old_size;
	}
	new_ptr = malloc(new_size);
	if (!new_ptr)
		return (NULL);
	if (ptr)
	{
		if (new_size > old_size)
			_memcpy(new_ptr, ptr, old_size);
		free(ptr);
	}
	return (new_ptr);
}
