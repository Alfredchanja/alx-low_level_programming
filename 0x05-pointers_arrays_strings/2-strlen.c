#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: pointer that contains the address of a variable
 * Return: the lenght of the string
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
