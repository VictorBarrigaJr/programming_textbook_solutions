/*******************************************************************************
 * Exercises 6.5 from Programming in C
 * File:    exercise6.5.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * 5. You developed Program 5.9 to reverse the digits of an integer typed in 
 * from the terminal. However, this program does not function well if you type 
 * in a negative number. Find out what happens in such a case and then modify 
 * the program so that negative numbers are correctly handled. For example, if 
 * the number –8645 is typed in, the output of the program should be 5468–.
 *
*******************************************************************************/

#include <stdio.h>
#include <stdbool.h>

int main (void)
{
	int number, right_digit;			// initialize variable
	bool negative_flag = false;
	
	printf ("Type in your number: ");	// receive integer from user
	scanf ("%i", &number);
	
	if ( number < 0 )					// determine if number is negative
		{
			number = -number;
			negative_flag = true;
		}
	do 									// reverse the digits
	{
		right_digit = number % 10;
		printf ("%i", right_digit);
		number = number / 10;
		
	}
	while ( number != 0 );
	
	if ( negative_flag == true )		// if negative add sign
	{
		printf ("-");
	}
	
	printf ("\n");
	
	return 0;
}
		
