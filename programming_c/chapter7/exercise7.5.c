/*******************************************************************************
 * Exercises 7.5 from Programming in C
 * File:    exercise7.5.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * 5. What output do you expect from the following program?.
 * [victor@frohike:~/Dropbox/programming_c/chapter7]$./exercise7.5
 * 1 1 2 4 8 16 32 64 128 256 
 *
*******************************************************************************/

#include <stdio.h>

int main (void)
{
	int numbers[10] = { 1, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int i, j;
	
	for ( j = 0; j < 10; ++j )
		for ( i = 0; i < j; ++i )
			numbers[j] += numbers[i];
			
		for ( j = 0; j < 10; ++j )
			printf ("%i ", numbers[j] );
		
		printf ("\n");
		
		return 0;
}
