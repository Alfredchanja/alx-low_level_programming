#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all the numbers from n to 98
 * followed by a new line
 * @n: int type number
 * numbers are separated by a comma and  a space
 * number are printes in order
 * the first printed number idis the number
 * passed to my function
 * the last printed number is 98
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
			n--;
		}
	}
	else
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
			n++;
		}
	}
	printf("\n");
}
