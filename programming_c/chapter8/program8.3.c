/*******************************************************************************
 * Program 8.3 from Programming in C
 * File:    program8.3.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * This is an example program on calling functions.
 *
*******************************************************************************/

#include <stdio.h>

void print_message (void)
{
	printf ("Programming is fun.\n");
}

int main (void)
{
	int i;
	
	for ( i = 1; i <= 5; ++i )
		print_message ();
	
	return 0;
}

