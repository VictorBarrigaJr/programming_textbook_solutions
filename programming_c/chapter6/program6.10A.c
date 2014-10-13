/*******************************************************************************
 * Exercises 6.10Afrom Programming in C
 * File:    program6.10A.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * This is an example program that revises program6.10 by using type bool to 
 * generates a table of prime numbers.
 *
*******************************************************************************/

#include <stdio.h>
#include <stdbool.h>

int main (void)
{
	int		test_value, test_div;
	bool	is_prime;
	
	for ( test_value = 2; test_value <= 50; ++test_value )
	{
		is_prime = true;
		
		for ( test_div = 2; test_div < test_value; ++test_div )		
			if ( test_value % test_div == 0 )
				is_prime = false;
				
			if ( is_prime != false )
				printf ("%i ", test_value);
	}
	
	printf ("\n");
	
	return 0;
}
