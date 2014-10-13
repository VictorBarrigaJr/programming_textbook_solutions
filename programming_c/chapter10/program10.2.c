/*******************************************************************************
 * Program 10.2 from Programming in C
 * File:    program10.2.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * Function to count the characters in a string.
 *
*******************************************************************************/

#include <stdio.h>

int string_length (const char string[]);

int main (void)
{
	const char word1[] = { 'a', 's', 't', 'e', 'r', '\0' };
	const char word2[] = { 'a', 't', '\0' };
	const char word3[] = { 'a', 'w', 'e', '\0' };
	
	printf ("%i    %i    %i\n", string_length (word1), string_length (word2),
			string_length (word3));
			
	return 0;
}

/******************************************************************************/

int string_length (const char string[])
{
	int count = 0;
	
	while ( string[count] != '\0' )
		++count;
		
	return count;
}
