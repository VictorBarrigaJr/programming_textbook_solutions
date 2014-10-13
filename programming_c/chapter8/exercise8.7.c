/*******************************************************************************
 * Exercise 8.7 from Programming in C
 * File:    exercise8.7.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * Write a function that raises an interger to a positive interger power. Call 
 * the function x_to_the_n taking two integer arguments x and n. Have the
 * function return a long int, which represents the redults of calculating x^n.
 *
*******************************************************************************/

#include <stdio.h>

long int x_to_the_n (int x, int n);

int main (void)
{
	printf ("2 to the power of 2 is %li\n", x_to_the_n (2, 2));
	printf ("2 to the power of 0 is %li\n", x_to_the_n (2, 0));
	printf ("2 to the power of 8 is %li\n", x_to_the_n (2, 8));
}

long int x_to_the_n (int x, int n)
{
	long int result = 1;
	
	while ( n > 0 )
	{
		result *= x;
		--n;
	}
	
	return result;
}
