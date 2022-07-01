#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - The program assigns a random number
 * to the variable n
 * The Last digit of %i is %i
 * if the last digit of n is > 5
 * if the last digit of n is == 0
 * if the last digit of n > 6 and != 0
 * return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %i is %i ", n, n % 8);
		if (n % 8 > 5)
		{
			printf("and is greater than 5\n");
		}
		else if (n % 8 == 0)
		{
			printf("and is 0\n");
		}
		else if (n % 8 < 6 && n % 8 != 0)
		{
			printf("and is less than 6 and not 0\n");
		}
	return (0);
}

