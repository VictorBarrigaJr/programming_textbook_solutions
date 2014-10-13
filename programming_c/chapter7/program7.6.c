/*******************************************************************************
 * Exercises 7.6 from Programming in C
 * File:    program7.6.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * This is an example program that introduces character arrays
 *
*******************************************************************************/

#include <stdio.h>

int main (void)
{
	char word [] = { 'H', 'e', 'l', 'l', 'o', '!' };
	int i;
	
	for ( i = 0; i < 6; ++i )
	{
		printf ("%c", word[i]);
	}
	
	printf ("\n");
	
	return 0;
}
