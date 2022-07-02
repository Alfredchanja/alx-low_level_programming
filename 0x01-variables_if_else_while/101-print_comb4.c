#include <stdio.h>

/**
 * main - prints all the possible
 * different combinations of three digits
 * numbers must be separated by ,
 * and a space.
 * the three digits must be different
 * no repetion of a combination
 * print oly the smallest combination of three digits
 * numbers should be printed in ascending order
 * with three digits
 * use the putchar function
 * Return: 0 (Success)
 */
int main(void)
{
	int num, numb, number;

	for (num = 48; num < 58; num++)
	{
		for (numb = 49; numb < 58; numb++)
		{
			for (number = 50; number < 58; number++)
			{
				if (number > numb && numb > num)
				{
					putchar(num);
					putchar(numb);
					putchar(number);
					if (num != 56 || numb != 57 || number != 58)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
