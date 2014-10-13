/*******************************************************************************
 * Exercise 9.4 from Programming in C
 * File:    exercise9.4.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * If you take the value of N as computed in exercise 2, subtract 621,049 from
 * it, and then take that result module 7, you get a number from 0 to 6 that
 * represents the day of the week (Sunday through Saturday, respectively) on
 * which the particular day falls. For example, the value of N computed for
 * August 8, 2004 is 732,239 as derived previously. 732, 239 - 621, 049 gives
 * 111, 190, and 111, 190 % 7 gives 2, indicating that this date falls on a
 * Tuesday.
 * Use the functions developed in the previous exercise to develop a program
 * that displays the day of the week on which a particular date falls. make
 * certain that the program displays the day of the week in English (such as
 * "Monday").
 *
*******************************************************************************/

#include <stdio.h>
#include <stdbool.h>

struct date
{
	int month;
	int day;
	int year;
	
} date1, new_date;


bool is_month_2_or_less (struct date d);
struct date date_update (struct date d);
int elapsed_days (struct date d);
char day_of_the_week (int n);

int main (void)
{
	int number;
	printf ("Enter the date (mm dd yyyy): ");
	scanf ("%i%i%i", &date1.month, &date1.day, &date1.year);
	
	printf ("\n%i/%i/%i was a ", date1.month, date1.day, date1.year);
	elapsed_days (date1);
	printf (".\n\n");

	return 0;
}

/******************************************************************************/

// Function to determine if date given is <= 2.
bool is_month_2_or_less (struct date d)
{
	bool less_than_2_flag;
	
	if ( d.month <= 2)
		less_than_2_flag = true;
	else
		less_than_2_flag = false;
	
	return less_than_2_flag;
}

// Function to change values in date if month <= 2.
struct date date_update (struct date d)
{
	if ( is_month_2_or_less (d) == true )
		new_date = (struct date) { date1.month + 13, date1.day, date1.year - 1};	
	else
		new_date = (struct date) { date1.month + 1, date1.day, date1.year };
}

// Function to determine weekday number.
int elapsed_days (struct date d)
{
	date_update(d);
	int n;
	
	n = (( ( 1461 * new_date.year ) / 4 ) + ( ( 153 * new_date.month ) / 5 ) 
		+ new_date.day - 621049) % 7;
	
	 day_of_the_week (n);
}

// Function to print day of the week to console.
char day_of_the_week (int n)
{
	
	struct week
	{	
		char day[9];
	};

	const struct week weekday[7] =
	{
		{'S', 'u', 'n', 'd', 'a', 'y'},
		{'M', 'o', 'n', 'd', 'a', 'y'},
		{'T', 'u', 'e', 's', 'd', 'a', 'y'},
		{'W', 'e', 'd', 'n', 'e', 's', 'd', 'a', 'y'},
		{'T', 'h', 'u', 'r', 's', 'd', 'a', 'y'},
		{'F', 'r', 'i', 'd', 'a', 'y'},
		{'S', 'a', 't', 'u', 'r', 'd', 'a', 'y'}
	
	};
	
	switch(n)
	{
		case 0:
			printf ("%c%c%c%c%c%c", weekday[0].day[0], weekday[0].day[1], 
					weekday[0].day[2], weekday[0].day[3], weekday[0].day[4], 
					weekday[0].day[5]);
			break;
		case 1:
			printf ("%c%c%c%c%c%c", weekday[1].day[0], weekday[1].day[1], 
					weekday[1].day[2], weekday[1].day[3], weekday[1].day[4], 
					weekday[1].day[5]);
			break;
		case 2:
			printf ("%c%c%c%c%c%c%c", weekday[2].day[0], weekday[2].day[1], 
					weekday[2].day[2], weekday[2].day[3], weekday[2].day[4], 
					weekday[2].day[5], weekday[2].day[6]);
			break;
		case 3:
			printf ("%c%c%c%c%c%c%c%c%c", weekday[3].day[0], weekday[3].day[1], 
					weekday[3].day[2], weekday[3].day[3], weekday[3].day[4], 
					weekday[3].day[5], weekday[3].day[6], weekday[3].day[7],
					weekday[3].day[8]);
			break;
		case 4:
			printf ("%c%c%c%c%c%c%c%c", weekday[4].day[0], weekday[4].day[1], 
					weekday[4].day[2], weekday[4].day[3], weekday[4].day[4], 
					weekday[4].day[5], weekday[4].day[6], weekday[4].day[7]);
			break;
		case 5:
			printf ("%c%c%c%c%c%c", weekday[5].day[0], weekday[5].day[1], 
					weekday[5].day[2], weekday[5].day[3], weekday[5].day[4], 
					weekday[5].day[5]);
			break;
		case 6:
			printf ("%c%c%c%c%c%c%c%c", weekday[6].day[0], weekday[6].day[1], 
					weekday[6].day[2], weekday[6].day[3], weekday[6].day[4], 
					weekday[6].day[5], weekday[6].day[6], weekday[6].day[7]);
			break;
	}
}
