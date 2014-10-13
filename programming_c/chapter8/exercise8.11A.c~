/*******************************************************************************
 * Exercise 8.11 from Programming in C
 * File:    exercise8.11.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * Write a function called arraySum that takes two arguments: and integer array 
 * and the number of elements in the array.  Have the function return as its 
 * result the sum of the elements in the array.
 *
*******************************************************************************/

#include <stdio.h>

#define ARRAY_LENGTH 10

int array_to_sum[ARRAY_LENGTH] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 20 };
void print_array (int array[], int num_elements);
int array_sum (int array [], int num_elements);

int main (void)
{
	printf("\nArray elements:\n");
	print_array(array_to_sum, ARRAY_LENGTH);
	
	printf ("\nThe sum of all the elements in the above array is %i.\n", 
			array_sum (array_to_sum, ARRAY_LENGTH));
}

/******************************************************************************/

// Function prints array
void print_array (int array[], int num_elements)
{
	int i;
	for ( i = 0; i < num_elements; i++ )
	{
		printf ("%i ", array[i]);
	}
	
	printf ("\n");
}

// Function takes two arguemnts, an array and length of array and sums up the
// elements within the array. 
int array_sum (int array[], int num_elements)
{
	int i, sum = 0;
	
	for ( i = 0; i < num_elements; ++i )
	{
		sum += array[i];
	}
	
	return sum;
}
