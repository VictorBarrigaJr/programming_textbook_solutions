/*******************************************************************************
 * Example program 3.5 from Programming in C
 * File:    program3-5.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * This program displays two variables and add them together
 *
 ******************************************************************************/
 
#include <stdio.h>

int main(void)
{
	int value1, value2, sum;
	
	value1 = 50;
	value2 = 25;
	sum = value1 + value2;
	printf("The sum of %i and %i is %i.\n", value1, value2, sum);
		
	return 0;
}
