#include "holberton.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @n: interger number.
 * Return: last digit of n..
 */
int print_last_digit(int n)
{
	int o;
	int m = n % 10;

	if (m < 0)
	{	
		
		o = m * -1;
		_putchar(o + 48);
		return (-m);
	}	
	else
	{
		_putchar(m + 48);
		return (m + 48);
	}
	/*m = n % 10;
	return (m + '0');*/
}
