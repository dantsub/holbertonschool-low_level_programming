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

	if (separator != NULL)
	{
		va_start(arg, n);
		for (index = 0; index < n; index++)
		{
			if (index == n - 1)
				printf("%d", va_arg(arg, unsigned int));
			else
				printf("%d%s", va_arg(arg, unsigned int), separator);
		}
		va_end(arg);
		printf("\n");
	}
}
