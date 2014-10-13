/*******************************************************************************
 * Exercises 5.11 from Programming in C
 * File:    exercise5.11.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * 11. Write a program that calculates the sum of the digits of an integer. For
 * example, the sum of the digits of the number 2155 is 2 + 1 + 5 + 5 or 13. The
 * program should accept any arbitrary integer typed in by the user.
 *
*******************************************************************************/

#include <stdio.h>

int main (void)
{
	
	int number, temp_number, sum, original_number; 	// initialize variables
	
	do 												// receive input from user
	{
		printf ("To calculate the sum of the digits of an integer,"); 
		printf (" provide a non-negative integer. \n");
		scanf (" %i", &number);
	
	}
	while (number <= 0);
	
	sum = 0; 										// assign variables
	original_number = number;
	
	while (number != 0)	
	{
		temp_number = number % 10; // number by modulo add remainder to sum 
		sum += temp_number;
		number /= 10;		
	}			
	
	printf ("\nThe sum of your digits %i is %i\n", // print to console total 
			 original_number, sum);
	
	return 0;
}
