/*******************************************************************************
 * Exercises 5.4 from Programming in C
 * File:    program5.4.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * This is an example program asked the user which triangular number should be
 * calculated, proceedds to calculate that number, and dysplays the result.
 *
*******************************************************************************/

#include <stdio.h>

int main (void)
{
	int n, number, triangular_number;
	
	printf ("What triangular number do you want? ");
	scanf ("%i", &number);
	
	triangular_number = 0;
	
	for ( n = 1; n <= number; ++n)
	{
		triangular_number += n;
	}
	
	printf ("Triangular number %i is %i\n", number, triangular_number);
	
	return 0;
}
