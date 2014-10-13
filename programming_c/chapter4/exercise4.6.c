/*******************************************************************************
 * Exercises 4.6 from Programming in C
 * File:    exercise4.6.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * 6. Write a program to evaluate the polynomial shown here:
 * 3x(e3) - 5x(e2) + 5 for x = 2.55
*******************************************************************************/

#include <stdio.h>

int main (void)
{
	float x, squared, cubed, result;						// declare variables
	
	x = 2.55;												// assign variables
	squared = x * x;
	cubed = squared * x;
	result = ((3.0 * cubed) - (5.0 * squared)) + 6.0;
	
	printf (" The evaluated polynomial is %.2f\n", result);	// show on console
	
	return 0;
}
