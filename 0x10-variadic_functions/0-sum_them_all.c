#include "variadic_functions.h"
/**
  * sum_them_all - sum of all its parameters.
  * @n: constant variable.
  * Return: 0 or sum.
  */
int sum_them_all(const unsigned int n, ...)
{
	va_list arg;
	unsigned int index;
	int add;

	va_start(arg, n);

	if (n == 0)
		return (0);

	add = 0;
	for (index = 0; index < n; index++)
		add += va_arg(arg, int);
	va_end(arg);

	return (add);
}
