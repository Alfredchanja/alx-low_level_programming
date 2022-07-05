#include "main.h"

/**
 * main - prints _putchar, followed by a new line
 *
 * Return - 0 (Success)
 */
int _putchar(char c)
{
	char putchar[] = "_putchar";
	int i = 0;

	while (putchar[i] != '\0')
	{
		_putchar("_putchar");
		i++;
	
	}
	_putchar("\n");

	return (0);
}
