#include <stdio.h>

/**
 * main - prints all the numbers of base 16
 * in lowercase
 * followed by a new line
 * use the putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;
	char alph;

	for (num = 0; num < 10; num++)
	{
		putchar(num);
	}
	for (alph = 'a'; alph <= 'f'; alph++)
	{
		putchar(alph);
	}
	putchar('\n');
	return (0);
}
