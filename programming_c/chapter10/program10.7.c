/*******************************************************************************
 * Program 10.7 from Programming in C
 * File:    program10.7.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * Function to count words.
 *
*******************************************************************************/

#include <stdio.h>
#include <stdbool.h>

int main (void)
{
	const char text1[] = "Well, here goes.";
	const char text2[] = "And here we go... again.";
	int count_words (const char string[]);
	
	printf ("%s - words = %i\n", text1, count_words (text1));
	printf ("%s - words = %i\n", text2, count_words (text2));

}

/******************************************************************************/

// Function to dertermine if a character is apphabetic

bool alphabetic (const char c)
{
	if ( (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') )
		return true;
	else
		return false;
}

// Function to count the number of words in a string

int count_words (const char string[])	
{
	int i, word_count = 0;
	bool looking_for_word = true, alphabetic (const char c);
	
	for ( i = 0; string[i] != '\0'; ++i )
		if ( alphabetic (string[i]) )
		{
			if ( looking_for_word )
			{
				++word_count;
				looking_for_word = false;
			}
		}
		else
			looking_for_word = true;
		
	return word_count;
}
