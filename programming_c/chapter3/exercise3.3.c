/*******************************************************************************
 * Exercises 3.3 from Programming in C
 * File:    exercise3.3.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * 3. What output would you expect from the following program?
 *
 ******************************************************************************/
 
#include <stdio.h>

int main (void)
{
	printf ("Testing...");
	printf ("....1");
	printf ("...2");
	printf ("..3");
	printf ("\n");
	return 0;
}

// program should print to terminal on One line:
// on line 1: "Testing.......1...2..3"
// \n then moves to next line terminates program.
