#include "main.h"
/**
  * *rot13 - encodes a string using rot13
  *@s: string
  *
  *Return: encoded string
  */
char *rot13(char *s)
{
	int i, j;
	char a2m[52] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char n2z[52] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == a2m[j])
			{
				s[i] = n2z[j];
				break;
			}
		}
	}
	return (s);
}
