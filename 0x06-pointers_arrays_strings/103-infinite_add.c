#include "main.h"
/**
 * *infinite_add - add two numbers
 *@n1: first number
 *@n2: second number
 *@r: result
 *@size_r: buffer size
 *
 * Return: sum of two numbers
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int overflow = 0, digits = 0;
	int len1 = strlen(n1), len2 = strlen(n2);

	if (len1 >= size_r || len2 >= size_r)
	return (0);

	for (int i = max_len - 1; i >= 0 || overflow == 1; i--, digits++)
	{
		int val1 = (i < len1) ? n1[i] - '0' : 0;
		int val2 = (i < len2) ? n2[i] - '0' : 0;

		int temp_tot = val1 + val2 + overflow;

		overflow = (temp_tot >= 10) ? 1 : 0;

		if (digits >= (size_r - 1))
		return (0);

		r[digits] = (temp_tot % 10) + '0';
	}
	if (digits == size_r)
		return (0);

	r[digits] = '\0';
	rev_string(r);

	return (r);
}
/**
  *rev_string - reverse string
  *@s: string parameter
  *
  *Return: void
  */
void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	char temp;

	while (*(s + i) != '\0')
	{
		i++;
	}
	i--;

	for (j = 0; j < i; j++, i--)
	{
		temp = *(s + j);
		*(s + j) = *(s + i);
		*(s + i) = temp;
	}
}
