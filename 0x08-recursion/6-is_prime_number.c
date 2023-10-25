#include "main.h"
/**
 *is_prime_number - checks if an integer is a prime number or not
 *@n: number
 *
 *Return: 1 if n is a prime number, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (isprime(n, n - 1));
}
/**
 *isprime - calculates if a number is prime recursively
 *@x: number
 *@i: iterator
 *
 *Return: 1 if n is prime, 0 if not
 */
int isprime(int x, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if (x % i == 0 && i > 0)
	{
		return (0);
	}
	return (isprime(x, i - 1));
}
