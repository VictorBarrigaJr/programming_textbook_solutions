/*******************************************************************************
 * Exercise 8.8 from Programming in C
 * File:    exercise8.8.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * An equation of the form:
 *		ax^2 + bx + c = 0
 * is known as a quadratic equation.  The values of a, b and c in the preceding 
 * example represent constant values.  So:
 *		4x^2 -1 7x - 15 = 0
 * represents a quadratic equation whre a = 4, b = -17 and c = -15.  The values
 * of x that satisfy a particular quadratic equation, known as the roots of the 
 * equation, can be calculated by substituting the values of  a, b and c into 
 * the following two formulas:
 *		If the value of b^2 - 4ac, called the discriminant, is less than zero, 
 * the rroots of the equation,x^1 and x^2, are imaginary numbers.
 * 
 *
 * Write a program to solve a quadratic equation. The program should allow the 
 * user to enter the values for a, b and c.  If the discriminant is less than 
 * zero, a message should be displayed that the roots are imaginary; otherwise, 
 * the program should then proceed to calculate and displa the two roots of the 
 * equation. (Note: be certain to make use fo the squareRoot function that you 
 * developed in this chapter.)
 *
*******************************************************************************/

#include <stdio.h>

void get_coefficients (void);
float a, b, c, square (float x), absolute_val (float x), square_root (float x), 
		check_for_negative_discriminant(float a, float b, float c), 
		quadratic_formula (float a, float b, float c);

int main (void) 
{
	get_coefficients (); // get input from user
	quadratic_formula (a, b, c); // solve for x using quadratic formula. 
	
	return 0;
}

/******************************************************************************/

// Function prompts user to enter the three coefficients a, b and c.
void get_coefficients (void)
{
	printf ("\nPlease provide an integer for coefficient a: ");
	scanf ("%f", &a);
	
	printf ("\nPlease provide an integer for coefficient b: ");
	scanf ("%f", &b);
	
	printf ("\nPleaseovide an integer for coefficient c: ");
	scanf ("%f", &c);	
		
	printf ("\nYour coefficients are: a = %.2f, b = %.2f, c = %.2f\n", a, b, c);
}

// Function returns the square of a number.
float square (float x)
{
	return x * x;
}

// Function returns the absolute value of a number.
float absolute_val (float x)
{
	if ( x < 0 )
		x = -x;
	return (x);
}

// Function returns the square root of a number.
float square_root (float x)
{
	const float epsilon = .00001;
	float 		guess 	= 1.0;
	
	while ( absolute_val ( ( square (guess) ) / x - 1.0 ) >= epsilon )
		guess = ( x / guess + guess ) / 2.0;
	
	return guess;
}

// Function checks if the discriminant is negative.
float check_for_negative_discriminant (float a, float b, float c)
{
	float discriminant;
	// using the following formula b^2 - 4ac
	return discriminant = ( square (b) - ( 4 * a * c) );
}

// Function solves quadratic equation using quadratic formula:
//	x = [ -b +- sqroot( b^2 - 4ac)] / 2a
float quadratic_formula (float a, float b, float c)
{
	float solution1, solution2;
	float discriminant = check_for_negative_discriminant (a, b, c);
	
	// if the discriminant is < 0, display to console "the roots are imaginary"
	if ( discriminant < 0 ) 
	{
		printf ("\nThe discriminant is less than zero, so the roots are");
		printf (" imaginary numbers.\n");
	}
	else
	{
		solution1 = (-b + ( square_root ( discriminant ) )) / (2 * a);	
		solution2 = (-b - ( square_root ( discriminant ) )) / (2 * a);
	
		printf ("\nAnswer: x = %.2f or x = %.2f\n", solution1, solution2);
	}
	
	return 0;
}
