/*******************************************************************************
 * Exercise 10.5 from Programming in C
 * File:    program10.5.2.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * Write a function called find_string to determine if one character string
 * exists inside another string. The first argument to the function should be
 * the chracter string that is to be reached and the second argument is the
 * string you are interested in finding. If the function finds the specific
 * string, have it return the location in the source string where the string
 * was found. if the function does not find the string, have it return -1. So,
 * for example, the call:
 *		index = find_string ("a chatterbox", "hat");
 * searches the string "a chatterbox" for the string "hat". Because "hat" does
 * exist inside the source string, the function returns 3 to indicate the
 * starting position inside the source string whre "hat" was found.
 *
*******************************************************************************/

#include <stdio.h>

int main (void)
{
	int location, find_string (const char source[], const char find[]);
	
	const char source[] = "a chahatter";
	const char find[]	= "hat";
	
	location = find_string (source, find);
	
	if ( location == -1 )
		printf("\nNot found.\n");
	else
		printf ("\nFound at location %i\n", location + 1);
	
	return 0;
}

/******************************************************************************/

// Function to check if a character string exists inside another.

int find_string (const char source[], const char find[])
{
	int i = 0, j = 0, starts_at;
	
	while ( source[i] != '\0' )
	{
		while ( source[i] != find[0] && source[i] != '\0' )
			i++;
			
		if ( source[i] == '\0' )
			return (-1);
		
		starts_at = i;
		
		while ( source[i] == find[j] && source[i] != '\0' && find[j] != '\0' )
		{
			i++;
			j++;
		}
		
		if ( find[j] == '\0' )
			return (starts_at);
		
		if ( source[i] == '\0' )
			return (-1);
	
		i = starts_at + 1;
		j = 0;
	}
}


