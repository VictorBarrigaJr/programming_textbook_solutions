/*******************************************************************************
 * Exercise 8.16 from Programming in C
 * File:    exercise8.16.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * Modidy Program 8.14 so that the user can convert any number of integers.
 * Make provision for the program to terminate when a zero is typed in the
 * value of the number to be converted.  
 *
*******************************************************************************/

#include <stdio.h>

int			converted_number[64];
long int 	number_to_convert;
int 		base;
int 		digit = 0;
int 		new_number = 1;

void get_number_and_base (void), convert_number (void), 
	 display_converted_number (void);
	 
int main (void)
{
	do
	{	 
		get_number_and_base ();
		
		if ( new_number == 0)
		{
			printf ("\nGood-bye!\n\n");
			return 0;
		}
		else
		{
	 		convert_number ();
	 		display_converted_number ();
	 	}
	 	
	 	printf("\n");
	}
	while ( new_number == 1 );
	
	return 0;
}
/******************************************************************************/

// Function prompts user to enter the number to be converted and the base.
void get_number_and_base (void)
{
	printf ("Number to be converted, or type 0 to exit program? ");
	scanf ("%li", &number_to_convert);
	if ( number_to_convert == 0 )
	{
		new_number = 0;
		return;
	}
	else{
		do 
		{
			printf ("Enter a base value between 2 and 16: \n");
			scanf ("%i", &base);
		}
		while ( base < 2 || base > 16 );
	}
}


// Function takes the value typed by user and converts it to the desired 
// base_digits and stores the process inside the converted_number array.
void convert_number (void)
{
	do 
	{
		converted_number[digit] = number_to_convert % base;
		++digit;
		number_to_convert /= base;
	}
	while ( number_to_convert != 0 );
}


// Function takes the digets inside converted_number array and displays them to
// the user in correct order
void display_converted_number (void)
{
	const char base_digits[16] = { 
			'0', '1', '2', '3', '4', '5', '6', '7',
			'8', '9', 'A', 'B', 'C', 'D', 'E', 'F' };
	int next_digit;
	
	printf ("Converted number = ");
	
	for ( --digit; digit >= 0; --digit )
	{
		next_digit = converted_number[digit];
		printf ("%c", base_digits[next_digit]);
	}
	
	digit = 0;
	
	printf ("\n");
}
