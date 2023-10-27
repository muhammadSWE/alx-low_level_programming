#include "main.h"
#include <stdio.h>
/**
 *main - prints program name followed by a new line
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
