/*******************************************************************************
 * Exercises 7.4 from Programming in C
 * File:    exercise7.2.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * 4. Write a program that calculates the average of an array of 10 floating-
 * point values.
*******************************************************************************/

#include <stdio.h>

int main (void)
{
	float numbers[11] = { 1.1, 1.2, 2.1, 3.4, 5.5, 
						6.34, 1.0, 7.81, 3.99, 18.3 };
	float num_total = 0;
	int i;
	
	for ( i = 0; i <= 10; ++i )
	{
		num_total += numbers[i];
	}
	
	printf ("The average is %.2f\n", num_total / 10);
	
	return 0;
}
