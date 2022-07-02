#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,
 * followed by new line.
 * except the letters q and e.
 * use the putchar function twice
 * Return: Always 0 (Success)
 */

int main(void)
{
	char Alp = 'a';

	while (Alp <= 'z')
	{
		if (Alp  != 'e' && Alp != 'q')
		{
			putchar(Alp);
		}
		Alp++;
	}
	putchar('\n');
	return (0);
}
