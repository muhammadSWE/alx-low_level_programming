#include "main.h"
/**
  *puts_half - prints half a string followed by a new line
  *@str: string parameter
  *
  *Return: void
  */
void puts_half(char *str)
{
	int i;

	int len = _strlen(str);

	for (i = len / 2; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
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
