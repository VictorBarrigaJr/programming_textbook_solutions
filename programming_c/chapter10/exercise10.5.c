/*******************************************************************************
 * Exercise 10.5 from Programming in C
 * File:    program10.5.c
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
#include <stdbool.h>

int main (void)
{
	int find_string (const char source[], const char find[]);
	const char source[] = "a chatter";
	const char find[] = "hat";
	const char find2[] = "a chatterbox";
	int array_num;
	
	array_num = find_string( source, find );
	
	if ( array_num == -1 )
	{	
		printf ("%s", find);
		printf (" ***does NOT exist inside ***");
		printf ("%s", source);
	}
	else
	{
		printf ("%s", find);
		printf (" *** does exist inside ***");
		printf ("%s", source);
		printf ("\nbeginning at element array # %i\n", array_num);
		
	}
	
	array_num = find_string( source, find2 );
	
	if ( array_num == -1 )
	{	
		printf ("%s", find2);
		printf (" ***does NOT exist inside ***");
		printf ("%s", source);
	}
	else
	{
		printf ("%s", find2);
		printf (" *** does exist inside ***");
		printf ("%s", source);
		printf ("\nbeginning at element array # %i\n", array_num);
		
	}
	return 0;
}

/******************************************************************************/

// Function to determine if one character string exists inside another.
int find_string (const char source[], const char find[])
{
	int i, j, found_it = false;
	
	// try each character in source, unless null or false
	for ( i = 0; source[i] != '\0' && !found_it; ++i )
	{			
		found_it = true;
		// now see if corresponding chars from find match source
		for ( j = 0; find[j] != '\0' && found_it; ++j )
		{	
			if ( source[j + i] != find[j] || source[j + i] == '\0' )
				found_it = false;
		}	
			
		if ( found_it ) // true				
			return i;
	}
	
	return -1;
}
