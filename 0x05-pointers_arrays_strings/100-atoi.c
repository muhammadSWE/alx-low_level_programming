#include "main.h"
/**
  * _atoi - returns integers in a string
  * @s: string
  *
  * Return: integer
  */
int _atoi(char *s)
{
	unsigned int output = 0;

	int sign = 1;

	while (*s && (*s < '0' || *s > '9'))
	{
		++s;
	}

	if (*s == '-')
	{
		sign = -1;
		++s;
	}

	while (*s && (*s >= '0' && *s <= '9'))
	{
		output = output * 10 + (*s - '0');
		++s;
	}

	return (sign * output);
}
