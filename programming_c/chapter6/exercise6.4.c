/*******************************************************************************
 * Exercises 6.4 from Programming in C
 * File:    exercise6.4.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * 4. Write a program that acts as a simple “printing” calculator. The program 
 * should allow the user to type in expressions of the form 
 * 		number 		operator 
 * The following operators should be recognized by the program:
 * 		+	-	*	/	S	E
 * The S operator tells the program to set the “accumulator” to the typed-in 
 * number. The E operator tells the program that execution is to end.The 
 * arithmetic operations are performed on the contents of the accumulator with 
 * the number that was keyed in acting as the second operand. The following is a
 * “sample run” showing how the program should operate:
 *
 *		Begin Calculations
 *		10 S			Set Accumulator to 10
 *		= 10.000000 	Contents of Accumulator
 *		2 /				Divide by 2
 *		= 5.000000		Contents of Accumulator
 *		55 -			Subtract 55
 *		-50.000000		Contents of Accumulator
 *		100.25 S		Set Accumulator to 100.25
 *		= 100.250000
 *		4 *				Multiply by 4
 *		= 401.000000	
 *		0 E				End of program
 *		= 401.000000
 *		End of Calculations.
 *
 * Make certain that the program detects division by zero and also checks for 
 * unknown operators.
 *
*******************************************************************************/

#include <stdio.h>

int main (void)
{
	float 	number, accumulator;		// initialize variables
	char 	operator;
	
	// receive input from user int and char
	printf ("Type in your expression in the following format:\n"); 
	printf (" number expression (5 *, 6 +, 1 -, 10 S)\n\n");
	printf ("*************************************************\n");
	printf ("Begin Calculations\n");
	
	accumulator = 0;
	// using case compute based on case print screen
	while (operator != 'E')
	{
		scanf (" %f %c", &number, &operator);
		
		switch (operator)
		{
			case 'S':
				accumulator = 0;
				accumulator += number;
				break;
			case '+':
				accumulator += number;
				break;
			case '-':
				accumulator -= number;
				break;
			case '*':
				accumulator *= number;
				break;
			case '/':
				if (number == 0)
				{
					printf ("Cannot divide by 0.\n");
				}
				else
				{
				accumulator /= number;
				}
				break;	
			case 'E':
				printf ("Final ");
				break;			
			default:
				printf ("Unknown operator\n");
				break;	
		}
		
		printf ("Total = %f\n", accumulator);
	}
	
	printf ("End of Calculations\n");
	printf ("*************************************************\n");
	
	return 0;	
	
}
