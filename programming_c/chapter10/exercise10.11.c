/*******************************************************************************
 * Exercise 10.11 from Programming in C
 * File:    exercise10.11.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * Extend the str_to_int function from Program10.11 so that if the fiest 
 * character of the string is a nimus sign, the value that follows is taken as a
 * negative number. 
 *
*******************************************************************************/

#include <stdio.h>
#include <stdbool.h>

int main (void)
{
	int str_to_int (const char string[]);
	
	printf ("%i\n", str_to_int("245"));
	printf ("%i\n", str_to_int("100") + 25);
	printf ("%i\n", str_to_int("13x5"));
	printf ("%i\n", str_to_int("-356"));
	
	return 0;
}

/******************************************************************************/

// check for negative prompt.
bool is_negative (const char string[])
{
	bool is_negative_flag;
	if ( string[0] == '-' )
		is_negative_flag = true;
	else
		is_negative_flag = false;
	
	return is_negative_flag;
	
}

// Function to convert a string to an integer.

int str_to_int (const char string[])
{
	int i, int_value, result = 0;
	if ( is_negative (string) )
	{
		for ( i = 1; string[i] >= '0' && string[i] <= '9'; ++i )
		{	
			int_value = string[i] - '0';
			result = result * 10 + int_value;
		}
		result = result * -1;
	}
	else
	{
		for ( i = 0; string[i] >= '0' && string[i] <= '9'; ++i )
		{
			int_value = string[i] - '0';
			result = result * 10 + int_value;
		}
	}
	
	return result;
}
