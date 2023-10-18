#include "main.h"
/**
 * *_strcat - concatenates two strings
 *@*dest: destination string parameter
 *@*src: source string parameter
 *
 *Return: concatenated string dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j, k;

	for (k = 0; dest[k] != '\0'; k++)
	{
		i = k + 1;
	}

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
