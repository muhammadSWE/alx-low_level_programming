#include "main.h"
int actual_sqrt_recursion(int n, int i);
/**
 *_sqrt_recursion - returns the natural square root of a number
 *@n: number
 *
 *Return: int
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (squareroot(n, 0));
}
/**
 *squareroot - recurses natural square root
 *@x: number
 *@i: iterator
 *
 *Return: int
 */
int squareroot(int x, int i)
{
	if (i * i > x)
	{
		return (-1);
	}
	if (i * i == x)
	{
		return (i);
	}
	return (squareroot(x, i + 1));
}
