/*******************************************************************************
 * Exercises 7.3 from Programming in C
 * File:    program7.3.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * This is an example program that generates fibonacci numbers
*******************************************************************************/

#include <stdio.h>

int main (void)
{
	int fibonacci[15], i;
	
	fibonacci[0] = 0;	// by definition
	fibonacci[1] = 1;	// ditto
	
	for ( i = 2; i < 15; ++i )
		fibonacci[i] = fibonacci[i - 2] + fibonacci[i - 1];
		
	for ( i = 0; i < 15; ++i )
		printf ("%i\n", fibonacci[i]);
		
	return 0;
}
