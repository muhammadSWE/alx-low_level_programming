#include "main.h"
/**
 *print_diagsums - prints the sum of two diagonals
 *@a: square array
 *@size: square size
 *
 *Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, j;

	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				sum1 += a[i][j];
			}

			if (j == size - 1 - i)
			{
				sum2 += a[i][j];
			}
		}
	}
	printf("%d, %d", sum1, sum2);
}
