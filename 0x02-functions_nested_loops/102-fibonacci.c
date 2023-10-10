#include <stdio.h>
/**
  *main - entry point
  *
  *Return: 0
  */
int main(void)
{
	int i;
	unsigned long fib1 = 0, fib2 = 1, fib3;

	for (i = 0; i < 50; i++)
	{
		fib3 = fib1 + fib2;
		printf("%lu", fib3);

		fib1 = fib2;
		fib2 = fib3;

		if (count != 49)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
