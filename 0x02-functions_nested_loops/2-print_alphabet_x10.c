#include "main.h"
#include <string.h>
/**
 * print_alphabet - prints alphabet using _putchar
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
