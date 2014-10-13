/*******************************************************************************
 * Program 9.1 from Programming in C
 * File:    program9,1.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * Program to illustrating a structure. 
 *
*******************************************************************************/

#include <stdio.h>

int main (void)
{
	struct date
	{
		int month;
		int day;
		int year;
	};
	
	struct date today;
	
	today.month = 9;
	today.day = 25;
	today.year = 2004;
	
	printf ("Today's date is %i/%i/%.2i.\n", today.month, today.day, 
			today.year % 100);
			
	return 0;
}
