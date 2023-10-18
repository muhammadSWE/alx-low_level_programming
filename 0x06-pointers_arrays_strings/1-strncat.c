#include "main.h"
/**
  * *_strncat  - concatenates two strings
  *@*dest: string parameter
  *@*src: string parameter
  *@n: bytes used from source
  *
  *Return: concatenated string dest
  */
char *_strncat(char *dest, char *src, int n)
{
	int lenDest = _strlen(dest);
	int i;
	int j = 0;

	for (i = lenDest; i < lenDest + n; i++)
	{
		dest[i] = src[j];
		j++;
	}
	dest[lenDest + n] = '\0';
	return (dest);
}
/**
  *_strlen - gets string length
  *@s: string parameter
  *
  *Return: string length
  */
int _strlen(char *s)
{
	int i;
	int len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}
	return (len);
}
