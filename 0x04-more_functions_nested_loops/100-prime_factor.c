#include <stdio.h>
/**
 * main - largest prime factor
 *
 * Return: 0
 */
int main(void)
{
	long int n;
	long int max;
	long int i;

	n = 612852475143;
	max = 0;

	while (n % 2 == 0)
	{
		max = 2;
		n /= 2;
	}

	for (i = 3; i <= n; i = i + 2)
	{
		while (n % i == 0)
		{
			max = i;
			n /= i;
		}
	}

	if (n > 2)
	{
		max = n;
	}

	printf("%ld\n", max);

	return (0);
}
