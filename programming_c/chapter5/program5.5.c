/*******************************************************************************
 * Exercises 5.5 from Programming in C
 * File:    program5.5.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * This is an example program that generates a table of triangular numbers using
 * nested for loops.
 *
*******************************************************************************/

#include <stdio.h>

int main (void)
{
	int n, number, triangular_number, counter;
	
	// repeat 5 times
	for ( counter = 1; counter <= 5; ++counter)
	{
		// get the number from the user
		printf ("What triangular number do you want? ");
		scanf ("%i", &number);
		
		// calculate the requested triangular number 
		triangular_number = 0;
		
		for (n= 1; n <= number; ++n)
		{
			triangular_number += n;
		}
		
		// display the result
		printf ("Triangular number %i is %i\n\n", number, triangular_number);
	}
	
	return 0;
}
