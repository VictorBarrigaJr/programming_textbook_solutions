/*******************************************************************************
 * Exercises 3.6 from Programming in C
 * File:    exercise3.6.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * 6. What output might you expect from the following program?
 * 
 ******************************************************************************/

#include <stdio.h>

int main (void)
{
	int answer, result;
	answer = 100;
	result = answer - 10;
	printf ("The result is %i\n", result + 5);
	return 0;
}

// the output will be "The result is 95"
