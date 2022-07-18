#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: a string
 * @accept: string containing the bites to look for
 *
 * Return: a pointer to the byte in s theat matches one of the bytes in accept
 * or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (j = 0; accept[j] != '\0'; j++)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[j])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
