#include "main.h"

/**
 * swap_int - swaps he values of two integers.
 * @a: pointer that contains the address of the value of a
 * @b: pointer that contains the address of the value of b
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
