/*******************************************************************************
 * Exercise 10.6 from Programming in C
 * File:    program10.6.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * Write a function called remove_string to remove a specified number of
 * characters from a character string. The funciton should take three arguments:
 * the source string, the starting index number in the source string, and the
 * number of characters to remove. So, if the character array text contains the
 * string "the wrong son", the call:
 		remove_string (text, 4, 6);
 * has the effect of removing the characters "wrong" (the word "wrong" plus the
 * space that follows) from the array text. The resulting string inside text is
 * then "the son".
 *
*******************************************************************************/

#include <stdio.h>

int main (void)
{
	char remove_string (char string[], int index_num, int num_char_remove);
	char source[] = "the wrong son";
	char source2[] = "this does not work";
	char source3[] = "these stars generate";
	
	printf ("String before removal: \n");
	printf ("\"%s\"\n", source);
	remove_string (source, 4, 6);
	printf ("String after removal: \n");
	printf ("\"%s\"\n", source);
	
	printf ("\n\nString before removal: \n");
	printf ("\"%s\"\n", source2);
	remove_string (source2, 10, 4);
	printf ("String after removal: \n");
	printf ("\"%s\"\n", source2);
	
	printf ("\n\nString before removal: \n");
	printf ("\"%s\"\n", source3);
	remove_string (source3, 11, 9);
	printf ("String after removal: \n");
	printf ("\"%s\"\n", source3);
}

/******************************************************************************/

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
