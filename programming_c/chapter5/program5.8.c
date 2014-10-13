/*******************************************************************************
 * Exercises 5.8 from Programming in C
 * File:    program5.8.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * This is an example program that reverses the digits of a number.
 *
*******************************************************************************/

#include <stdio.h>
int main (void)
{
	int number, right_digit;
	
	printf ("Enter your number.\n");
	scanf ("%i", &number);
	
	while (number != 0)
	{
		right_digit = number % 10;
		printf ("%i", right_digit);
		number = number / 10;
	}
	
	printf ("\n");
	
	return 0;
}
