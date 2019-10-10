#include "holberton.h"
/**
  * prime_number - auxiliar function.
  * @n: number of function.
  * @n_module: number.
  * Return: number prime.
  */
int prime_number(int n, int n_module)
{
	if (n % n_module != 0 && n > 2)
	{
		if (n_module > n / 2)
			return (1);
	}
	else
		return (0);
	return (prime_number(n, n_module + 1));
}
/**
  * is_prime_number - find prime number.
  * @n: number.
  *
  * Return: number prime.
  */
int is_prime_number(int n)
{
	return (prime_number(n, 2));
}
