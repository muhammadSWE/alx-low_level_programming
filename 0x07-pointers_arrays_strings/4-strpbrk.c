#include "main.h"
/**
 * *_strpbrk - searches a string for a set of bytes
 *@s: string 1
 *@accept: string 2
 *
 *Return: pointer to byte in s
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
		}
	}
	return (0);
}
