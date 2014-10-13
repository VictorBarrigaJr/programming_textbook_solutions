/*******************************************************************************
 * Program 10.4 from Programming in C
 * File:    program10.4.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * Function to test strings for equality.
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
	
	while ( s1[i] == s2[i] && s1[i] != '\0' && s2 != '\0' )
		++i;
		
	if ( s1[i] == '\0' && s2[i] == '\0' )
		are_equal = true;
	else
		are_equal = false;
		
	return are_equal;
}
