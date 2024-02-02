#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
/**
 *main - check the code
 *
 *Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    char *c;

    c = "cisfun";
    printf("%lu\n", hash_djb2((unsigned char *)c));
    c = "Don't forget to tweet today";
    printf("%lu\n", hash_djb2((unsigned char *)c));
    c = "98";
    printf("%lu\n", hash_djb2((unsigned char *)c));
    return (EXIT_SUCCESS);
}