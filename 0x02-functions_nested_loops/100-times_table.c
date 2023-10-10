#include "main.h"
/**
 * print_times_table - prints n times table
 *@n: table size
 *
 * Return: void
 */
void print_times_table(int n)
{
	int digit, multiplier, result;

	for (digit = 0; digit < n + 1; digit++)
	{
		for (multiplier = 0; multiplier < n + 1; multiplier++)
		{
			result = digit * multiplier;
			if (multiplier == 0)
			{
				_putchar(result + 48);
			}
			else if (result / 10 == 0 && multiplier != 0)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar (result + 48);
			}
			else if ((result / 10 > 0) && (result / 10 < 10))
			{
				_putchar(' ');
				_putchar(' ');
				_putchar((result / 10) + 48);
				_putchar((result % 10) + 48);
			}
			else
			{
				_putchar(' ');
				_putchar((result / 100) + 48);
				_putchar((result / 10 % 10) + 48);
				_putchar((result % 10) + 48);
			}
			if (multiplier != n)
			{
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}
