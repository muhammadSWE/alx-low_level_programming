#include "main.h"
#include <string.h>
/**
 * main - entry point
 *
 * Return: 0
 */
void print_alphabet(void)
{
	char alpha[] = "abcdefghijklmnopqrstuvwxyz";
	for (int i = 0; i < strlen(alpha); i++)
	{
		putchar(alpha[i]);
	}
	return;
}
int main(void)
{
	print_alphabet();
	return (0);
}
