#include "main.h"
/**
 * print_most_numbers - print number 1356789
 *
 * Return: void
 */
void print_most_numbers(void)
{
	char c;
	
	for (c = 48; c <= 57; c++)
	{
		_putchar(c);
		if (c == 50 || c == 52)
		{
			continue;
		}
	}
}
