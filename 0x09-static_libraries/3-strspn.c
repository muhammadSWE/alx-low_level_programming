#include "main.h"
/**
 * *_strspn - gets length of a prefix substring
 *@s: string 1
 *@accept: string 2
 *
 *Return: pointer to first occurrence of c
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int l = 0;

	for (i = 0; accept[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				l++;
				break;
			}
			else if (accept[j + 1] == '\0')
			{
				return (l);
			}
		}
	}
	return (0);
}
