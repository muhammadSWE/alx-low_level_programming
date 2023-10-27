#include "main.h"
#include <stdio.h>
/**
 *main - multiplies two numbers
 *@argc: number of args
 *@argv: array of args
 *
 *Return: 0 if two arguments received, 1 if else
 */
int main(int argc, char *argv[])
{
	int product;

	if (argc == 3)
	{
		product = _atoi(argv[1]) * _atoi(argv[2]);
		printf("%d\n", product);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
/**
  * _atoi - returns integers in a string
  * @s: string
  *
  * Return: integer
  */
int _atoi(char *s)
{
	unsigned int output = 0;

	int negativecount = 0;

	while (*s && (*s < '0' || *s > '9'))
	{
		if (*s == '-')
		{
			negativecount++;
		}
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
