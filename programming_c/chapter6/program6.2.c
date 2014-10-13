/*******************************************************************************
 * Exercises 6.2 from Programming in C
 * File:    program6.2.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * This is an example program that calculates the average of a set of grades and
 * counting the number of failing test grades
 *
*******************************************************************************/

#include <stdio.h>

int main (void)
{
	int 	number_of_grades, i, grade;
	int 	grade_total = 0;
	int		failure_count = 0;
	float	average;
	
	printf ("How many grades will you be entering? ");
	scanf ("%i", &number_of_grades);
	
	for (i = 1; i <= number_of_grades; ++i)
	{
		printf ("Enter grade #%i: ", i);
		scanf ("%i", &grade);
		
		grade_total += grade;
		
		if ( grade < 65 )
		{
			++failure_count;
		}
	}
	
	average = (float) grade_total / number_of_grades;
	
	printf ("\nGrade average = %.2f\n", average);
	printf ("Number of failures = %i\n", failure_count);
	
	return 0;
}
