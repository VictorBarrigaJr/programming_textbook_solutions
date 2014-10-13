/*******************************************************************************
 * Exercises 7.1 from Programming in C
 * File:    program 7.1.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * This is an example program in working with arrays
*******************************************************************************/

#include <stdio.h>

int main(void)
{
	int values[10];
	int index;
	
	values[0] = 197;
	values[2] = -100;
	values[5] = 350;
	values[3] = values[0] + values[5];
	values[9] = values[5] / 10;
	--values[2];
	
	for ( index = 0; index < 10; ++index)
	{
		printf ("values[%i] = %i\n", index, values[index]);
		
	}
	
	return 0;
}
