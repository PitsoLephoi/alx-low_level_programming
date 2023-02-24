#include <stdio.h>
#include "main.h"

/**
* print_remaining_days - takes a date and prints how many days are
* left in the year, taking leap years into account
* @month: month in number format
* @day: day of month
* @year: year
* Return: void
*/

void print_remaining_days(int month, int day, int year)
{
	int total_days = 365;

	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	{
		total_days = 366;
	}

	if (month < 1 || month > 12)
	{
		printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
		return;
	}

	if (day < 1 || day > 31)
	{
		printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
		return;
	}

	if (month == 2 && day > 29)
	{
		printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
		return;
	}

	if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30)
	{
		printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
		return;
	}

	if (month == 2 && day == 29 && !((year % 4 == 0 && year % 100 != 0)
	|| year % 400 == 0))
	{
		printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
		return;
	}

	day = convert_day(month, day);

	printf("Day of the year: %d\n", day);

	printf("Remaining days: %d\n", total_days - day);
}
