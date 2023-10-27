#include "main.h"
/**
 * *_strcmp  - compare two strings
 *@s1: string parameter
 *@s2: string parameter
 *
 *Return: int result
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int output;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			output = s1[i] - s2[i];
			return (output);
		}
		else
		{
			continue;
		}
	}
	return (0);
}
