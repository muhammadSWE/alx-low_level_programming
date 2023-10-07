#include <stdio.h>
/**
 *main - entry point
 *
 *Return: 0
 */
int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		if (i == 9)
		{
			printf("%d", i);	
		}
		else
		{
			printf("%d, ", i);
		}
	}
	printf("\n");
	return (0);
}
