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
	int i;
	int j = 0;

	for (i = 0; dest[i] != '\0'; i++);
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
		
	dest[i] = '\0';
	return (dest);
}
