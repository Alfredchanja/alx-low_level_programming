#include <stdio.h>

/**
 * main - prints all single digit
 * numbers of base 10 starting from 0
 * followed by new l
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x = 0;

	for (x = 0; x < 10; x++)
		printf("%d", x);
	printf("\n");
	return (0);
}
