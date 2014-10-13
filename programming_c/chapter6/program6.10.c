/*******************************************************************************
 * Exercises 6.10from Programming in C
 * File:    program6.10.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * This is an example program that generates a table of prime numbers.
 *
*******************************************************************************/

#include <stdio.h>

int main (void)
{
	int		test_value, test_div;
	_Bool	is_prime;
	
	for ( test_value = 2; test_value <= 50; ++test_value )
	{
		is_prime = 1;
		
		for ( test_div = 2; test_div < test_value; ++test_div )		
			if ( test_value % test_div == 0 )
				is_prime = 0;
				
			if ( is_prime != 0 )
				printf ("%i ", test_value);
	}
	
	printf ("\n");
	
	return 0;
}
