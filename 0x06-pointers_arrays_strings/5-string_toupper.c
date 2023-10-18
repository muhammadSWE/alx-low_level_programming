#include "main.h"
/**
  * *string_toupper - changes all lowercase letters of a string to uppercase
  *@*s: string
  *
  *Return: uppercase string
  */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			s[i] -= 42;
		}
	}
	return (s);
}