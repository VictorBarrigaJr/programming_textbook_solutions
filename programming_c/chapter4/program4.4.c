/*******************************************************************************
 * Exercises 4.4 from Programming in C
 * File:    program4.4.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * This example program introduces the modulus operator.
*******************************************************************************/

#include <stdio.h>

int main (void)
{
	int a = 25, b = 5, c = 10, d = 7;
	
	printf ("a %% b = %i\n", a % b);
	printf ("a %% c = %i\n", a % c);
	printf ("a %% d = %i\n", a % d);
	printf ("a / d * d + a %% d = %i\n", a / d * d + a % d);
	
	return 0;
}
