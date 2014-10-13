/*******************************************************************************
 * Exercises 6.5 from Programming in C
 * File:    program6.5.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * This is an example program that implements the sign function
 *
*******************************************************************************/

#include <stdio.h>

int main (void)
{
	int number, sign;
	
	printf ("Please type a number: ");
	scanf ("%i", &number);
	
	if ( number < 0 )
	{
		sign = -1;
	}
	else if ( number == 0 )
	{
		sign = 0;
	}
	else
	{
		sign = 1;
	}
	
	printf ("Sign = %i\n", sign);
	
	return 0;
	
}
