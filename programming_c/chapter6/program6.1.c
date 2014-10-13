/*******************************************************************************
 * Exercises 6.1 from Programming in C
 * File:    program6.1.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * This is an example program that calculates the absolute value of an integer
 *
*******************************************************************************/

#include <stdio.h>

int main (void)
{
	int number;
	
	printf ("Type in your number: ");
	scanf ("%i", &number);
	
	if ( number < 0)
	{
		number = -number;
	}
	
	printf ("The absolute value is %i\n", number);
	
	return 0;
}
