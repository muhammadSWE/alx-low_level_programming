#include "main.h"
/**
 * _isalpha - check if char is alphabet
 *@c: the character to be tested
 * Return: 1 if alphabet, otherwise 0.
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
