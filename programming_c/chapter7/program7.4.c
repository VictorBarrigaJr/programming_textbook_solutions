/*******************************************************************************
 * Exercises 7.4 from Programming in C
 * File:    program7.4.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * This is an example program that generates prime numbers, version 2 
 *	-> exercise6.7.c
*******************************************************************************/

#include <stdio.h>
#include <stdbool.h>

int main (void)
{
	int test_value, i, primes[50], prime_index = 2;
	bool is_prime;
	
	primes[0] = 2; 
	primes[1] = 3;  
	
	for ( test_value = 5; test_value <= 50; test_value += 2 )
	{
		is_prime = true;
		
		for ( i = 1; is_prime && test_value / primes[i] >= primes[i]; ++i )
			if ( test_value % primes[i] == 0 )
				is_prime = false;
		if ( is_prime == true )
		{
			primes[prime_index] = test_value;
			++prime_index;
		}
	}
	
	for ( i = 0; i < prime_index; ++i )
		printf ("%i ", primes[i]);
	
	printf ("\n");
	
	return 0;
}
