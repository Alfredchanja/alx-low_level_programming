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
	unsigned int a;

	for (a = 0; a < n; a++)
		s[a] = b;

	return (s);

}
