/*******************************************************************************
 * Exercise 8.14 from Programming in C
 * File:    exercise8.13A.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * Modigy the sort function from Program8.12 to take a third argument indicating
 * whether the array is to be sorted in ascending or descending order. Then
 * modigy the  sort algorithm to correctly sort the array into the indicated
 * order.  
 *
*******************************************************************************/

#include <stdio.h>

#define ARRAY_LENGTH 16

void 	display_array (int n_rows, int array[n_rows]), get_sort_type (void),
 		sort (int array[], int array_length, char sort_type);
char 	sort_type;

int array[ARRAY_LENGTH] = { 34, -5, 6, 0, 12, 100, 56, 22,
					 44, -3, -9, 12, 17, 22, 6, 11 };

int main (void)
{					 
 	printf ("\nThe array before the sort: \n");
 	display_array (ARRAY_LENGTH, array);
 	
 	get_sort_type ();
 	
 	sort (array, ARRAY_LENGTH, sort_type);
 	
 	printf ("\nThe array after the sort: \n");
 	display_array (ARRAY_LENGTH, array);
 	
 	return 0;
}

/******************************************************************************/

// Function prompts user to select sort type by entering input.
void get_sort_type (void)
{
	printf ("\n");
	printf ("To sort the array type: 'A' ascending OR 'D' descending order: ");
	scanf ("%c", &sort_type);
	printf ("\n");
}

// Function displays original array to console.
void display_array (int n_rows, int array[n_rows])
{
	int row, column;
	
	for ( row = 0; row < n_rows; ++row )
	{
		printf ("%2i ", array[row]);
	}

	printf ("\n");
}

// Function sorts the array in ascending or descending order.
void sort (int array[], int array_length, char sort_type)
{
	int i, j, temp;

	{
		for ( i = 0; i < array_length -1; ++i )
			for ( j = i + 1; j < array_length; ++j )
				if 	( ( toupper (sort_type) == 'A' && array[i] > array[j] ) ||
					  ( toupper (sort_type) == 'D' && array[i] < array[j] ) )
				{
					temp = array[i];
					array[i] = array[j];
					array[j] = temp;
				}
	}
}
