#include <stdio.h>
/**
 * main - printf "prints the size of various types on the computer it is compiled and run on."
 * Return: Always 0
 */
int main(void)
{
	printf("Size of a char: %zu byte(s)\n", sizeof(char));
	printf("Size of int: %zu byte(s)\n", sizeof(int));
	printf("size of long int: %zu byte(s)\n", sizeof(long int));
	printf("Size of long long int: %zu byte(s)\n", sizeof(long long int));
	printf("Size of float %zu byte(s)\n", sizeof(float));
	return (0);

}

