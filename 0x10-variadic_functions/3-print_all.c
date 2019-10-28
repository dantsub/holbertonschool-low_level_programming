#include "variadic_functions.h"

/**
  *print_all - Print all.
  *@format: const.
  *
  */

void print_all(const char * const format, ...)
{
	char *string;
	va_list arg;
	unsigned int com, index;

	index = 0;
	while (format != NULL)
	{
		va_start(arg, format);
		while (format[index] != 0)
		{
			com = 1;
			switch (format[index])
			{
				case 'c':
				printf("%c", va_arg(arg, int));
				break;
				case 'i':
				printf("%d", va_arg(arg, int));
				break;
				case 'f':
				printf("%f", va_arg(arg, double));
				break;
				case 's':
				string = va_arg(arg, char *);
				if (string == 0)
				string = "(nil)";
				printf("%s", string);
				break;
				default:
				com = 0;
				break;
			}
			if (format[index + 1] && com)
				printf(", ");
			index++;
		}
		va_end(arg);
		break;
	}
	printf("\n");
}
