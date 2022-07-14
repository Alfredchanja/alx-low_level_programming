#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: string to be appended to
 * @src: string to be concanated
 * @n: number of bytes to be copied
 * Return: a pointer ro the string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
