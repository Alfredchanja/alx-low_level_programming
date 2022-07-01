#include <stdio.h>

/**
 * main - prints the alphabet in upper and lowercase
 * followed by a new line
 * use the putchar function
 * Return: Always 0 (Success)
 */
int main(void)
{
	int  Alpha;


	for (Alpha = 'a'; Alpha <= 'z'; Alpha++)
	{
		putchar(Alpha);
	}
	for (Alpha = 'A'; Alpha <= 'Z'; Alpha++)
	{
		putchar(Alpha);
	}
	putchar ('\n');
	return (0);
}
