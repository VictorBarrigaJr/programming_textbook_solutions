/*******************************************************************************
 * Exercises 4.5 from Programming in C
 * File:    exercise4.5.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * 5. What output would you expect from the following program?
*******************************************************************************/

#include <stdio.h>

int main (void)
{
	char c, d;
	
	c = 'd';
	d = c;
	printf ("d = %c\n", d);
	
	return 0;
}

// program will output: d = d
