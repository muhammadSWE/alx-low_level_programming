#include <stdio.h>
/**
  *main - entry point
  *
  *Return: 0
  */
int main(void)
{
	int i;
	int fib[];
	fib [0] = 1;
	fib [1] = 2;

	for (i = 2 ; i < 50 ; i++)
	{
		fib [i] = fib [i - 1] + fib [i - 2];
	}
	for (i = 0 ; i < 50 ; i++)
        {
		printf("%d", fib [i]);
		if (i != 49)
		{
			printf(", ");
		}
        }
	printf("\n");
	return (0);
}
