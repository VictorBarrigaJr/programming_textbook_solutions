/*******************************************************************************
 * Exercises 5.2 from Programming in C
 * File:    program5.2.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * This is an example program is to calculate the 200th triangular number.
 *
*******************************************************************************/

#include <stdio.h>

int main (voic)
{
	int n, trinagular_number;
	
	trinagular_number = 0;
	
	for ( n = 1; n <= 200; n = n + 1 )
	{
		trinagular_number = trinagular_number + n;
	}
	
	printf ("The 200th triangular number is %i\n", trinagular_number);
		
	return 0;	
}
