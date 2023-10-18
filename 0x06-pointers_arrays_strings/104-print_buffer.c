#include <stdio.h>
#include "main.h"
/**
 * print_buffer - prints a buffer
 * @b: buffer
 * @size: size in bytes
 *
 * Return: void
 */
void print_buffer(char *b, int size)
{
	if (size <= 0)
	{
		printf("\n");
		return;
	}

	for (int i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);
		for (int j = 0; j < 10; j++)
		{
			printf("%s%02x", j % 2 == 0 ? " " : "", i + j < size ? b[i + j] : ' ');
		}
		printf(" ");
		for (int j = 0; j < 10; j++)
		{
			char c = '.';

			if (i + j < size && b[i + j] >= 32 && b[i + j] <= 126)
			{
				c = b[i + j];
			}
		printf("%c", c);
		}
	printf("\n");
	}
}
