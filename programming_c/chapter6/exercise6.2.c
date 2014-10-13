/*******************************************************************************
 * Exercises 6.2 from Programming in C
 * File:    exercise6.2.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * 2. Write a program that asks the user to type in two integer values at the 
 * terminal. Test these two numbers to determine if the first is evenly 
 * divisible by the second, and then display an appropriate message at the 
 * terminal.
 *
*******************************************************************************/

#include <stdio.h>

int main (void)
{
	int value1, value2, remainder;				// assign variables
	
	printf ("Provide two interger values: ");	// user input two integer values
	scanf ("%i %i", &value1, &value2 );
		
	if ( value1 % value2 == 0 )					// value1 is divisible by value2
	{
		printf ("The value %i is divisible by the value %i\n", 
				value1, value2);				// if true print to console 
	}
	else										// else print to console
	{
		printf ("The value %i is not divisible by the value %i\n", 
				value1, value2);				// if false print to console )
	}
	
	return 0;
}
