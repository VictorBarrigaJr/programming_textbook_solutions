/*******************************************************************************
 * Exercise 10.2 from Programming in C
 * File:    program10.e.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * Couls you have replaced the while statement of the equal_strings funciton of
 * Program 10.4 with the statement:
 * 		while ( s1[i] == s2[i] && s1 != '\0' )
 * to achieve the same results?
 *
 * No, int the first prinf statement s2 writes past the string because s1 is 
 * longer, it continues to iterate through the loop, i should stop at 6 but c
 * continues, thus a segmentation fault occurs.
 *
*******************************************************************************/
#include <stdio.h>
#include <stdbool.h>

int main (void)
{
	bool equal_strings (const char s1[], const char s2[]);
	const char stra[] = "string compare test";
	const char strb[] = "string";
	
	printf ("%i\n", equal_strings (stra, strb));
	printf ("%i\n", equal_strings (stra, stra));
	printf ("%i\n", equal_strings (strb, "string"));
	printf ("%i\n", equal_strings (strb, stra));
	
	return 0;
	
}


/******************************************************************************/

// Function to determine if two strings are equal.
bool equal_strings (const char s1[], const char s2[])
{
	int i = 0;
	bool are_equal;
	
	while ( s1[i] == s2[i] && s1 != '\0' )
		++i;
		
	if ( s1[i] == '\0' && s2[i] == '\0' )
		are_equal = true;
	else
		are_equal = false;
		
	return are_equal;
}
