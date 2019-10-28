#ifndef _variadic_functions_
#define _variadic_functions_

#include <stdarg.h>
#include <stdio.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
/**
  * struct type_t - struct.
  * @types: types.
  * @ftype: functions.
  */
typedef struct type_t
{
	char *types;
	void (*ftype)(va_list);
} type_t;
void print_s(va_list arg);
void print_c(va_list arg);
void print_i(va_list arg);
void print_f(va_list arg);
#endif
