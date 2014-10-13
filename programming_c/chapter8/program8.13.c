/*******************************************************************************
 * Program 8.13 from Programming in C
 * File:    program8.13.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * This is an example program for using multidimansional arrays and functions.
 *
*******************************************************************************/

#include <stdio.h>

int main (void)
{

	void scalar_multiply (int matrix[3] [5], int scalar);
	void display_matrix (int matrix[3] [5]);
	int sample_matrix[3] [5] =
		{
			{  7, 16, 55, 13, 12 },
			{ 12, 10, 52,  0,  7 },
			{ -2,  1,  2,  4,  9 }
		};
		
	printf ("Original matrix:\n");
	display_matrix (sample_matrix);
	
	scalar_multiply (sample_matrix, 2);
	
	printf ("\nMultiplied by 2:\n");
	display_matrix (sample_matrix);
	
	scalar_multiply (sample_matrix, -1);
	
	printf ("\nThen multiplied by -1:\n");
	display_matrix (sample_matrix);
	
	return 0;
}

// function to multiply a 3 x 5 array by a scalar

void scalar_multiply (int matrix[3] [5], int scalar)
{
	int row, column;
	
	for ( row = 0; row < 3; ++row )
		for ( column = 0; column < 5; ++column )
			matrix[row] [column] *= scalar;
}

void display_matrix (int matrix[3] [5])
{
	int row, column;
	
	for (row = 0; row < 3; ++row )
	{
		for (column = 0; column < 5; ++column )
			printf ("%5i", matrix[row] [column]);
			printf ("\n");
	}
}
