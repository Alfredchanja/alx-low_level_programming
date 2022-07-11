#include "main.h"

/**
 * puts2 - prints every other character ofa string
 * strating with the first character
 * followed by a new line
 * @str: pointer containing the string to be printed
 */
void puts2(char *str)
{
	int len, i;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
