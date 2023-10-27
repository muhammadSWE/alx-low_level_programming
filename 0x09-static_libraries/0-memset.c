#include "main.h"
/**
 * *_memset - fill memory with constant bytes
 *@s: pointer 1
 *@b: constant byte
 *@n: unsigned int
 *
 *Return: pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
