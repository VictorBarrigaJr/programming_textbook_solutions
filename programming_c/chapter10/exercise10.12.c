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
	char remove_string (char string[], int index_num);
	bool has_decimal (char string[], int decimal_at, int count );
	float decimal_convert (int decimal_at, int count);
	float str_to_float (char string[]);
	//char number[] = "10.221";
	
	printf ("%f", str_to_float("-10.18"));
	//printf ("%f", str_to_float("10.221"));
	
	/*
	printf ("%f", decimal_convert (2, 5));

	int decimal_at, count = 0, test;
	test = has_decimal(number, decimal_at, count);
	printf ("%i\t%s", test, number);
	
	remove_string(number, 2, 1 );
	printf ("%s", number);
	
	float str_to_float (char string[]);
	
	printf ("%f\n", str_to_float("245"));
	printf ("%f\n", str_to_float("100") + 25);
	printf ("%f\n", str_to_float("13x5"));
	printf ("%f\n", str_to_float("-356"));
	printf ("%f\n", str_to_float("10.221"));
	*/
	return 0;
}

/******************************************************************************/

// Function to remove a specified number of characters from a character string.
// TEST PASSED input was string 10.221 output string 10221.
char remove_string (char string[], int decimal_at)
{
	int i;
	for ( i = decimal_at; string[i] != '\0'; ++i )
	{
		string[i] = string[i + 1];
	}
		string[i + 1] = '\0';
}



// function to determine if string number has decimal.
// TEST PASSED input was starting 10.221, blank, count =  0, decimal retuned 1
// true, number string was passed through to remove_string returned 10221.
bool has_decimal (char string[], int decimal_at, int count )
{
	char remove_string (char string[], int index_num);
	bool has_decimal_flag;
	
	while ( string[count] != '\0' )
	{
		if ( string[count] == '.' )
		{
			has_decimal_flag = true;
			decimal_at = count;
			//remove_string (string, decimal_at);		
		}
		++count;
		printf ("\ncount %i", count);
	}
	return has_decimal_flag;
}

// function to convert number into decimal.
// TEST PASSED input was 1, 5 -> returned .0001.
float decimal_convert (int decimal_at, int count)
{
	float decimal = .1;
	int i;
	int loops = count - decimal_at;
	printf("\nloops = %i\n", loops);
	for ( i = 0; i < loops; ++i )
		decimal *= .1;
		printf("\ndecimal = %f\n", decimal);
	return decimal;
}


// Function to convert a string to an integer.

float str_to_float (char string[])
{
	int negative = false;
	int i = 0; 
	int decimal_at;
	int count = 0;
	int period = false;
	float decimal;
	int result = 0;
	int int_value;
	
	if ( string[0] == '-' )
	{
		negative = true;
		i = 1;
	}
	
	if ( has_decimal (string, decimal_at, count) )
	{
		period = true;
	}
	
	while ( string[i] >= '0' && string[i] <= '9' )
	{
		int_value = string[i] - '0';
		result = result * 10 + int_value;
		++i;
		printf ("\nresult = %i\n", result);
	}
	
	if ( period )
	{
		decimal = decimal_convert (decimal_at, count);
		result = decimal * result; 
	}
	
	if ( negative )
	{
		result = -result;
	}
	
	return result;
	
}
