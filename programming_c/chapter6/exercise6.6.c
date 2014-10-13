/*******************************************************************************
 * Exercises 6.6 from Programming in C
 * File:    exercise6.6.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * 6. Write a program that takes an integer keyed in from the terminal and 
 * extracts and displays each digit of the integer in English. So, if the user 
 * types in 932, the program should display:
 *		 nine three two
 * Remember to display “zero” if the user types in just a 0. (Note: This 
 * exercise is a hard one!)
*******************************************************************************/

#include <stdio.h>

int main (void)
{
	// initiate variables
	int number, num_length, left_digit;
	
	// receive 8 digit number from user	
	printf ("Enter your number (8 digits max).\n");
	scanf (" %i", &number);

	// verify number is within range, MAX is 8 digits	
	if ( number <= 99999999 && number >= -99999999)
	{
		// if number is negative convert to absolute value and print 'negative'
		if ( number < 0 )
		{
			number = -number;
			printf (" Negative");
		}
		/* 	num_length counts down loop by dividing by 10, thus eliminating the 
			right most  digit each loop iteration until 1 is reached. example 
				num entered is 1234567.*/
		for ( num_length = 100000000; num_length != 1; num_length /= 10 )
		{
			/*	num_length is looped in the above fashion unit it is less 
				than number or equal to number * 10. 
				using example 
					1234567 will reduce num_length to 10000000 and 
				number will be 12345670, thus if statements initiates*/
			if ( num_length <= ( number * 10 ) )
			{
				/*	once num_length is <= to num_length * 10, we can extract the 
					left_digit from the number by extracting the remainder of 
					number % num_length and dividing it by num_length / 10. 
					using example 
						1234567 % 10000000 = 1234567 
						10000000 / 10 = 1000000
						1234567 / 1000000 = 1 = left_digit */
				left_digit = ( number % num_length ) / ( num_length / 10 );
					
					/* 	the extracted left_digit is run through the switch 
						printing the appropriate case onto screen. using
						example
							1 would print "one" to console. */
					switch (left_digit)
					{
						case 0:
							printf (" zero");
							break;
						case 1:
							printf (" one");
							break;
						case 2:
							printf (" two");
							break;
						case 3:
							printf (" three");
							break;
						case 4:
							printf (" four");
							break;
						case 5:
							printf (" five");
							break;
						case 6:
							printf (" six");
							break;
						case 7:
							printf (" seven");
							break;
						case 8:
							printf (" eight");
							break;
						case 9:
							printf (" nine");
							break;
						default:
							printf ("Unknown operator.\n");
							break;
					}
			}	
		}
	}
	else 
	{
		printf ("Number is not within range.\n");
	}
	
	printf ("\n");
	
	return 0;	
}


