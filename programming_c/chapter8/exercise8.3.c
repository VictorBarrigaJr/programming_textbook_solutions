/*******************************************************************************
 * Exercise 8.3 from Programming in C
 * File:    exercise8.3.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * Modify Program8.8 so that the value of epsilon is passed as an argument to 
 * the function.  Try experimenting with values of epsilon to see the effect 
 * that it has on the value of the square root.
 *
*******************************************************************************/

#include <stdio.h>

float absolute_val (float x), square_root (float x, float epsilon);

int main (void)
{
	printf ("%f\n", square_root (3.0, .1));
	printf ("%f\n", square_root (3.0, .01));
	printf ("%f\n", square_root (3.0, .001));
	printf ("%f\n", square_root (3.0, .0001));
	
	return 0;
}

float absolute_val (float x)
{
	if ( x < 0 )
		x = -x;
	return (x);
}

float square_root (float x, float epsilon)
{
	float guess = 1.0;
	
	while ( absolute_val (guess * guess - x) >= epsilon )
		guess = ( x / guess + guess ) / 2.0;
		
	return guess;
}

