#include <stdio.h>

/**
 * main - prints all possible
 * different combinations of two digits
 * numbers must be separated by ,
 * and a space
 * the two digits must be different
 * 01 and 10  are considered othe same combination
 * of the two digits 0 and 1
 * print only the smallest combination of two digits
 * print number in ascending order
 * use the putchar function
 * Return: Always 0 (Success)
 */
int main(void)
{
	int numb, numbers;

	for (numb = 48; numb <= 56; numb++)
	{
		for (numbers = 49; numbers <= 57; numbers++)
		{
			if (numbers > numb)
			{
				putchar(numb);
				putchar(numbers);
				if (numb != 56 || numbers != 57)
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
