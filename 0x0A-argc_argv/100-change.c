#include "main.h"
#include <stdio.h>
/**
 *main - prints minimum number of coins to make change
 *@argc: number of args
 *@argv: array of args
 *
 *Return: 1 if more than one argument, else 0
 */
int main(int argc, char *argv[])
{
	int num, i, result;

	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = _atoi(argv[1]);
	result = 0;

	if (num < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5 && num >= 0; i++)
	{
		while (num >= coins[i])
		{
			result++;
			num -= coins[i];
		}
	}

	printf("%d\n", result);
	return (0);
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
