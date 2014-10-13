/*******************************************************************************
 * Program 8.10 from Programming in C
 * File:    program8.10.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * This is an example program that finds the minimum value in an array.
 *
*******************************************************************************/

#include <stdio.h>

int minimum (int values[], int number_of_elements)
{
	int min_value, i;
	
	min_value = values[0];
	
	for ( i = 1; i < number_of_elements; ++i )
		if ( values[i] < min_value )
			min_value = values[i];
			
	return min_value;
}

int main (void)
{
	int array1[5] = { 157, -28, -37, 26, 10 };
	int array2[7] = { 12, 45, 1, 10, 5, 3, 22 };
	int minimum (int values[], int number_of_elements);
	
	printf ("array1 minimum: %i\n", minimum (array1, 5));
	printf ("array2 minimum: %i\n", minimum (array2, 7));
	
	return 0;
}
