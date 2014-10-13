/*******************************************************************************
 * Exercises 5.9 from Programming in C
 * File:    program5.9.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * This is an example program that introduces the do while loop by implementing 
 * a revised program to reverse the digits of a number.
 *
*******************************************************************************/

#include <stdio.h>

int main (void)
{
	int number, right_digit;
	
	printf ("Enter your number.\n");
	scanf ("%i", &number);
	
	do
	{
		right_digit = number % 10;
		printf ("%i", right_digit);
		number = number / 10;
	}
	while ( number != 0);
	
	printf ("\n");
	
	return 0;
		
}
