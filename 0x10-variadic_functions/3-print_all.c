#include "variadic_functions.h"
/**
 * print_s - Print a string
 * @arg: argument to print
 * Return: Nothing
 */
void print_s(va_list arg)
{
	char *s;

	s = va_arg(arg, char *);
	if (!s)
		s = "(nil)";
	printf("%s", s);
}
/**
 * print_c - Print a character
 * @arg: argument to print
 * Return: Nothing
 */
void print_c(va_list arg)
{
	printf("%c", va_arg(arg, int));
}
/**
 * print_f - Print a float
 * @arg: argument to print
 * Return: Nothing
 */
void print_f(va_list arg)
{
	printf("%f", va_arg(arg, double));
}
/**
 * print_i - Print an integer
 * @arg: argument to print
 * Return: Nothing
 */
void print_i(va_list arg)
{
	printf("%d", va_arg(arg, int));
}
/**
 * print_all - prints anything.
 * @format: contains the format to print.
 * Return: nothing
 */

void print_all(const char *const format, ...)
{
	va_list arg;
	unsigned int com, index, itype;
	type_t type[] = {
		{"c", print_c},
		{"s", print_s},
		{"i", print_i},
		{"f", print_f},
		{NULL, NULL}
	};

	index = 0;
	va_start(arg, format);
	while (format[index])
	{
		itype = 0;
		while (type[itype].types)
		{
			if (type[itype].types[0] == format[index])
			{
				com = 1;
				type[itype].ftype(arg);
			}
			if (format[index + 1] && com)
				printf(", ");
			com = 0;
			itype++;
		}
		index++;
	}
	va_end(arg);
	printf("\n");
}
