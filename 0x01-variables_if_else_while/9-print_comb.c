#include <stdio.h>

/**
 * main - prints all possible combinations of digit numbers
 * numbers separated by, and a space
 * numbers printed in ascending order
 * only use the putchar function
 * Return: 0 (Success)
 */
int main(void)
{
	int numb;

	for (numb = 48; numb < 58; numb++)
	{
		putchar(numb);
		if (numb < 58)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
