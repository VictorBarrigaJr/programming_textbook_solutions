/*******************************************************************************
 * Exercises 5.3 from Programming in C
 * File:    program5.3.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * This is an example program that generates a table of triangular numbers.
 *
*******************************************************************************/

#include <stdio.h>

int main (void)
{
	int n, triangular_number;
	
	printf ("TABLE OF TRIANGULAR NUMBERS\n\n");
	printf (" n    Sum from 1 to n\n");
	printf ("---   ---------------\n");
	
	triangular_number = 0;
	
	for ( n = 1; n <= 10; ++n )
	{
		triangular_number += n;
		printf (" %i	      %i\n", n, triangular_number);
	}
	
	return 0;
}
