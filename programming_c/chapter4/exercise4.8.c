/*******************************************************************************
 * Exercises 4.8 from Programming in C
 * File:    exercise4.8.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * 8. To round off an integer i to the next largest even multiple of another 
 * integer j ,the following formula can be used:
 *		Next_multiple = i + j - i % j
 *
 * For example, to round off 256 days to the next largest number of days evenly
 * divisible by a week, values of i = 256 and j = 7 can be substituted into the 
 * preceding formula as follows:
 *		Next_multiple
 *		= 256 + 7 - 256 % 7
 *		= 256 + 7 - 4
 *		= 259
 *
 * Write a program to find the next largest even multiple for the following 
 * values of i and j:
 *		i 			j
 *		365			7
 *		12,258		23
 *		996 		4
 *
*******************************************************************************/

#include <stdio.h>

int next_multiple();

int main (void)
{
	// largest multiple for the following values
	int value1, value2, result;
	
	value1 = 365;
	value2 = 7;
	result = next_multiple(value1, value2);
	printf ("The next largest multiple for values %i and %i is %i\n", 
			value1, value2, result);
			
	value1 = 12258;
	value2 = 23;
	result = next_multiple(value1, value2);
	printf ("The next largest multiple for values %i and %i is %i\n", 
			value1, value2, result);
			
	value1 = 996;
	value2 = 4;
	result = next_multiple(value1, value2);
	printf ("The next largest multiple for values %i and %i is %i\n", 
			value1, value2, result);
						
	return 0;	
}

/******************************************************************************/

/* this function rounds off an integer value1 to the next largest multiple of 
   another integer value2. */
int next_multiple(int value1, int value2)
{
	return (value1 + value2 - value1 % value2);
}






