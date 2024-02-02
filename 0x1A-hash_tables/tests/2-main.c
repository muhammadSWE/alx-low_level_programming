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
    unsigned long int hash_table_array_size;

    hash_table_array_size = 1024;
    c = "cisfun";
    printf("%lu\n", hash_djb2((unsigned char *)c));
    printf("%lu\n", key_index((unsigned char *)c, hash_table_array_size));
    c = "Don't forget to tweet today";
    printf("%lu\n", hash_djb2((unsigned char *)c));
    printf("%lu\n", key_index((unsigned char *)c, hash_table_array_size));
    c = "98";
    printf("%lu\n", hash_djb2((unsigned char *)c));
    printf("%lu\n", key_index((unsigned char *)c, hash_table_array_size));  
    return (EXIT_SUCCESS);
}