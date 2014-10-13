/*******************************************************************************
 * Program 9.5 from Programming in C
 * File:    program9.5.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * Program to update the time by one second
 *
*******************************************************************************/

#include <stdio.h>

struct time
{
	int hour;
	int minutes;
	int seconds;
};

struct time time_update (struct time now);


int main (void)
{
	struct time current_time, next_time;
	
	printf ("Enter the time (hh:mm:ss): ");
	scanf ("%i%i%i", &current_time.hour, &current_time.minutes, 
			&current_time.seconds);
			
	next_time = time_update (current_time);
	
	printf ("Updated time is %.2i:%.2i:%.2i\n", next_time.hour,
		 	next_time.minutes, next_time.seconds);
		 	
 	return 0;
}

/******************************************************************************/

// Function to update the time by one second

struct time time_update (struct time now)
{
	++now.seconds;
	if ( now.seconds == 60 ) 		// next minute 
	{
		now.seconds = 0;
		++now.minutes;
		
		if ( now.minutes == 60 )	// next hour
		{
			now.minutes = 0;
			++now.hour;
			
			if ( now.hour == 24 )	// midnight
				now.hour = 0;
		}
	} 

	return now;
}
