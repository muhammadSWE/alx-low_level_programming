#include "main.h"
#include <stdio.h>
/**
 *main - prints program name followed by a new line
 *@argc: number of args
 *@argv: array of args
 *
 *Return: 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
