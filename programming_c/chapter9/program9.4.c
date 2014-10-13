/*******************************************************************************
 * Program 9.4 from Programming in C
 * File:    program9.4.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * Program to determine tomorrow's date revised 2
 *
*******************************************************************************/

#include <stdio.h>
#include <stdbool.h>

struct date
{
	int month;
	int day;
	int year;
};
struct date date_update (struct date today);
int number_of_days (struct date d);
bool is_leap_year (struct date d);

int main (void)
{
	//struct date date_update (struct date today);
	struct date this_day, next_day;
	
	printf ("Enter today's date (mm dd yyyy): ");
	scanf ("%i%i%i", &this_day.month, &this_day.day, &this_day.year);
	
	next_day = date_update (this_day);
	
	printf ("Tomorrow's date is %i/%i/%.2i.\n", next_day.month, 
			next_day.day, next_day.year % 100);
			
	return 0;
}
/******************************************************************************/

// Function to calculate tomorrow's date

struct date date_update (struct date today)
{
	struct date tomorrow;
	//int number_of_days (struct date d);
	
	if ( today.day != number_of_days (today) )
	{
		tomorrow.day = today.day + 1;
		tomorrow.month = today.month;
		tomorrow.year = today.year;
	}
	else if ( today.month == 12 )
	{
		tomorrow.day = 1;
		tomorrow.month = 1;
		tomorrow.year = today.year + 1;
	}
	else
	{
		tomorrow.day = 1;
		tomorrow.month = today.month + 1;
		tomorrow.year = today.year;
	}
	
	return tomorrow;
}

// Funciton to find the days in the month

int number_of_days (struct date d)
{
	int days;
	//bool is_leap_year (struct date d);
	const int days_per_month[12] = { 31, 28, 31, 30, 31, 30,
									 31, 31, 30, 31, 30, 31 };
									 
	 if ( is_leap_year (d) == true && d.month == 2 )
	 	days = 29;
 	else 
 		days = days_per_month[d.month - 1];
 		
	return days;
}

// Function to determine if it's a leap year

bool is_leap_year (struct date d)
{
	bool leap_year_flag;
	
	if ( ( d.year % 4 == 0 && d.year % 100 != 0 ) || d.year % 400 == 0 )
		leap_year_flag = true;
	else
		leap_year_flag = false;
	
	return leap_year_flag;
}


