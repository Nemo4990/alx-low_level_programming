#include <stdio.h>
/**
 * main- Entery
 * Description- program that prints the alphabet in lowercase & uppercase
 * Return: Always 0.
 */
int main(void)
{
	int ch = 97;
	int n = 65;

	while (ch <= 122)
	{
		putchar (ch);
		ch++;
	}
	while (n <= 90)
	{
		putchar (n);
		n++;
	}
	putchar ('\n');
	return (0);
}
