#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: where the memory area will go to be copied
 * @src: has the memory area to be copied
 * @n: number of bytes to be copied
 *
 * Return: dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
