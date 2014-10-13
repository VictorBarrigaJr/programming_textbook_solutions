/*******************************************************************************
 * Exercise 8.4 from Programming in C
 * File:    exercise8.4.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * Modify Program8.8 so that the value of guess is printed each time through 
 * the while loop. Notice how quickly the value of guess converges to the 
 * square root. What conclusions can you reach about the number of iterations
 * through the loop, the number whose square root is being calculated, and the 
 * value of the initial guess?
 *
*******************************************************************************/
#include <stdio.h>

float absolute_val (float x), square_root (float x);

int main (void)
{
	printf ("square_root (2.0) = %f\n", square_root (2.0));
	printf ("square_root (144.0) = %f\n", square_root (144.0));
	printf ("square_root (17.5) = %f\n", square_root (17.5));
	printf ("square_root (500.0) = %f\n", square_root (500.0));
	
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
	
	if ( x < 0 )
	{
		printf ("Negative argument to squareRoot.\n");
		return -1.0;
	}
	while ( absolute_val (guess * guess - x) >= epsilon )
	{
		printf ("%f \n", guess);
		guess = ( x / guess + guess ) / 2.0;		
	}
	return guess;
}

