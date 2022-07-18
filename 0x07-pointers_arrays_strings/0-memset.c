#include "main.h"

/**
 * _memset - fills the memory with a constant byte.
 * @s: memory area to be filled
 * @b: a character to be copied
 * @n: number of times the character is to be copied.
 *
 * Return: a string s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	
	return (s);
}
