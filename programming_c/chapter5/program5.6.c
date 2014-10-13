/*******************************************************************************
 * Exercises 5.6 from Programming in C
 * File:    program5.6.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * This is an example program that introduces the while statement.
 *
*******************************************************************************/

#include <stdio.h>

int main(void)
{
	int count = 1;
	
	while (count <= 5 )
	{
		printf ("%i\n", count);
		++count;
	}
	
	return 0;
}
