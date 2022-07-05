#include "main.h"

/**
 * main - prints _putchar, followed by a new line
 *
 * Return - 0 (Success)
 */
int main (void)
{
	char main[] = "_putchar";
	int i = 0;

	while (main[i] != '\0')
	{
		putchar("_");
		putchar("p");
		putchar("u");
		putchar("t");
		putchar("c");
		putchar("h");
		putchar("a");
		putchar("r");
		i++;
	
	}
	putchar("\n");

	return (0);
}
