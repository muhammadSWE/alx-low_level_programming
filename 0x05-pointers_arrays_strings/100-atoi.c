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

	int negativecount= 0;

	while (*s == '-')
	{
		negativecount++;
		++s;
	}
	while (*s && (*s < '0' || *s > '9'))
	{
		++s;
	}

	while (*s && (*s >= '0' && *s <= '9'))
	{
		output = output * 10 + (*s - '0');
		++s;
	}

	if (negativecount % 2 == 0)
	{
	return (output);
	}
	else
	{
		return (-output);
	}
}
