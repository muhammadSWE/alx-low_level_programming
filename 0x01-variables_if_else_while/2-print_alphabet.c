#include <stdio.h>
/**
  * main - entry point
  *
  * Return: 0
  */
int main(void)
{
	char alphabet[26] = "abcdefghijklmnopqrtsuvwxyz";
	int i;

	for (i = 0 ; i < 26 ; i++)
	{
		putchar(alphabet[i]);
	}

	putchar('\n');

	return (0);

}
