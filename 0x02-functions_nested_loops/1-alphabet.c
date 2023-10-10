#include "main.h"
#include <string.h>
/**
 * main - entry point
 *
 * Return: 0
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
	return;
}
