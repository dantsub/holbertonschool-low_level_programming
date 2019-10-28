#include "variadic_functions.h"
/**
  * print_all - prints anything.
  * @format: format.
  *
  *
  */
void print_all(const char * const format, ...)
{
	va_list arg;
	int index, index1;

	type_t args[] = {
		{"s", print_s},
		{"c", print_c},
		{"i", print_i},
		{"f", print_f},
		{NULL, NULL}
	};

	va_start(arg, format);
	index = 0;
	while (format[index] != 0 && format != NULL)
	{
		index1 = 0;
		while (index1 < 4)
		{
			if (format[index] == *(args[index1]).types)
			{
				args[index1].ftype(arg);
				if (format[index + 1])
					printf(", ");
			}
			index1++;
		}
		index++;
	}
	va_end(arg);
	printf("\n");
}
/**
  * print_s - print strings.
  * @arg: argument.
  *
  */
void print_s(va_list arg)
{
	char *string;

	string = va_arg(arg, char *);
	if (string == 0)
		string = "(nil)";
	printf("%s", string);
}
/**
  * print_c - print char.
  * @arg: argument.
  *
  */
void print_c(va_list arg)
{
	printf("%c", va_arg(arg, int));
}
/**
  * print_i - print interger.
  * @arg: argument.
  *
  */
void print_i(va_list arg)
{
	printf("%d", va_arg(arg, int));
}
/**
  * print_f - print float.
  * @arg: argument.
  *
  */
void print_f(va_list arg)
{
	printf("%f", va_arg(arg, double));
}
