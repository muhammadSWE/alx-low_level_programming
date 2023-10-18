#include "main.h"
/**
  * *cap_string - capitalizes all words of a string
  *@s: string
  *
  *Return: capitalized string
  */
char *cap_string(char *s)
{
	int i, j;
	char seperators[13] = {' ', '\t', '\n', ',', ';', '.',
		'!', '?', '"', '(', ')', '{', '}'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 13; j++)
		{
			if (s[i] == seperators[j])
			{
				if (s[i + 1] >= 97 && s[i + 1] <= 122)
				{
					s[i + 1] -= 32;
				}
			}
		}
	}
	return (s);
}
