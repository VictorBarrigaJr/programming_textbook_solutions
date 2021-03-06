/*******************************************************************************
 * Exercise 8.14 from Programming in C
 * File:    exercise8.10A.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * Write a function prime that returns 1 if its argument is a prime number and
 * returns 0 otherwise.
 *
*******************************************************************************/

#include <stdio.h>

void get_integer (void);
int number, prime (int number), result;

int main (void)
{	 
	get_integer ();
	
	result = prime (number);
	
	if ( result == 1 )
		printf ("%i is prime.\n", number);
	else
		printf ("%i is not prime.\n", number);
	
	return 0;
}

/******************************************************************************/

// Function prompts user to enter the a integer.
void get_integer (void)
{
	printf ("\nPlease enter an integer to check whether it is prime or not: ");
	scanf ("%i", &number);
}

// function checks if number is a prime
int prime (int number)
{
	int c;
	
	for ( c = 2; c <= number - 1; c++)
	{
		if ( number % c == 0 )
			return 0;
	}
		if ( c == number )
			return 1;
}
