/*******************************************************************************
 * Exercise 10.13 from Programming in C
 * File:    exercise10.13.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * if c is lowercase character, the expression:
 *		c - 'a' + 'A'
 * produces the uppercase equivalent of c, assuming an ascii character set.
 * Write a function called uppercase that converts all lowercase characters in
 * a string into their uppercase equivalents.
 * 
*******************************************************************************/

#include <stdio.h>
#include <stdbool.h>

int main (void)
{
	char uppercase (char string[]);
	char string[] = { "Test" };
	char string2[] = { "THIS is THE second" };
	char string3[] = { "abcdefghijklmnopqrstuvxyz" };
	uppercase (string);
	printf("\nTEST 1 i Test, o s/b TEST = %s\n", string);
	uppercase (string2);
	printf("\nTEST 2 i Test, o s/b THIS IS THE SECOND= %s\n", string2);
	uppercase (string3);
	printf("\nTEST 3 i Test, o s/b ABCDEFGHIJKLMNOPQRSTUVWXYZ = %s\n", string3);
}

/******************************************************************************/

// Function to determine if char is lowercase

bool is_lowercase (char c)
{
	if ( (c >= 'a' && c <= 'z') )
		return true;
	else
		return false;
} 

// Function that converts all lowercase characters in a string into uppercase.
char uppercase (char string[])
{
	int i;
	bool is_lowercase (char c);
	
	for (i = 0; string[i] != '\0'; ++i )
	{
		printf ("%c\n", string[i]);
		if ( is_lowercase (string[i]) )
		{
			string[i] = string[i] - 'a' + 'A';
			printf ("%c\n", string[i]);
		}
	}
}
