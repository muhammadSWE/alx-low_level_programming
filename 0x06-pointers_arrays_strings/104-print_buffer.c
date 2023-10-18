#include <stdio.h>
#include "main.h"
/**
 * print_buffer - prints a buffer
 * @b: buffer
 * @size: size in bytes
 *
 * Return: void
 */
void print_buffer(char *b, int size) {
	if (size <= 0) {
		printf("\n");
		return;
	}

	int i, j;
	for (i = 0; i < size; i += 10) {
		printf("%08x: ", i);
		for (j = 0; j < 10; j++) {
			if (j % 2 == 0)
				printf(" ");
			if (i + j < size) {
				printf("%02x", b[i + j]);
			} else {
				printf("  ");
			}
		}
		printf(" ");
		for (j = 0; j < 10; j++) {
			if (i + j < size) {
				if (b[i + j] >= 32 && b[i + j] <= 126) {
					printf("%c", b[i + j]);
				} else {
					printf(".");
				}
			} else {
				printf(" ");
			}
		}
		printf("\n");
	}
}
