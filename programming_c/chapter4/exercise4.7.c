/*******************************************************************************
 * Exercises 4.7 from Programming in C
 * File:    exercise4.7.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * 7. Write a program to evaluats the following expression and displays the 
 * results (remember to use exponential format to display the result:
 * (3.31 x 10 -8 x 2.01 x 10 -7 ) / (7.16 x 10 -6 + 2.01 x 10 -8 )
*******************************************************************************/

#include <stdio.h>

int main (void)
{
	double result;
	result = ((3.31e-8) * (2.01e-7)) / ((7.16e-6) + (2.01e-8));
	
	printf(" The result is %g\n", result);
	
	return 0;
}
