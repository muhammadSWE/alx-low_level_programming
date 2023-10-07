#include <stdio.h>
/**
 *main - entry point
 *
 *Return: 0
 */
int main(void)
{
	int i,j;

	for (i = 48 ; i < 57 ; i++)
	{
		for (j  = i + 1; j < 58; j++)
		{
			if (i == 56 && j == 57)
			{
				putchar(i);
				putchar(j);
			
			}
			else
			{
				putchar(i);
				putchar(j);
				putchar(',');
				putchar(' ');
			}		
		}

	}
	putchar('\n');
	return (0);
}
