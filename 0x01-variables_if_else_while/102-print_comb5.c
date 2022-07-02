#include <stdio.h>

/**
 * main - prints all possible combinations of two 
 * two-digit numbers.
 * numbers range from 0 to 99
 * numbers are printed with two digits
 * combination of numbers are separated by ,
 * and a space
 * combination of numbers are printed in ascending order
 * no repetition of the same combination
 * use the putchar functiom
 * Return: 0 (Success)
 */
int main(void)
{
	int num, numb;

	for (num = 0; num < 100; num++)
	{
		for (numb = 0; numb < 100; numb++)
		{
			if (num < numb)
			{
				putchar((num / 10) + 48);
				putchar((num % 10) + 48);
				putchar(' ');
				putchar((numb / 10) + 48);
				putchar((numb % 10) + 48);
				if (num != 98 || numb != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
