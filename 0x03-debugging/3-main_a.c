#include <stdio.h>
#include "main.h"
/**
 * main - print days left
 * considering leap years
 * Return: 0
 */
int main(void)
{
int month;
int day;
int year;
month = 4;
day = 01;
year = 1997;
printf("Date: %02d/%02d/%04d\n", month, day, year);
day = conver_day(month, day);
print_remaining_days(month, day, year);
return (0);
}

