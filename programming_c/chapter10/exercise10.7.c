/*******************************************************************************
 * Exercise 10.7 from Programming in C
 * File:    program10.7.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * Write a function called insert _string to insert one character string into
 * another string. The arguments to the function should consist of the source
 * string, the string to be inserted, and the position in the source string
 * where the string is to be inserted. So, the call:
 *		insert_string (text, "per", 10);
 * with text as originally defined in the previous exercise, results in the
 * character string "per" being inserted inside text, beginning at text[10].
 * Therefore, the character string "the wrong person" is stored inside text
 * array array after the function returned. 
 *
*******************************************************************************/

#include <stdio.h>

int main (void)
{
	char insert_string (char source[], char insert[], int position);
	char source_str[] = "the wrong son";
	char insert_str[] = "per";
	
	printf ("The original string is \"%s\"\n", source_str);
	printf ("to insert \"%s\" at position 10\n", insert_str);
	insert_string (source_str, insert_str, 10);
	
	printf ("The new string is \"%s\"\n", source_str);
	
	return 0;
	
}

/******************************************************************************/

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

// Function to insert string into another string
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

