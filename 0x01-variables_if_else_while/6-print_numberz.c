#include <stdio.h>

/**
 * main - prints all single digits of
 * base 10 starting from 0
 * followed by a new line
 * use the putchar function
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}
