#include <stdlib.h>
#include "main.h"
/**
 * *_strdup - returns pointer to newly allocated space for given string
 *@str: string
 *
 *Return: pointer to the string, NULL if str is NULL or memory insufficient
 */
char *_strdup(char *str)
{
	char *s;
	int i = 0;
	int j;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		i++;
	}

	s = malloc(sizeof(char) * (i + 1));

	if (s == NULL)
	{
		return (NULL);
	}

	for (j = 0; str[j]; j++)
	{
		s[j] = str[j];
	}

	return (s);
}
