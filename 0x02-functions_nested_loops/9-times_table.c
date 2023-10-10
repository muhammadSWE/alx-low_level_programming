#include "main.h"
/**
 * times_table - prints 9 times table
 *
 * Return: void
 */
void times_table(void)
{
	int digit, multiplier, result;

	for (digit = 0; digit < 10; digit++)
	{
		for (multiplier = 0; multiplier < 10; multiplier++)
		{
			result = digit * multiplier;
			if (multiplier == 0)
			{
				_putchar(result + 48);
			}
			else if (result/10 == 0 && multiplier !=0)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar (result + 48);
			}
			else
			{
				_putchar(' ');
				_putchar((result / 10) +48);
				_putchar((result % 10) +48);
			}
			if (multiplier != 9)
			{
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}
