/*******************************************************************************
 * Program 8.9 from Programming in C
 * File:    program8.9.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * This is an example program that finds the minimum value in an array.
 *
*******************************************************************************/

#include <stdio.h>

int minimum (int values[10])
{
	int min_value, i;
	
	min_value = values[0];
	
	for ( i = 1; i < 10; ++i )
		if ( values[i] < min_value )
			min_value = values[i];
			
	return min_value;
}

int main (void)
{
	int scores[10], i, min_score;
	int minimum (int values[10]);
	
	printf ("Enter 10 scores\n");
	
	for ( i = 0; i < 10; ++i )
		scanf ("%i", &scores[i]);
		
	min_score = minimum (scores);
	printf ("\nMinimum score is %i\n", min_score);
	
	return 0;
}
