/*******************************************************************************
 * Exercises 5.10 from Programming in C
 * File:    exercise5.10.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * 10. What would happen if you typed a negative number into Program 5.8? Try it
 * and see.
 *
*******************************************************************************/

// program 5.8


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
