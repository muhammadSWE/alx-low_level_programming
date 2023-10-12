#include "main.h"
/**
 * print_diagonal - draw diagonal line
 *@n: number of \
 * Return: void
 */
void print_diagonal(int n)
{

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;

		for (i = 0; i <= n; i++)
		{
			for (j = 0; j < i; j++)
			{
				if (j != i - 1 && i != 1)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('\\');
				}
			}
		_putchar('\n');
		}
	}
}
