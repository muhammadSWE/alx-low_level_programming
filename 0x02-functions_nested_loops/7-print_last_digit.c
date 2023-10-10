#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @x: number entered
 *
 * Return: int
 */

/**
 * _abs - prints absolute value of int
 *@x: int input
 * Return: int
 */
int _abs(int x)
{
	if (x < 0)
	{
		return (-x);
	}
	else
	{
		return (x);
	}
}

int print_last_digit(int x)
{
	int i;

	i = _abs(x) % 10;
	i = _abs(i);

	_putchar(i + '0');
	return (i);
}
