#include <stdio.h>

/**
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
