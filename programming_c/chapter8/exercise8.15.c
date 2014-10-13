/*******************************************************************************
 * Exercise 8.15 from Programming in C
 * File:    exercise8.15.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * Modidy Program 8.14 so that the user is reasked to type in the value of the
 * base if an invalid base is entered.  The modified program should continue to
 * ask for the value of the base until a valid response is given..  
 *
*******************************************************************************/
#include <stdio.h>

int			converted_number[64];
long int 	number_to_convert;
int 		base;
int 		digit = 0;

int main (void)
{
	void get_number_and_base (void), convert_number (void),
		 display_converted_number (void);
		 
	 get_number_and_base ();
	 convert_number ();
	 display_converted_number ();
	 
	 return 0;
}

// Function prompts user to enter the number to be converted and the base.
void get_number_and_base (void)
{
	printf ("Number to be converted? ");
	scanf ("%li", &number_to_convert);
	
	do 
	{
		printf ("Enter a base value between 2 and 16\n");
		scanf ("%i", &base);
	}
	while ( base < 2 || base > 16 );

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
	
	for ( --digit; digit == 0; --digit )
	{
		next_digit = converted_number[digit];
		printf ("%c", base_digits[next_digit]);
	}
	
	printf ("\n");
}
