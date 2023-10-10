#include "main.h"
#include <string.h>
/**
 * print_alphabet_x10 - prints alphabet using _putchar 10 times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i, j;
	char alpha[] = "abcdefghijklmnopqrstuvwxyz";
	int stringlength = strlen(alpha);

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < stringlength; i++)
		{
			_putchar(alpha[i]);
		}
	_putchar('\n');
	}
}
