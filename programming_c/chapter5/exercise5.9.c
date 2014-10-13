/*******************************************************************************
 * Exercises 5.8 from Programming in C
 * File:    exercise5.8.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * 9. Rewrite Programs 5.2 through 5.5, replacing all uses of the for statement 
 * by equivalent while statements. Run each program to verify that both versions
 * are identical.
 *
*******************************************************************************/

// program 5.2

/*
#include <stdio.h>

int main (voic)
{
	int n, trinagular_number;
	
	trinagular_number = 0;
	n = 1;
	while ( n <= 200 )
	{
		trinagular_number = trinagular_number + n;
		n = n + 1;
	}
	
	printf ("The 200th triangular number is %i\n", trinagular_number);
		
	return 0;	
}
*/

/******************************************************************************/

// program 5.3

/*
#include <stdio.h>

int main (void)
{
	int n, triangular_number;
	
	printf ("TABLE OF TRIANGULAR NUMBERS\n\n");
	printf (" n    Sum from 1 to n\n");
	printf ("---   ---------------\n");
	
	triangular_number = 0;
	n = 1;
	while ( n <= 10 )
	{
		triangular_number += n;
		printf (" %i	      %i\n", n, triangular_number);
		++n;
	}
	
	return 0;
}
*/

/******************************************************************************/

// program 5.4

/*
#include <stdio.h>

int main (void)
{
	int n, number, triangular_number;
	
	printf ("What triangular number do you want? ");
	scanf ("%i", &number);
	
	triangular_number = 0;
	n = 1;
	while ( n <= number)
	{
		triangular_number += n;
		++n;
	}
	
	printf ("Triangular number %i is %i\n", number, triangular_number);
	
	return 0;
}
*/

/******************************************************************************/

// program 5.5


#include <stdio.h>

int main (void)
{
	int n, number, triangular_number, counter;
	
	// repeat 5 times
	counter = 1;
	while ( counter <= 5 )
	{
		// get the number from the user
		printf ("What triangular number do you want? ");
		scanf ("%i", &number);
		
		// calculate the requested triangular number 
		triangular_number = 0;
		n = 1;
		while ( n <= number)
		{
			triangular_number += n;
			++n;
		}
		
		// display the result
		printf ("Triangular number %i is %i\n\n", number, triangular_number);
		
		counter++;
	}
	
	return 0;
}

