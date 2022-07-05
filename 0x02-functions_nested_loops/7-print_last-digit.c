#include "main.h"

/**
 */
int print_last_digit(int w)
{
	int k;

	if (w < 0)
		w = -w;
	
	k = w % 10;
	
	if (k < 0)
		k = -k;

	_putchar(k + '0');

	return (k);
}
