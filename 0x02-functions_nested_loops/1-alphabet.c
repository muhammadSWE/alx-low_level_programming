#include "main.h"
#include <string.h>
/**
 * print_alphabet - prints alphabet using _putchar
 *
 * Return: void
 */
void print_alphabet(void)
{
	int i;
	char alpha[] = "abcdefghijklmnopqrstuvwxyz";
	int stringlength = strlen(alpha);

	for (i = 0; i < stringlength; i++)
	{
		_putchar(alpha[i]);
	}
	_putchar('\n');
}
