/*******************************************************************************
 * Exercise 8.9 from Programming in C
 * File:    exercise8.9.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * The least common multiple (lcm) of two positive integers u and v is the 
 * smallest positive intger that is evenly divisible by both u and v. Thus, the
 * lan of 15 and 10, written lcm (15, 10), is 30 because 30 is the smallest 
 * integer divisible by both 15 and 10. Write a function lcm that takes two 
 * integer arguments and returns their lcm. The lcm function should calculate 
 * the least common multiple by calling the gcd function from Program 8.6 in
 * accordance with the following identity:
 *	lcm (u, v) = uv / gcd (u, v)		u, v >= 0
 *
*******************************************************************************/

#include <stdio.h>

int u, v, gcd (int u, int v), lcm (int u, int v);
void get_integers (void);

int main (void)
{
	get_integers ();
	printf ("\nThe least common multiple of %i and %i is %i\n\n", 
			u, v, lcm (u, v));
	return 0;
}

/******************************************************************************/

// Function prompts user to enter the two positive integers u and v.
void get_integers (void)
{
	do
	{
	printf ("\nPlease provide a positive integer u: ");
	scanf ("%i", &u);
	
	printf ("\nPlease provide a positive integer v: ");
	scanf ("%i", &v);
	}
	while ( u < 0 || v < 0 );
}

// Function finds the greatest common divisor and returns the result.
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

// Function finds the least common multiple.
int lcm (int u, int v)
{
	int result;
	return result = ( u * v ) / gcd (u, v);
}

