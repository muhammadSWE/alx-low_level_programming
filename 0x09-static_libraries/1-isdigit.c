#include "main.h"
/**
 * _isdigit - check if c is a digit
 *@c: the character to be tested
 * Return: 1 if digit, otherwise 0.
 */
int _isdigit(int c)
{
	if (c >= 48 && c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
