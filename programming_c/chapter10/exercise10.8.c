/*******************************************************************************
 * Exercise 10.8 from Programming in C
 * File:    program10.8.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * Using the find_string, remove_string, and insert_string functions from
 * preceding exercises, write a function called replace_string that takes three
 * character string arguments as follows:
 *		replace_string (source, s1, s2);
 * and replaces s1 inside source with the character string s2. The fuction
 * should call the find_string fucntion to locate s1 inside source, then call
 * the insert_string function to remove s1 from source, and finally call the
 * insert_string function to insert s2 into source at the proper location.
 * So, the function cal:
 *		replace_string (text, "1", "one");
 * replaces the first occurence of the character string "1" inside the character
 * string text, if it exists, with the string "one". Similarly, the function
 * call:
 *		replace_string (text, "*", "");
 * has the effect of removing the first asterisk inside the text array because
 * the replacement string is the null string.   
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
	
	printf ("\n\n");
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
	printf ("\nTEST string_length s/b 1 = %i", num_char_remove);
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
	if ( (remove_at = find_string (source, to_replace)) != -1)
	{	
		printf ("\nTEST find_string int remove at s/b 23 = %i", remove_at);
		remove_string (source, remove_at, string_length (to_replace));
		printf ("\nTEST remove_string remove 1. %s", source);
		insert_string (source, replacement, remove_at);
		printf ("\nTEST insert_string insirt one. %s", source);
		printf ("\n");
		
	}
	printf ("\nString not found inside source.\n");
}


