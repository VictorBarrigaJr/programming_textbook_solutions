/*******************************************************************************
 * Exercises 5.8 from Programming in C
 * File:    exercise5.8.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * 8. Program 5.5 allows the user to type in only five different numbers. Modify
 * that program so that the user can type in the number of triangular numbers to
 *  be calculated.
 *
*******************************************************************************/

#include <stdio.h>

int main (void)
{
	int prompt_number, n, number, triangular_number, counter;
	
	// receive input from user
	do
	{
		printf ("Provide a number of triangular numbers to be calculated.\n");
		scanf ("%i", &prompt_number);
	}
	while (prompt_number <= 0);
	
	// repeat 
	for ( counter = 1; counter <= prompt_number; ++counter)
	{
		// get the number from the user
		printf (" %i. What triangular number do you want? ", counter);
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
