/*******************************************************************************
 * Exercise 10.12 from Programming in C
 * File:    exercise10.12.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * Write a function called str_to_float that converts a character string into a
 * floating point value. Have the function acept an optional leading minus sign.
 * So, tha call: 
 *		str_to_float ("-867.6921"); 
 * should return the value -867.6921
 * 
*******************************************************************************/
#include <stdio.h>
#include <stdbool.h>

int main (void)
{
	float str_to_float (char string[]);
		
	printf ("TEST 1 s/b    -10.18   = %8.2f\n", str_to_float ("-10.18"));
	printf ("TEST 2 s/b    245.00   = %8.2f\n", str_to_float ("245"));
	printf ("TEST 3 s/b    125.00   = %8.2f\n", str_to_float ("100") + 25);
	printf ("TEST 4 s/b     13.00   = %8.2f\n", str_to_float ("13x5"));
	printf ("TEST 5 s/b   -356.00   = %8.2f\n", str_to_float ("-356"));
	printf ("TEST 6 s/b     10.22   = %8.3f\n", str_to_float ("10.221"));
	printf ("TEST 7 s/b    101.00   = %8.2f\n", str_to_float ("25.25") * 4);
	printf ("TEST 8 s/b   -867.6921 = %8.4f\n", str_to_float ("-867.6921"));
	printf ("TEST 8 s/b -1,735.3842 = %8.4f\n", str_to_float ("-867.6921") * 2);
	
	return 0;
}

/******************************************************************************/

// function to convert number into decimal.
// TEST PASSED 
float decimal_convert (int decimal_at, int count, int result)
{
	float decimal = .1;
	int i;
	int loops = count - decimal_at -2;
	for ( i = 0; i < loops; ++i )
		decimal *= .1;
	decimal = ( decimal * result ) + .00005;
	return decimal;
}

// Function to convert a string to an integer.

float str_to_float (char string[])
{
	float decimal_convert (int decimal_at, int count, int result);
	int negative = false, i = 0, decimal_at, result = 0, int_value, 
		period = false;
	float decimal, final;
	
	// check string for negative sign
	if ( string[0] == '-' )
	{
		negative = true;
		i = 1;
	}
	// itirate through string as long as i = number or period char
	while ( string[i] >= '0' && string[i] <= '9' || string[i] == '.' )
	{
		if ( string[i] == '.' )  // if period char is found
		{
			decimal_at = i;
			period = true;
			++i;						
		}
		int_value = string[i] - '0'; // using ASCII subtracts char - char = int
		result = result * 10 + int_value;
		++i;
	}
	
	if ( period ) // adds decimal 
		final = decimal_convert (decimal_at, i, result);
	else
		final = result;
	
	if ( negative ) // makes negative
		final = -final;
	
	return final;
	
}
