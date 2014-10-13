/*******************************************************************************
 * Exercises 4.1 from Programming in C
 * File:    program4.1.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * This example program is made to use the basic data types.
*******************************************************************************/

#include <stdio.h>

int main (void)
{
	int interger_var = 100;
	float floating_var = 331.79;
	double double_var = 8.44e+11; //844,000,000,000. or 8.44 * 10e11
	char char_var = 'W';
	_Bool bool_var = 0;
	
	printf ("interger_var = %i\n", interger_var);
	printf ("floating_var = %f\n", floating_var);
	printf ("double_var = %e\n", double_var); 
	printf ("double_var = %g\n", double_var);
	printf ("char_var = %c\n", char_var);
	printf ("bool_var = %i\n", bool_var);
	
	return 0;
}
