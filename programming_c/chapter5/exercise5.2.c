/*******************************************************************************
 * Exercises 5.2 from Programming in C
 * File:    exercise5.2.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * 2. Write a program to generate and display a table of n and n 2 , for integer
 * values of n ranging from 1 to 10. Be certain to print appropriate column 
 * headings.
 *
*******************************************************************************/

#include <stdio.h>

int squared();

int main (void)
{
	// initialize variables
	int number, number_squared;
	// print title, tables and column to console
	printf ("********************************************\n");
	printf ("*  TABLE OF n NUMBER and n NUMBER SQUARED  *\n");
	printf ("********************************************\n");
	printf (" n    Product of n Squared from 1 to n\n");
	printf ("---   --------------------------------\n");
	
	// assign variables
	number_squared = 0;	
	
	// loop print number and square number print square number 
	for ( number = 1; number <= 10; ++number)
	{
		number_squared = number * number;
		printf (" %i		%i\n", number, number_squared);
	}
	
	return 0;
}


