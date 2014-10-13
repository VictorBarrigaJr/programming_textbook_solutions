/*******************************************************************************
 * Exercises 4.4 from Programming in C
 * File:    exercise4.4.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * 4. Write a program that converts 27degrees Fahrenheit (F) to degrees Celsius
 * (C) using the following formula: c = (F -32) / 1.8
*******************************************************************************/

#include <stdio.h>

int main(void)
{	
	float fahrenheit, celsius; 			  // declare variables

	fahrenheit = 27.0; 					  // assign variables
	celsius = (fahrenheit - 32.0) / 1.8;  
	
	printf (" %.1f degrees Fahrenheit equals %.1f degrees Celsius.\n", 
			fahrenheit, celsius);		  // display to console the conversion
	
	return 0;
}
