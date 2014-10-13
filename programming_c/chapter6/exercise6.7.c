/*******************************************************************************
 * Exercises 6.6 from Programming in C
 * File:    exercise6.6.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * 7. Program 6.10 has several inefficiencies. One inefficiency results from 
 * checking even numbers. Because it is obvious that any even number greater 
 * than 2 cannot be prime, the program could simply skip all even numbers as 
 * possible primes and as possible divisors. The inner for loop is also 
 * inefficient because the value of p is always divided by all values of d from
 * 2 through p–1 .This inefficiency could be avoided by adding a test for the 
 * value of isPrime in the conditions of the for loop. In this manner, the for 
 * loop could be set up to continue as long as no divisor was found and the 
 * value of d was less than p .
 * Modify Program 6.10 to incorporate these two changes. Then run the program to
 * verify its operation. (Note: In Chapter 7, you discover even more efficient 
 * ways of generating prime numbers.)
*******************************************************************************/

/* program 6.10

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
*/

#include <stdio.h>
#include <stdbool.h>

int main (void)
{
	int 	test_value, test_div;
	bool	is_prime;
	
	printf (" 2");
	for ( test_value = 3; test_value <= 50; test_value += 2 )
	{
		is_prime = true;
		
		for ( test_div = 3; test_div < test_value && is_prime == true;
			 test_div += 2)
			if ( test_value % test_div == 0 )
				is_prime = false;
				
			if ( is_prime != false )
				printf (" %i", test_value);
	}
	
	printf ("\n");
	
	return 0;
}
