#include "main.h"
/**
  * *_strncpy  - copies a string
  *@*dest: string parameter
  *@*src: string parameter
  *@n: bytes used from source
  *
  *Return: new string dest
  */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[j];
	}
	for (i; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
