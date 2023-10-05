#include <stdio.h>
/**
  *main - entry point
  *
  *Return: 0
  */
int main(void)
{
	printf("Size of a char is: %c byte(s)\n",sizeof(char));
	printf("Size of an int is: %c byte(s)\n",sizeof(int));
	printf("Size of a long int is: %c byte(s)\n",sizeof(long int));
	printf("Size of a long long int is: %c byte(s)\n",sizeof(long long int));
	printf("Size of a float is: %c byte(s)\n",sizeof(float));
}
