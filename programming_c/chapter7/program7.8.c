/*******************************************************************************
 * Exercises 7.8 from Programming in C
 * File:    program7.8.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * This is an example program that generates fibonacci numbers using varigable-
 * length arrays.
 *
*******************************************************************************/

#include <stdio.h>

int main (void)
{
	int i, num_fibonacci;
	
	printf ("How many Fibonacci numbers do you want (between 1 and 75)? ");
	scanf ("%i", &num_fibonacci);
	
	if ( num_fibonacci < 1 || num_fibonacci > 75 )
	{
		printf ("Bad number, sorry!\n");
		return 1;
	}
	
	unsigned long long int fibonacci[num_fibonacci];
	
	fibonacci[0] = 0;
	fibonacci[1] = 1;
	
	for ( i = 2; i < num_fibonacci; ++i )
		fibonacci[i] = fibonacci[i - 2] + fibonacci[i - 1];
		
	for ( i = 0; i < num_fibonacci; ++i)
		printf ("%llu ", fibonacci[i]);
	
	printf ("\n");
		
	return 0;
}
