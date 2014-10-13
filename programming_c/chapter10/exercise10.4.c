/*******************************************************************************
 * Exercise 10.4 from Programming in C
 * File:    program10.4.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * Write a function called substring to extract a portion of a character string.
 * The function should be called as follows:
 *		substring (source, start, count, result);
 * where source is the character string from which you are extracting the 
 * substring, start is an index number into source indicating the first
 * character of the substring, count is the number of characters to be extracted
 * from the source string, and result is an array of characters that is to
 * contain the extracted substring. For example, the call:
 *		substring ("character", 4, 3, result);
 * extracts the substring "act" (three characters starting with charecter number
 * 4) from the string "character" and places the result in result.
 * Be certain the function inserts a null character at the end of the substring
 * in the result array. Also, have the function check that the requested number
 * of characters does, in fact, exist in the string. If this is not the case,
 * have the function end the substring when it reaches the end of the source 
 * string. So, for example, a call such as:
 *		substring ("two words", 4, 20, result);
 * should just place the string "words" inside the result array, even though 20
 * characters were requested by the call.
 *
*******************************************************************************/

#include <stdio.h>
#include <stdbool.h>

int main (void)
{
	char substring (const char source_string[], int start, int stop, 
					char result[]);
	const char text1[] = "test";
	const char text2[] = "two words ";
	const char text3[] = "one-word";
	const char text4[] = "test with words and numbers 1 2 123";
	char copied_text[30];
	
	substring (text1, 0, 10, copied_text);
	printf ("%s ...should print test\n", copied_text);
	
	substring (text2, 2, 5, copied_text);
	printf ("%s ...should print o\n", copied_text);
	
	substring (text3, 3, 5, copied_text);
	printf ("%s ...should print -wo\n", copied_text);
	
	substring (text4, 5, 10, copied_text);
	printf ("%s ...should print with\n", copied_text);
		
	substring (text3, 0, 15, copied_text);
	printf ("%s ... should print one-word\n", copied_text);
	
	substring (text2, 4, 20, copied_text);
	printf ("%s ...should print words\n", copied_text);
	
	return 0;
}

/******************************************************************************/

bool alpha_numeric (const char c)
{
	if ( ( c >= 'a' && c <= 'z' ) || ( c >= 'A' && c <= 'Z' ) || c =='\'' ||
		 ( c >= '0' && c <= '9' ) || c == '.' || c == '-' || c == ',' )
		return true;
	else 
		return false;
}

// function to extract portion of a chracter sting.
char substring (const char source[], int start, int stop, char result[])
{
		int i, j = 0;
		bool alpha_numeric (const char c); 
		
		for ( i = start; alpha_numeric(source[i]) != false && i <= stop ; ++i )
	  	{
	  		result[j] = source[i];
	  		++j;
 	  	}
	  	
	  	result[j] = '\0';
	  	
} 	

