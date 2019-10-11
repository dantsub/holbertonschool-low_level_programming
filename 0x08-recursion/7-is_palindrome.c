#include "holberton.h"
/**
  *
  *
  *
  *
  */
int _strlen_recursion(char *s)
{
	if (*s == 0)
		return (0);
	else
		return (_strlen_recursion(s + 1) + 1);
}
/**
  *
  *
  *
  *
  */
int compare(char *s, int pos_f, int pos_l)
{
	if (pos_f > pos_l)
		return (1);
	else
	{
		if (s[pos_f] != s[pos_l])
			return (0);
		else
			return (compare(s, pos_f + 1, pos_l - 1));
	}
}

/**
  *
  *
  *
  *
  */
int is_palindrome(char *s)
{
	int pos_f, pos_l;
	
	pos_f = 0;
	pos_l = _strlen_recursion(s);
	return (compare(s, pos_f, pos_l - 1));
}
