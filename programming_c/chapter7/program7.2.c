/*******************************************************************************
 * Exercises 7.2 from Programming in C
 * File:    program 7.2.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * This is an example program that demonstrates an array counter
*******************************************************************************/

#include <stdio.h>

int main (void)
{
	// initialize variables
	int rating_counters[11], i, response;
	
	// fill rating_counters elements with 0
	for ( i = 1; i <= 10; ++i )
	{
		rating_counters[i] = 0;
	}	
	
	// ask use to input responses
	printf ("Enter your responses\n");
	
	// fill user responses into array, 20x
	for ( i = 1; i <= 20; ++i )
	{
		scanf ("%i", &response);
		
		// if response out of range
		if ( response < 1 || response > 10 )
		{
			printf ("Bad response: %i\n", response);
		}
		else
		{
			++rating_counters[response];
		}
	}
	
	// print table into console
	printf ("\n\nRating 	Nmber of Responses\n");
	printf ("------	------------------\n");
	
	// print counter and array elemnets onto console
	for ( i = 1; i <= 10; ++i )
	{
		printf ("%4i%14i\n", i, rating_counters[i]);
	}	
	return 0;	
}

