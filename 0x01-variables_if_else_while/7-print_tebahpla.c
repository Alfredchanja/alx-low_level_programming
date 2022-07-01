#include <stdio.h>

/**
 * main - prints the lowercase alphates in reverse
 * followed by new line
 * use the putchar function
 * Return: Alway 0 (Success)
 */
int main(void)
{
	char pla;

	for (pla = 'z'; pla >= 'a'; pla--)
	{
		putchar(pla);
	}
	putchar('\n');
	return (0);
}
