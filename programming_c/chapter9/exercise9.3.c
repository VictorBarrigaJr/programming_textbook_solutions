/*******************************************************************************
 * Exercise 9.3 from Programming in C
 * File:    exercise9.3.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * Write a function elapsed_time that takes as its arguments two time structures
 * and returns a time structure that represents the elapsed time (in hours,
 * minutes, and seconds) between the two times. So the call:
 *		elapsed_time (time1, time2)
 * where time1 represents 3:45:15 and time2 represents 9:44:03, should return a 
 * time structure that represents 5 hours, 58 minutes and 48 seconds. Be careful
 * with times that cross midnight. 
 *
*******************************************************************************/

#include <stdio.h>

struct time
{
	int hours;
	int minutes;
	int seconds;
} time1, time2, difference;

struct time elapsed_time (struct time t1, struct time t2);

int main (void)
{
	printf ("\nEnter the first time (hh mm ss): ");
	scanf ("%i%i%i", &time1.hours, &time1.minutes, &time1.seconds);
	
	printf ("\nEnter the second time (hh mm ss): ");
	scanf ("%i%i%i", &time2.hours, &time2.minutes, &time2.seconds);

	difference = elapsed_time (time1, time2);
	
	printf ("\nThe elapsed time between ");
	printf ("%.2i:%.2i:%.2i and %.2i:%.2i:%.2i is %.2i:%.2i:%.2i\n\n",
			time1.hours, time1.minutes, time1.seconds,
			time2.hours, time2.minutes, time2.seconds,
			difference.hours, difference.minutes, difference.seconds);	
}

/******************************************************************************/

// Function to subtract time1 from time2
struct time elapsed_time (struct time t1, struct time t2)
{
	struct time diff = { 0, 0, 0 };
	
	diff.seconds = t2.seconds - t1.seconds;
	if ( diff.seconds < 0 )
	{
		diff.seconds += 60;
		--t2.minutes;
	}
	
	diff.minutes = t2.minutes - t1.minutes;
	if ( diff.minutes < 0 )
	{
		diff.minutes += 60;
		--t2.hours;
	}
	
	diff.hours = t2.hours - t1.hours;
	if ( diff.hours < 0 )
	{
		diff.hours += 24;
	}
	
	return diff;
}

