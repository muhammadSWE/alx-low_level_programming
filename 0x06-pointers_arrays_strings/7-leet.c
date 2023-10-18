#include "main.h"
/**
  * *leet - encodes a string into 1337
  *@*s: string
  *
  *Return: encoded string
  */
char *leet(char *s)
{
	int i, j;
	char preEncode[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char postEncode[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == PreEncode[j])
			{
				s[i] = postEncode[j];
			}
		}
	}
	return (s);
}
