/*******************************************************************************
 * Program 8.4 from Programming in C
 * File:    program8.4.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * This is an example program on calculating the nth triangular number.
 *
*******************************************************************************/

#include <stdio.h>

void calc_triangular_num (int n)
{
	int i, triangular_num = 0;
	
	for ( i = 1; i <= n; ++i )
		triangular_num += i;
		
	printf ("Triangular number %i is %i\n", n, triangular_num);
}

int main (void)
{
	calc_triangular_num (10);
	calc_triangular_num (20);
	calc_triangular_num (50);
	
	return 0;
}
