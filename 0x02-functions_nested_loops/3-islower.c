#include "main.h"
/**
 * _islower - check if char is lowercase
 *@c: the character to be tested
 * Return: 1 if lowercase, otherwise 0.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

