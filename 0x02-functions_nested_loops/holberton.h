#ifndef _HOLBERTON_H
#define _HOLBERTON_H
/* ========================== */
/* 	  Libraries	      */
/* ========================== */
#include <stdlib.h>
#include <stdio.h>
/* ========================== */
/* 	  PROTOTYPES	      */
/* ========================== */
int add(int, int);             /* add two interger */
int _abs(int);	               /* return abs of number */
int _islower(int c);           /* validate is lower or is upper */
int _isalpha(int c);           /* validate is alpha */
void jack_bauer(void);         /* Print reloj */
void times_table(void);        /* Print 9 times table */
int _putchar(char c);          /* Print a character */
void print_to_98(int);         /* Prints all natural numbers from n to 98 */
int print_sign(int n);         /* Print sign of number */
int print_last_digit(int);     /* Print the last digit */
void print_alphabet(void);     /* Print alphabet 1 time */
void print_alphabet_x10(void); /* Print alphabet 10 times */
/* Advanced */
void print_times_table(int n);
#endif /* _HOLBERTON_H */
