#include "main.h"
#include <stdio.h>
/**
 *main - adds positive numbers
 *@argc: number of args
 *@argv: array of args
 *
 *Return: 0 if two arguments, 1 if else
 */
int main(int argc, char *argv[])
{
	int num, i, j, k;

	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > '9' || argv[i][j] < '0')
			{
				printf("Error\n");
				return (1);
			}
		}
	}

	for (k = 1; k < argc; k++)
	{
		num = _atoi(argv[k]);
		if (num >= 0)
		{
			sum += num;
		}
	}

	printf("%d\n", sum);
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
