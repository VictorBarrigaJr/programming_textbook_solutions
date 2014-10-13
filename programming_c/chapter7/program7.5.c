/*******************************************************************************
 * Exercises 7.5 from Programming in C
 * File:    program7.5.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * This is an example program on initializint arrays 
 *
*******************************************************************************/

#include <stdio.h>

int main (void)
{
	int array_values[10] = { 0, 1, 4, 9, 16 };
	int i;
	
	for ( i = 5; i < 10; ++i )
	{
		array_values[i] = i * i;
	}	
	
	for ( i = 0; i < 10; ++i )
	{
		printf ("array_values[%i] = %i\n", i, array_values[i]);
	}	
	
	return 0;
}

