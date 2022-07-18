#include "main.h"
#include <stdio.h>

/**
 * _strchr - locates a character in a string.
 * @s: the string
 * @c: the character to be located
 *
 * Return: pointer if the first occurence of the character is c or
 * NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{
	int a;

	while (1)
	{
		a = *s++;
		if (a == c)
		{
			return (s - 1);
		}
		if (a == 0)
		{
			return (NULL);
		}
	}
}
