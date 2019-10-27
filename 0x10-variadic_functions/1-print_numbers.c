#include "variadic_functions.h"
/**
  * print_numbers - prints numbers, followed by a new line.
  * @separator: separator.
  * @n: constant variable.
  *
  * Return: nothing.
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int index;

	va_start(arg, n);
	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(arg, unsigned int));
		if (separator != 0 && index < n - 1)
			printf("%s", separator);
	}
	va_end(arg);
	printf("\n");
}
