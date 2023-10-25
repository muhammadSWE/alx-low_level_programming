#include "main.h"
/**
 *is_palindrome - checks if a string is a palindrome
 *@s: string
 *
 *Return: 1 if it is, 0 it's not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
	{
		return (1);
	}
	return (ispal(s, 0, _strlen_recursion(s)));
}
/**
  *_strlen_recursion - returns length of string
  *@s: string
  *
  *Return: int
  */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (_strlen_recursion(s + 1) + 1);
}
/**
 *ispal - checks the string recursively if palindrome or not
 *@s: string
 *@i: iterator
 *@len: length of the string
 *
 *Return: 1 if palindrome, 0 if not
 */
int ispal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
	{
		return (0);
	}
	if (i >= len)
	{
		return (1);
	}
	return (check_pal(s, i + 1, len - 1));
}
