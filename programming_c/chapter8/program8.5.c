/*******************************************************************************
 * Program 8.4 from Programming in C
 * File:    program8.4.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * This is an example program to find the greatest common divisor.
 *
*******************************************************************************/

#include <stdio.h>

void gcd (int u, int v)
{
	int temp;
	
	printf ("The gcd of %i and %i is ", u, v);
	
	while ( v != 0)
	{
		temp = u % v;
		u = v;
		v = temp;
	}
	
	printf ("%i\n", u);
}

int main (void)
{
	gcd (150, 35);
	gcd (1026, 405);
	gcd (83, 240);
	
	return 0;
}
