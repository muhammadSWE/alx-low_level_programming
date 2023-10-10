#include <stdio.h>
/**
 *print_to_98 - prints all natural numbers from n to 98
 *@n: first number to be printed
 *
 * Return: void
 */
void print_to_98(int n)
{
	int i;

	if (n < 0)
	{
		for (i = n; i < (99 - n); i++)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
		}
	}
	else if (n > 0 && n < 98)
	{
		for (i = n; i < 99; i++)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
		}
	}
	else
	{
		for (i = n; i > 97; i--)
		{
			printf ("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
		}
	}
}
