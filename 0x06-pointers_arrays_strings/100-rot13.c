#include "main.h"
/**
  * *rot13 - encodes a string using rot13
  *@*s: string
  *
  *Return: encoded string
  */
char *rot13(char *s)
{
	int i, j;
	char preEncode[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char postEncode[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 26; j++)
		{
			if (s[i] == PreEncode[j])
			{
				s[i] = postEncode[j];
			}
		}
	}
	return (s);
}
