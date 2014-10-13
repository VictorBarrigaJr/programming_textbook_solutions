/*******************************************************************************
 * Exercises 6.3 from Programming in C
 * File:    program6.3.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * This is an example program that determines whether an integer value typed in 
 * by the user is even or odd and displays an appropriate message at terminal.
 *
*******************************************************************************/

#include <stdio.h>

int main (void)
{
	int number_to_test, remainder;
	
	printf ("Enter your number to be tested.: ");
	scanf ("%i", &number_to_test);
	
	remainder = number_to_test % 2;
	
	if ( remainder == 0)
	{
		printf ("The number is even.\n");
	}
	
	if ( remainder != 0)
	{
		printf ("The number is odd.\n");
	}
	
	return 0;
}
