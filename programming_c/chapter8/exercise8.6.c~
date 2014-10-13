/*******************************************************************************
 * Exercise 8.6 from Programming in C
 * File:    exercise8.6.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * Modify Program 8.8 so tht squareRoot function accepts a double precision 
 * argument and returns the result as a double precision value.  Be certain to 
 * change the value of the variable epsilon to reflect the fact that double 
 * precision variables are now being used.
 *
*******************************************************************************/

#include <stdio.h>

double absolute_val (double x), square_root (double x);

int main (void)
{
	printf ("square_root (2.0) = %f\n", square_root (2.0));
	printf ("square_root (144.0) = %f\n", square_root (144.0));
	printf ("square_root (17.5) = %f\n", square_root (17.5));
	printf ("square_root (989.2) = %f\n", square_root (989.2));
	printf ("square_root (9.0) = %f\n", square_root (9.0));
	return 0;
}

double absolute_val (double x)
{
	if ( x < 0 )
		x = -x;
	return (x);
}

double square_root (double x)
{
	const double epsilon = .000000001;
	double 		guess 	= 1.0;
	
	while ( absolute_val ((guess * guess) / x - 1.0) >= epsilon )
		guess = ( x / guess + guess ) / 2.0;
	
	return guess;
}
