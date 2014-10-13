/*******************************************************************************
 * Exercise 8.2 from Programming in C
 * File:    exercise8.2.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * Modify Program 8.4 so the value of triangularNumber is returned by the 
 * funciton.  Then go back to Program5.5 and change that program so that it 
 * calls the new vercion of the calculateTriangulatNumber function.
 *
*******************************************************************************/

#include <stdio.h>
int number;

int main (void)
{
	int counter;
	void get_number (void); 
	int calc_triangular_num (int number);
	
	for ( counter = 1; counter <= 5; ++counter )
	{
		get_number ();
		printf ("Trinagular number %i is %i\n\n", 
				number, calc_triangular_num(number));
	}
	
	return 0;
}

// Function prompts user to enter the triangular number to be calculated.
void get_number (void)
{
	printf ("What triangular number do you want? ");
	scanf ("%i", &number);	
}

// function calculated the requested triangular number.
int calc_triangular_num (int number)
{
	int i, triangular_num = 0;
	
	for ( i = 1; i <= number; ++i )
		triangular_num += i;
	
	return triangular_num;	
}


