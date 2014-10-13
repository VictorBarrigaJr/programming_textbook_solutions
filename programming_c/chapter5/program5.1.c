/*******************************************************************************
 * Exercises 5.1 from Programming in C
 * File:    program5.1.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * This is an example program calculating the eighth triangular number.
 *
*******************************************************************************/

#include <stdio.h>

int main(void)
{
	int triangular_number;
	
	triangular_number = 1 + 2 + 3 + 4 + 5 + 6 + 7 + 8;
	
	printf ("The eighth triangular number is %i\n", triangular_number);
	
	return 0;
}
