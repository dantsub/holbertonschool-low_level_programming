#include "holberton.h"
/**
 * _strlen - return length of string.
 * @s: a string.
 * Return: length of string.
 */
int _strlen(char *s)
{
	int len;

	for (len = 0; *s; len++, s++)
		;
	return (len);
}
/**
 * print_mul - print product of multiplication.
 * @buff: contain product.
 * @len: length of buff.
 * Return: Nothing
 */
void print_mul(int *buff, int len)
{
	int i;

	i = 0;
	if (!buff[0])
		i = 1;
	while (i < len)
		printf("%d", buff[i++]);
	printf("\n");
	free(buff);
}
/**
 * _isdigit - verify if string is a digit
 * @s: string to verify
 * Return: true or false
 */
int _isdigit(char *s)
{
	int i = 0;

	while (*(s + i))
	{
		if (*(s + i) < 48 || *(s + i) > 57)
			return (0);
		i++;
	}
	return (1);
}
/**
 * _mul - multiply and save in buff the product.
 * @av: arguments to multiply.
 * Return: nothing.
 */
void _mul(char **av)
{
	int *buff;
	int size1, size2, len, idx, jdx, mul, dec;

	size1 = _strlen(av[1]);
	size2 = _strlen(av[2]);
	len = size1 + size2;
	buff = calloc(len, sizeof(int *));
	if (!buff)
		puts("Error"), exit(98);
	for (idx = (size2 - 1); idx > -1; idx--)
	{
		dec = 0;
		for (jdx = (size1 - 1); jdx > -1; jdx--)
		{
			mul = (av[1][jdx] - 48) * (av[2][idx] - 48);
			dec = mul / 10;
			buff[idx + jdx + 1] += mul % 10;
			if (buff[idx + jdx + 1] > 9)
			{
				buff[idx + jdx] += buff[idx + jdx + 1] / 10;
				buff[idx + jdx + 1] = buff[idx + jdx + 1] % 10;
			}
			buff[idx + jdx] += dec;
		}

	}
	print_mul(buff, len);
}
/**
 * main - multiply two argument
 * @ac: count arguments.
 * @av: value arguments.
 * Return: 0 if success.
 */
int main(int ac, char **av)
{
	if (ac != 3 || !(_isdigit(av[1])) || !(_isdigit(av[2])))
		puts("Error"), exit(98);
	if (av[1][0] == 48 || av[2][0] == 48)
		puts("0"), exit(0);
	_mul(av);
	return (0);
}
