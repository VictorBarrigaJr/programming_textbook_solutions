/*******************************************************************************
 * Exercise 9.5 from Programming in C
 * File:    exercise9.5.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * Write a function called clockKeeper that takes as its argument a dateAndTime
 * structure as defined in this chapter. The function should call the timeUpdate
 * function, and if the time reaches midnight, the function should call the
 * dateUpdate function to switch over to the next day. have the function return
 * the updated dateAndTime structure.
 *
*******************************************************************************/

#include <stdio.h>
#include <stdbool.h>

struct date_and_time
{
	int month;
	int day;
	int year;
	int hours;
	int minutes;
	int seconds;
} current_date_and_time, new_date_and_time;

struct date_and_time time_update (struct date_and_time d);
struct date_and_time date_update (struct date_and_time d);
int number_of_days (struct date_and_time d);
bool is_leap_year (struct date_and_time d);
bool is_next_day (struct date_and_time d);
struct date_and_time clock_keeper (struct date_and_time d);

int main (void)
{
	printf ("Enter the date (mm dd yyyy): ");
	scanf ("%i%i%i", &current_date_and_time.month, &current_date_and_time.day,
			&current_date_and_time.year);
	printf ("Enter the time (hh mm ss): ");
	scanf ("%i%i%i", &current_date_and_time.hours,
			&current_date_and_time.minutes, &current_date_and_time.seconds);
				
	printf ("Date and time entered:  %.2i/%.2i/%.2i %.2i:%.2i:%.2i",
 		 	current_date_and_time.month, current_date_and_time.day,
			current_date_and_time.year % 100, current_date_and_time.hours, 
			current_date_and_time.minutes, current_date_and_time.seconds);
					
	current_date_and_time = clock_keeper (current_date_and_time);
		
 	printf ("\nDate and time update:   %.2i/%.2i/%.2i %.2i:%.2i:%.2i\n\n",
 		 	current_date_and_time.month, current_date_and_time.day,
			current_date_and_time.year % 100, current_date_and_time.hours, 
			current_date_and_time.minutes, current_date_and_time.seconds);
	
	return 0;
}

/******************************************************************************/

// Function to update the time by one second
struct date_and_time time_update (struct date_and_time d)
{
	++d.seconds;
	if ( d.seconds == 60 ) 		// next minute 
	{
		d.seconds = 0;
		++d.minutes;
		
		if ( d.minutes == 60 )	// next hour
		{
			d.minutes = 0;
			++d.hours;
			
			if ( d.hours == 24 )	// midnight
				d.hours = 0;				
		}
	} 

	return d;
}

// Function to calculate tomorrow's date
struct date_and_time date_update (struct date_and_time d)
{
	if ( d.day != number_of_days (d) )	// next day change
		new_date_and_time = (struct date_and_time) { d.month, d.day + 1, d.year, 
													new_date_and_time.hours, 
													new_date_and_time.minutes, 
													new_date_and_time.seconds }; 
	else if ( d.month == 12 )				// next day new years
		new_date_and_time = (struct date_and_time) { 1, 1, d.year + 1, 
													new_date_and_time.hours, 
													new_date_and_time.minutes, 
													new_date_and_time.seconds };
	else  // next day and month
		new_date_and_time = (struct date_and_time) { d.month + 1, 1, d.year, 
													new_date_and_time.hours, 
													new_date_and_time.minutes, 
													new_date_and_time.seconds };
	
	return new_date_and_time;
}

// Funciton to find the days in the month
int number_of_days (struct date_and_time d)
{
	int days;
	const int days_per_month[12] = { 31, 28, 31, 30, 31, 30,
									 31, 31, 30, 31, 30, 31 };
									 
	 if ( is_leap_year (d) == true && d.month == 2 )
	 	days = 29;
 	else 
 		days = days_per_month[d.month - 1];
 		
	return days;
}

// Function to determine if it's a leap year
bool is_leap_year (struct date_and_time d)
{
	bool leap_year_flag;	
	if ( ( d.year % 4 == 0 && d.year % 100 != 0 ) || d.year % 400 == 0 )
		leap_year_flag = true;
	else
		leap_year_flag = false;
	
	return leap_year_flag;
}

// Function to determin if time crossed to next day.
bool is_next_day (struct date_and_time d)
{
	bool is_next_day_flag;	
	if ( d.hours == 0 )
		is_next_day_flag = true;
	else
		is_next_day_flag = false;
	
	return is_next_day_flag;
}

// Function to update time.
struct date_and_time clock_keeper (struct date_and_time d) 
{	
	new_date_and_time = time_update (d);
	if ( is_next_day(new_date_and_time)  == true )
		new_date_and_time = date_update (d);
		
	return new_date_and_time;
}
