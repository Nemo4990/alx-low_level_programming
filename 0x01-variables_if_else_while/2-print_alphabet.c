#include <stdio.h>
/**
 * main - Entery
 * Description- a program that prints the alphabet in lowercase
 * Return: Always 0
 */
int main(void)
{
	int ch = 97;

	while (ch <= 122)
	{
		putchar (ch);
		ch++;
	}
	putchar ('\n');
	return (0);
}
