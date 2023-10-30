#include <stdio.h>
#include "main.h"
/**
 * *create_array - prints a string in reverse
 *@size: array size
 *@c: initialize character
 *
 *Return: pointer to the array. null if failed
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	s = malloc(sizeof(char) * size);

	if (size == 0 || s == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	return (s);
}
