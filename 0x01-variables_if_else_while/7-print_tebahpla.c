#include <stdio.h>
/**
  * main - entry point
  *
  * Return: 
 */
int main(void)
{
		char alphabet[26] = "zyxwvutsrqponmlkjihgfedcba";
		int i;

	for (i = 0 ; i < 26 ; i++)
	{
		putchar(alphabet[i]);
	}

	putchar('\n');
	return (0);

}
