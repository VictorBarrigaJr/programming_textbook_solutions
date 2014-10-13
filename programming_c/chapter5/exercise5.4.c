/*******************************************************************************
 * Exercises 5.3 from Programming in C
 * File:    exercise5.3.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * 4. The factorial of an integer n, written n!, is the product of the 
 * consecutive integers 1 through n . 
 * 
 * For example, 5 factorial is calculated as 5! = 5 x 4 x 3 x 2 x 1 = 120
 *
 * Write a program to generate and print a table of the first 10 factorials.
 *
*******************************************************************************/

#include <stdio.h>

int main (void)
{
	// initialize variables
	int number, counter;
	long long int temp_factorial, factorial;
	
	// receive input from user, up to what number should the table be generated
	do
	{
		printf ("Provide a number between 1 and 20 for the factorial");
		printf (" table to calculate.\n");
		scanf ("%i", &number);
	}
	while (number <= 0 && number >= 21);
	
	// print to console title, header, tables to console
	printf ("\n******************************\n");
	printf ("* TABLE OF FACTORIAL NUMBERS *\n");
	printf ("******************************\n\n");
	printf (" n     Factorial Numbers\n");
	printf ("---   -------------------\n");
	
	// itirate through loop
	temp_factorial = 1;
	for ( counter = 1; counter <= number; counter++)
	{	
		factorial = temp_factorial * counter;
		temp_factorial = factorial;
		
		printf (" %i	%lli\n", counter, factorial);
	}
	
	printf ("-------------------------\n");
	
	return 0;
}
