/*******************************************************************************
 * Exercises 7.3 from Programming in C
 * File:    exercise7.3.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * 3. Program 7.2 permits only 20 responses to be entered. Modify that program 
 * so that any number of responses can be entered. So that the user does not 
 * have to count the number of responses in the list, set up the program so that
 * the value 999 can be keyed in by the user to indicate that the last response 
 * has been entered. (Hint: You can use the break statement here if you want to 
 * exit your loop.)
*******************************************************************************/

#include <stdio.h>

int main (void)
{
	// initialize variables
	int rating_counters[11], i, response, num_responses;
	
	// fill rating_counters elements with 0
	for ( i = 1; i <= 10; ++i )
	{
		rating_counters[i] = 0;
	}	
	
	// ask use to input responses
	printf ("Enter your responses\n");
	printf ("When you are done, enter 999\n");
		
	// fill user responses into array, 20x
	while ( 1 )
	{
		scanf ("%i", &response);
		
		if ( response == 999 )
		{
			break;
		}
		
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

