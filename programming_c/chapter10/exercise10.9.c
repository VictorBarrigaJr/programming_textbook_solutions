/*******************************************************************************
 * Exercise 10.9 from Programming in C
 * File:    program10.9.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * You can extend even further the usefulness of the replace_string function
 * from the preceding exercise if you have it return a value that indicates
 * whether the replacement succeeded, which means that the string to be replaced
 * was found inside the source string. So, if the function returns true if the
 * replacement succeeds and false if it does not, the loop:
 *		do
 *			still_found = replace_string (text, " ", "");
 *		while ( still_found = true );
 * could be used to remove all blank spaces from text, for example.
 * Incorporate this change into the replace_strings function and try it with
 * varios character strings to ensure that it works properly.
 *
*******************************************************************************/


#include <stdio.h>
#include <stdbool.h>

int main (void)
{
	char replace_string (char source[], char to_replace[], char replacement[]);
	char source_str[] = "This is the 1 and only sentence.";
	char to_replace_str[] = "sentence";
	char replacement_str[] = "string";
	
	printf ("\n");
	printf ("\nThis is the string prior to replacement: ");
	printf ("\n\"%s\"",source_str);
	printf ("\n*****************************************\n");
	
	replace_string (source_str, to_replace_str, replacement_str);
	
	printf ("\n*****************************************\n");
	printf ("\nThis is the string after replacement: ");
	printf ("\n\"%s\"",source_str);
	printf ("\n\n");
	
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

// Function to count the characters in a string.
int string_length (const char string[])
{
	int count = 0;
	
	while ( string[count] != '\0' )
		++count;
		
	return count;
}

// Function to remove a specified number of characters from a character string.
char remove_string (char string[], int index_num, int num_char_remove)
{
	int i;
	for ( i = index_num; string[i] != '\0'; ++i )
	{
		string[i] = string[i + num_char_remove];
	}
		string[i + 1] = '\0';
}

// Function to temp hold source past insertion
char store_remaining_str (char buffer[], char source[], int position)
{	
	int i = 0;
	do 
	{
		buffer[i] = source[position];
		++i;
		++position;
	}
	while ( source[position] != '\0' );
	
	buffer[i] = '\0';
}

// Function to  insert string into another string
char insert_string (char source[], char insert[], int position)
{
	char buffer[81];
	store_remaining_str (buffer, source, position);
		
	int i, j;
	for ( i = 0; insert[i] != '\0'; ++i )
		source[position + i] = insert[i];		
	
	for ( j = 0; buffer[j] != '\0'; ++j )
		source[position + i + j] = buffer[j];

	source[position + i + j] = '\0';
}

// Function to replace the first occurance of s1 in a source string with s2
char replace_string (char source[], char to_replace[], char replacement[])
{
	int find_string (const char source[], const char find[]);
	int remove_at;
	if ( (remove_at = find_string (source, to_replace)) != -1 )
	{	
		remove_string (source, remove_at, string_length (to_replace));
		
		insert_string (source, replacement, remove_at);			
	}
	else
	{
		printf ("\nString not found inside source.\n");
	}
}


