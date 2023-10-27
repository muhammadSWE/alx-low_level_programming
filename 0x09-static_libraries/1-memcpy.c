#include "main.h"
/**
 * *_memcpy - copy memory area
 *@dest: destination
 *@src: source
 *@n: unsigned int
 *
 *Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
