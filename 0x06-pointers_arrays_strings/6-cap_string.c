#include "main.h"
/**
  * *cap_string - capitalizes all words of a string
  *@s: string
  *
  *Return: capitalized string
  */
char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '\n' || s[i] == ' ')
		{
			if (s[i + 1] >= 97 && s[i + 1] <= 122)
			{
				s[i + 1] -= 32;
			}
		}
	}
	return (s);
}
