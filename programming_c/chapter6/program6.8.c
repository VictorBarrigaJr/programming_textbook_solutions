/*******************************************************************************
 * Exercises 6.8from Programming in C
 * File:    program6.8.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * This is an example program that evaluates a simple expression of the form:
 *		 number 	operator 	number.
 *
*******************************************************************************/

#include <stdio.h>

int main (void)
{
	float 	value1, value2;
	char 	operator;
	
	printf ("Type in your expression.\n");
	scanf ("%f %c %f", &value1, &operator, &value2);
	
	if ( operator == '+' )
	{
		printf ("%.2f\n", value1 + value2);
	}
	else if ( operator == '-' )
	{
		printf ("%.2f\n", value1 - value2);
	}
	else if ( operator == '*' )
	{
		printf ("%.2f\n", value1 * value2);
	}
	else if ( operator == '/' )
	{
		printf ("%.2f\n", value1 / value2);
	}
	
	return 0;
}
