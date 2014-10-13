/*******************************************************************************
 * Program 8.13A from Programming in C
 * File:    program8.13A.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * This is an example program for using multidemnsional variable-length arrays.
 *
*******************************************************************************/

#include <stdio.h>

int main (void)
{
	void scalar_multiply (int n_rows, int n_cols, 
						  int matrix[n_rows] [n_cols], int scalar);
  	void display_matrix (int n_rows, int n_cols, int matrix[n_rows] [n_cols]);
  	int sample_matrix[3] [5] =
  		{
  			{  7, 16, 55, 13, 12 },
  			{ 12, 10, 52,  0,  7 },
  			{ -2,  1,  2,  4,  9 }
  		};
  		
	printf ("Original matrix:\n");
	display_matrix (3, 5, sample_matrix);
	
	scalar_multiply (3, 5, sample_matrix, 2);
	printf ("\nMultiplied by 2:\n");
	display_matrix (3, 5, sample_matrix);
	
	scalar_multiply (3, 5, sample_matrix, -1);
	printf("\nMultiplied by -1:\n");
	display_matrix (3, 5, sample_matrix);
	
	return 0;
}

// Function to multiply a matrix by a scalar

void scalar_multiply (int n_rows, int n_cols,
					  int matrix[n_rows] [n_cols], int scalar)
{
	int row, column;
	
	for ( row = 0; row < n_rows; ++row )
		for ( column = 0; column < n_cols; ++column )
			matrix[row] [column] *= scalar;
}

// Function to display the matrix

void display_matrix (int n_rows, int n_cols, int matrix[n_rows] [n_cols])
{
	int row, column;
	
	for ( row = 0; row < n_rows; ++row )
	{
		for ( column = 0; column < n_cols; ++column )
			printf ("%5i", matrix[row] [column]);
		printf ("\n");
	}
}
