/*******************************************************************************
 * Exercises 6.5 from Programming in C
 * File:    program6.5.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * This is an example program that determines whether a year is a leap year 
 * using coumpound relational tests.
 *
*******************************************************************************/

#include <stdio.h>

int main (void)
{
	int year, rem_4, rem_100, rem_400;
	
	printf ("Enter the yerar to be tested: ");
	scanf ("%i", &year);
	
	rem_4 = year % 4;
	rem_100 = year % 100;
	rem_400 = year % 400;
	
	if ( (rem_4 == 0 && rem_100 != 0) || rem_400 == 0)
	{
		printf ("It's a leap year.\n'");
	}
	else
	{
		printf ("Nope, it's not a leap year.\n");
	}
	
	return 0;
}
