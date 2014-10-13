/*******************************************************************************
 * Exercise 8.5 from Programming in C
 * File:    exercise8.5.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * The criteria used for termination of the loop in the squareRoot function of 
 * Program 8.8 is not suitable for use when computing the square root of very 
 * large or very small numbers.  Rather than comparing the difference between 
 * the value of x and the value of guess^2, the program should compare the 
 * ratio of the two values to 1. The closer this ratio gets to 1, the more 
 * accurate the approximation of the square root.
 * 
 * Modify Program8.8 so this new termination criteria is used.
 *
*******************************************************************************/

#include <stdio.h>

float absolute_val (float x), square_root (float x);

int main (void)
{
	printf ("square_root (2.0) = %f\n", square_root (2.0));
	printf ("square_root (144.0) = %f\n", square_root (144.0));
	printf ("square_root (17.5) = %f\n", square_root (17.5));
	printf ("square_root (989.2) = %f\n", square_root (989.2));
	printf ("square_root (9.0) = %f\n", square_root (9.0));
	return 0;
}

float absolute_val (float x)
{
	if ( x < 0 )
		x = -x;
	return (x);
}

float square_root (float x)
{
	const float epsilon = .00001;
	float 		guess 	= 1.0;
	
	while ( absolute_val ((guess * guess) / x - 1.0) >= epsilon )
		guess = ( x / guess + guess ) / 2.0;
	
	return guess;
}
