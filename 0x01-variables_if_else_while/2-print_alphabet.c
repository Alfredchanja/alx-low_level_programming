#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 * followed by a new line
 * using the putchar function
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
