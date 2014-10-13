/*******************************************************************************
 * Exercise 10.14 from Programming in C
 * File:    exercise10.14.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * Write a function called int_to_str that converts an integer value into a
 * character string. Be certain the function handles negative integers properly.
 * 
*******************************************************************************/

#include <stdio.h>
#include <stdbool.h>

int main (void)
{
	char int_to_str (int number);
	
	int_to_str (12345);		
	int_to_str (123);
	int_to_str (123456789);
	int_to_str (1);
	int_to_str (-67);
	int_to_str (-345);
}

/******************************************************************************/

// Function to find the number of digits in a number
int digits_of_n (int n)
{	
	int count = 0;

	while ( n != 0 )
	{
		n/= 10;
		++count;
	}
	
	return count;
}

char int_to_str (int number)
{
	int digits_of_n (int n);
	int digits = 0, temp_num, i, negative = false;
	
	if ( number < 0 )
	{
		negative = true;
		++digits; 
		number = -number;
	}
	
	digits = digits + digits_of_n(number);
	
	char number_string[digits];
	
	for ( i = digits -1; i >= 0; --i )
	{
		temp_num = number % 10;
		number = number / 10;
		number_string[i] = '0' + temp_num;
	}
	
	if ( negative )
		number_string[0] = '-';

	number_string[digits] = '\0';
	
	printf ("TEST print string = %s\n", number_string);
}
