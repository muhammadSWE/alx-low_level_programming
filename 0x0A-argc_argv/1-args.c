#include "main.h"
#include <stdio.h>
/**
 *main - prints number of arguments passed
 *@argc: number of args
 *@argv: array of args
 *
 *Return: 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
