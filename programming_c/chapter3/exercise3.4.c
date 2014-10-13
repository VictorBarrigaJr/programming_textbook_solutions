/*******************************************************************************
 * Exercises 3.4 from Programming in C
 * File:    exercise3.4.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * 3. Write a program that subtracts the value 15 from 87 and displays the
 * result, together with an appropriate message, at the terminal.
 *
 ******************************************************************************/
 
#include <stdio.h>

int main (void)
{
	// declare variables
	int value1, value2, subtract;
	
	value1 = 87;
	value2 = 15;
	subtract = value1 - value2;
	
	printf("The value %i subtracted by %i equals %i\n", value1, value2, subtract);
	
	return 0;
}
