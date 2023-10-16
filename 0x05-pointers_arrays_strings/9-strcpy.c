#include "main.h"
/**
  * *_strcpy - copies string of pointer to a destination
  * @dest: destination
  * @src: source string
  *
  * Return: the pointer to dest
  */
char *_strcpy(char *dest, char *src)
{
	int i;
	
	int len = _strlen(src);

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
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
