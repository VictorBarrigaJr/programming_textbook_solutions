/*******************************************************************************
 * Exercises 6.3 from Programming in C
 * File:    exercise6.3.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * 3. Write a program that accepts two integer values typed in by the user. 
 * Display the result of dividing the first integer by the second, to three-
 * decimal-place accuracy. Remember to have the program check for division by 
 * zero.
 *
*******************************************************************************/

#include <stdio.h>

int main (void)
{
	// initialize variables
	int value1, value2;
	
	// receive two interger values from user
	printf ("Type in two interger values:\n");
	scanf ("%i %i", &value1, &value2);
	
	// displnay to console the result of dividing value1 by value2 
	
	if ( value2 == 0)
	{
		printf ("Dividing by zero.\n");
	}
	else
	{
		printf ("The result of dividing %i by %i is %.3f\n", 
				value1, value2, (float) value1 / value2);
	}
	
	return 0;
}
