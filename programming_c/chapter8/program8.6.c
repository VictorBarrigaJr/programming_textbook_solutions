/*******************************************************************************
 * Program 8.6 from Programming in C
 * File:    program8.6.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * This is an example program to find the greatest common divisor and returning 
 * the result.
 *
*******************************************************************************/

#include <stdio.h>

int gcd (int u, int v)
{
	int temp;
	
	while ( v != 0)
	{
		temp = u % v;
		u = v;
		v = temp;
	}
	
	return u;
}

int main (void)
{
	int result;
	
	result = gcd (150, 35);
	printf ("The gcd of 150 and 35 is %i\n", result);
	
	result = gcd (1026, 405);
	printf ("The gcd of 1026 and 405 is %i\n", result);
	
	result = gcd (83, 240);
	printf ("The gcd of 83 and 240 is %i\n", result);
	
	return 0;
}
