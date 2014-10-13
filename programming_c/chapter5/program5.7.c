/*******************************************************************************
 * Exercises 5.7 from Programming in C
 * File:    program5.7.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * This is an example program finds the greates common divisor of two nonnegati-
 * ve integer values typed by the user.
 *
*******************************************************************************/

#include <stdio.h>

int main (void)
{
	int number1, number2, temp;
	
	printf ("Please type in two nonnegative integers.\n");
	scanf ("%i%i", &number1, &number2);
	
	while (number2 != 0 )
	{
		temp = number1 % number2;
		number1 = number2;
		number2 = temp;
	}
	
	printf ("Their greatest common divisor is %i\n", number1);
	
	return 0;	
}
