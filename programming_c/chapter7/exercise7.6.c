/*******************************************************************************
 * Exercises 7.6 from Programming in C
 * File:    exercise7.6.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
#include <stdio.h>

int main (void)
{
	int fibonacci[15], i;
	
	fibonacci[0] = 0;	// by definition
	fibonacci[1] = 1;	// ditto
	
	for ( i = 2; i < 15; ++i )
		fibonacci[i] = fibonacci[i - 2] + fibonacci[i - 1];
		
	for ( i = 0; i < 15; ++i )
		printf ("%i\n", fibonacci[i]);
		
	return 0;
}
 * 6. You don’t need to use an array to generate Fibonacci numbers.You can 
 * simply use three variables: two to store the previous two Fibonacci numbers 
 * and one to store the current one. Rewrite Program 7.3 so that arrays are not 
 * used. Because you’re no longer using an array, you need to display each 
 * Fibonacci number as you generate it.
*******************************************************************************/

#include <stdio.h>

int main (void)
{
	int fibonacci, fibonacci1, fibonacci2, i;
	fibonacci1 = 0;
	fibonacci2 = 1;
	
	printf ("%i\n%i\n", fibonacci1, fibonacci2); 
	
	for ( i = 2; i < 15; ++i )
	{
		fibonacci = fibonacci1 + fibonacci2;
		printf ("%i\n", fibonacci);
		fibonacci1 = fibonacci2;
		fibonacci2 = fibonacci;
	}
	
	return 0;
}
