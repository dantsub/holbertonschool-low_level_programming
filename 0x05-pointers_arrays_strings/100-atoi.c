#include "holberton.h"
/**
 * _atoi - convert a string to an integer.
 * @s: string to be converted.
 * Return: corverted number.
 */
int _atoi(char *s)
{
	int sign, i;
	unsigned int num;

	num = 0, sign = 1, i = 0;
	while (s[i] && (s[i] < 48 || s[i] > 57))
	{
		if (s[i] == 45)
			sign *= -1;
		i++;
	}
	while (s[i] && (s[i] > 47 && s[i] < 58))
	{
		num = (num * 10) + (s[i] - 48);
		i++;
	}
	return (!num ? 0 : num * sign);
}
