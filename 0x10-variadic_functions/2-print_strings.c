#include "variadic_functions.h"
/**
  * print_strings - prints strings, followed by a new line.
  * @separator: separator.
  * @n: constant variable.
  *
  * Return: nothing.
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int index;
	char *s;

	va_start(arg, n);
	for (index = 0; index < n; index++)
	{
		s = va_arg(arg, char*);
		if (s != 0)
			printf("%s", s);
		else
			printf("(nil)");
		if (separator != 0 && index < n - 1)
			printf("%s", separator);
	}
	va_end(arg);
	printf("\n");
}
