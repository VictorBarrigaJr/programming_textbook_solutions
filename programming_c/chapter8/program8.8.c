/*******************************************************************************
 * Program 8.8 from Programming in C
 * File:    program8.8.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * This is an example program that calculates the square root of a number.
 *
*******************************************************************************/

#include <stdio.h>

float absolute_val (float x)
{
	if ( x < 0 )
		x = -x;
	return (x);
}

float square_root (float x)
{
	const float epsilon = .00001;
	float 		guess	= 1.0;
	
	if ( x < 0 )
	{
		printf ("Negative argument to squareRoot.\n");
		return -1.0;
	}
	while ( absolute_val (guess * guess - x) >= epsilon )
		guess = ( x / guess + guess ) / 2.0;
		
	return guess;
}

int main (void)
{
	printf ("square_root (2.0) = %f\n", square_root (2.0));
	printf ("square_root (144.0) = %f\n", square_root (144.0));
	printf ("square_root (17.5) = %f\n", square_root (17.5));
	
	return 0;
}
