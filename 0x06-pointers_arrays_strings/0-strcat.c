#include "main.h"
/**
  * *_strcat  - concatenates two strings
  *@*dest: string parameter
  *@*src: string parameter
  *
  *Return: concatenated string dest
  */
char *_strcat(char *dest, char *src)
{
	int lenDest = _strlen(dest);
	int lenSrc = _strlen(src);
	int i;
	int j = 0;

	for (i = lenDest; i < lenDest + lenSrc; i++)
	{
		dest[i] = src[j];
		j++;
	}
	dest[i] = '\0';
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
