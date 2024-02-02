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
    hash_table_t *ht;
    char *c;

    ht = hash_table_create(1024);
    hash_table_set(ht, "c", "fun");
    hash_table_set(ht, "python", "awesome");
    hash_table_set(ht, "Bob", "and Kris love asm");
    hash_table_set(ht, "N", "queens");
    hash_table_set(ht, "Asterix", "Obelix");
    hash_table_set(ht, "Betty", "Cool");
    hash_table_set(ht, "98", "Battery Street");
    hash_table_set(ht, "c", "isfun");

    c = hash_table_get(ht, "python");
    printf("%s:%s\n", "python", c);
    c = hash_table_get(ht, "Bob");
    printf("%s:%s\n", "Bob", c);
    c = hash_table_get(ht, "N");
    printf("%s:%s\n", "N", c);
    c = hash_table_get(ht, "Asterix");
    printf("%s:%s\n", "Asterix", c);
    c = hash_table_get(ht, "Betty");
    printf("%s:%s\n", "Betty", c);
    c = hash_table_get(ht, "98");
    printf("%s:%s\n", "98", c);
    c = hash_table_get(ht, "c");
    printf("%s:%s\n", "c", c);
    c = hash_table_get(ht, "javascript");
    printf("%s:%s\n", "javascript", c);
    return (EXIT_SUCCESS);
}