#include "main.h"
/**
  *rev_string - reverse a string
  *@s: string parameter
  *
  *Return: void
  */
void rev_string(char *s)
{
	int i;
	char tmp;

	int len = _strlen(s);

	for (i = 0; i < len / 2; i++)
	{
		tmp = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = tmp;
	}
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
