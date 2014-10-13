/*******************************************************************************
 * Program 8.2 from Programming in C
 * File:    program8.2.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * This is an example program that on calling functions.
 *
*******************************************************************************/

#include <stdio.h>

void print_message (void)
{
	printf ("Programming is fun.\n");
}

int main (void)
{
	print_message ();
	print_message ();
	
	return 0;
}

