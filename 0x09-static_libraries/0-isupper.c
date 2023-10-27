#include "main.h"
/**
 * _isupper - check if char is uppercase
 *@c: the character to be tested
 * Return: 1 if upper, otherwise 0.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
