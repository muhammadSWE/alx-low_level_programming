#include "main.h"
/**
 * *_strstr - locates a substring
 *@haystack: string 1
 *@needle: string 2
 *
 *Return: pointer to located substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}
			if (!needle[j + 1])
			{
				return (haystack + i);
			}

		}
	}
	return (NULL);
}
