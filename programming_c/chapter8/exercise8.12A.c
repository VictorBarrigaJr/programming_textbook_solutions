/*******************************************************************************
 * Exercise 8.14 from Programming in C
 * File:    exercise8.12A.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * A matrix M with i rows, j columns can be transposed into matrix N having j 
 * rows and i columns by simply setting value N a,b equal to the value of M b,a
 * for all relevant alues of a and b.
 *		a. Write a function transposeMatrix that takes as an argument a 4 x 5
 * matrix and a 5 x 4 matrix.  Have the function transpose the 4 x 5 matrix and
 * store the results in the 5 x 4 matrix. Also write a main routine to test the 
 * function.
 *		b. Using variable-length arrays, rewrite the transposematrix function 
 * developed in exercise 12a to take the number of rows and columns as 
 * arguments, and to transpose the matrix of the specified dimensions.  
 *
*******************************************************************************/

#include <stdio.h>
#define ARRAY_ROW 4
#define ARRAY_COLUMNS 5

void display_matrix (int n_rows, int n_cols, int matrix[n_rows] [n_cols]);
int transpose_matrix 	(int n_rows, int n_cols, int matrix1[n_rows] [n_cols], 
						 int x_rows, int x_cols, int matrix2[x_rows] [x_cols]);

int array_m [ARRAY_ROW] [ARRAY_COLUMNS] = 	{
								{ 11, 20,  3, 40,  5 },
								{ 25, 30,  4, 50,  6 },
								{  3, 40,  5, 60,  7 },
								{ 45, 50,  6, 70,  8 }
							};
int array_n [ARRAY_COLUMNS] [ARRAY_ROW];

int main (void)
{
	
	
	printf ("Original array elements: \n");
	display_matrix (ARRAY_ROW, ARRAY_COLUMNS, array_m);
	
	transpose_matrix (	ARRAY_ROW, ARRAY_COLUMNS, array_m, 
						ARRAY_COLUMNS, ARRAY_ROW, array_n );
	
	printf ("\nTransposed array elements: \n");
	display_matrix (ARRAY_COLUMNS, ARRAY_ROW, array_n);
	
	return 0;
}

/******************************************************************************/

// Function displays matrix to console.
void display_matrix (int n_rows, int n_cols, int matrix[n_rows] [n_cols])
{
	int row, column;
	
	for ( row = 0; row < n_rows; ++row )
	{
		for ( column = 0; column < n_cols; ++column )
			printf ("%5i", matrix[row] [column] );
		printf ("\n");
	}
}

// Funciton transposes the elements in array1 into array2.
int transpose_matrix 	(int n_rows, int n_cols, int matrix1[n_rows] [n_cols], 
						 int x_rows, int x_cols, int matrix2[x_rows] [x_cols])
{
	int row, column, temp;
	
	for ( row = 0; row < n_rows; ++row )
	{
		for ( column = 0; column < n_cols; ++column )
		{
			temp = matrix1[row] [column];
			matrix2[column] [row] = temp;	
		}
	}
}
