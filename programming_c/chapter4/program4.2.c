/*******************************************************************************
 * Exercises 4.2 from Programming in C
 * File:    program4.2.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * This example program illustrates the operations of subtraction,
 * multiplication,, and division using precedence over another operator.
*******************************************************************************/

// demonstate the use of various arithmetic operators

#include <stdio.h>

int main (void)
{
	int a = 100;
	int b = 2;
	int c = 25;
	int d = 4;
	int result;
	
	result = a - b; // subtraction
	printf ("a - b = %i\n", result);
	
	result = b * c; // multiplication
	printf ("b * c = %i\n", result);
	
	result = a / c; // division
	printf ("a / c = %i\n", result);
	
	result = a + b * c; // precedence
	printf ("a + b * c = %i\n", result);
	
	printf ("a * b + c * d = %i\n", a * b + c *d);
	
	return 0;	 
}
