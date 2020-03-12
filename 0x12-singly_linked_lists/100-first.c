#include <stdio.h>

void _constructor(void) __attribute__((constructor));
/**
 * _constructor - print before main excecuted
 * Return: nothing.
 */
void _constructor(void)
{
	char *s;

	s = "You're beat! and yet, you must allow,\nI bore my house upon my back!\n";
	printf("%s", s);
}
