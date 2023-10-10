#include "main.h"
/**
 *print_last_digit - prints the last digit of a number
 *@x: number entered
 * Return: int
 */
int print_last_digit(int x)
{
	int i;
	i = _abs(x) % 10;
	i = _abs(i);

	return (i);
}
