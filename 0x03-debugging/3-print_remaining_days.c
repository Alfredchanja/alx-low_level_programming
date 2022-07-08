#include <stdio.h>
#include "main.h"

/**
 * print_remaining_days - takes adateand prints how many days are
 * les\ft in the year, taking leap years int account
 * @month: month in number format
 * @day : day of month
 * @year:year
 * Return: void
 */

void print_remaining_days(int month, int day, int year)
{
	if ((year % 4 == 0 || year % 400 == 0) && !(year % 100 == 0))
	{
		if (month >= 2 && day >=60)
		{
			day++;
		}

		printf("Day of the year: %i\n", day);
		printf("Remaining days: %i\n", 366 - day);

	}
	else
	{
		if (month == 2 && day >= 60)
		{
			printf("Day of the year: %02d/%02d/%04d\n", month, day - 29, year);
			printf("Remaining days: %i\n", 366 - day);
		}
		else
		{
			printf("Day of the year: %d\n", day);
			printf("Remaining days: %d\n", 365 - day);
		}
	}
}
