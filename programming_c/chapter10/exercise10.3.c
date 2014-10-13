/*******************************************************************************
 * Exercise 10.3 from Programming in C
 * File:    program10.3.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * The count_words function from Programs 10.7 and 10.8 incorrectly counts a
 * word that contains an apostrope as two separate words. modify this function
 * to correctly handle this situation. Also, extend the funciton to count a
 * sequence of positive or negative numbers, including any embedded commas and
 * periods, as a single word.
 *
*******************************************************************************/


#include <stdio.h>
#include <stdbool.h>

int main (void)
{
	char text [81];
	int total_words = 0;
	int count_words (const char string[]);
	void read_line (char buffer[]);
	bool end_of_text = false;
	
	printf ("Type in your text.\n");
	printf ("When you are done, press 'RETURN'.\n\n");
	
	while ( ! end_of_text )
	{
		read_line (text);
		if ( text[0] == '\0' )
			end_of_text = true;
		else
			total_words += count_words (text);
	}
	
	printf ("\nThere are %i words in the above text.\n", total_words);
	
	return 0;
}

/******************************************************************************/

// Function to dertermine if a character is apphabetic

bool alphabetic (const char c)
{
	if ( ( c >= 'a' && c <= 'z' ) || 
		 ( c >= 'A' && c <= 'Z' ) ||
		 ( c >= '0' && c <= '9' ) || 
		 ( c == 39 ) || 
		 ( c == '.' ) || 
		 ( c == ',' ) )
		return true;
	else
		return false;
}

// Function to read a line of text from the terminal.

void read_line (char buffer[])
{
	char character;
	int i = 0;
	
	do
	{
		character = getchar ();
		buffer[i] = character;
		++i;
	}
	while ( character != '\n' );
	
	buffer[i - 1] = '\0';
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
