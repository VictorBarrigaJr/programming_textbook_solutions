/*******************************************************************************
 * Exercise 9.2 from Programming in C
 * File:    exercise9.2.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 *  In certain applications, particulartly in the financial area, its oftern 
 * necessary to calculate the number of elapsed days between two dates. For
 * example, the number of days between July 2, 2005, and July 16, 2005, is
 * obviously 14. but how many days are there between August 8, 2004, and
 * February 22, 2005? This calculation requires a bit more thought.
 * Luckily, a formula can be used to calculate the number of days between two
 * dates. This is affected by computing the value of N for each of the two dates
 * and then taking the difference, where N is calculated as follows:
 *
 *		N = 1461 x f(year, month) / 4 + 153 x q(month) / 5 + day 
 * 
 * where
 *
 * f(year, month) =	year - 1	if month <= 2
 *					year		otherwise
 *
 * g(month) =		month + 13	if month <= 2
 *					month + 1	otherwise					
 *
 * As an example of applying the fomula, to calculate the number of days between
 * August 8, 2004, and February 22, 2005, you can calculate the values of N1
 * and N2 by substituting the appropriate values into the preceding formula as
 * shown:
 *
 * N1 	= 1461 x f(2004, 8) / 4 + 153 x g(8) / 5 + 8
 *		= (1461 x 2004) /4 + (153 x 9) / 5 + 8
 *		= 2,927,844 / 4 + 1,377 / 5 + 8
 *		= 731,961 + 271 + 8
 *		= 732,244
 *
 * N2	= 1461 x f(2005, 2) / 4 + 153 x g(2) / 5 + 22
 *		= (1461 x 2004) / 4 + (153 x 15) / 5 + 22
 *		= 2,927,844 / 4 + 2995 / 5 + 22
 *		= 731,961 + 459 + 22
 *		= 731,442
 *
 * Number of elapsed days 	= N2 - N1
 *							= 732,442 - 732,244
 *							= 198
 *
 * So the number of days between the two dates is shown to be 202. The preceding
 * formula is applicable for any dates after March 1, 1900 (1 must be added to
 * N fo dates from March 1, 1800, to February 28, 19000, and 2 must be added
 * for dates between march 11700, and February 28, 1800).
 *
 * Write a program that permits the user to type in two dates and then
 * calculates the number of elapsed days between the two dates. Try to structure
 * the program logically into separate functions. For example, you should have
 * a function that accepts as an argument a date structure and returns the value
 * of N computed as shown previously. This function can then be called twice,
 * once for each date, and the difference taken to determine the number of
 * elapsed days.
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

int main (void)
{
	int number1, number2, difference;
	
	printf ("Enter the first date (mm dd yyyy): ");
	scanf ("%i%i%i", &date1.month, &date1.day, &date1.year);
	number1 = elapsed_days (date1);
	
	printf ("Enter the second date (mm dd yyyy): ");
	scanf ("%i%i%i", &date1.month, &date1.day, &date1.year);
	number2 = elapsed_days (date1);

	printf ("The number of elapsed_days is: %i days.\n\n",
			difference = (number2 - number1));
	
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

// Function to determine number of elapsed days.
int elapsed_days (struct date d)
{
	date_update(d);
	int n;
	
	n = ( ( 1461 * new_date.year ) / 4 ) + ( ( 153 * new_date.month ) / 5 ) 
		+ new_date.day;
	
	return n;
}
