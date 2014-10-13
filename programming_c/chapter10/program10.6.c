/*******************************************************************************
 * Program 10.6 from Programming in C
 * File:    program10.6.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * Function to read lines of data.
 *
*******************************************************************************/

#include <stdio.h>

int main (void)
{
	int i;
	char line[81];
	void read_line (char buffer[]);
	
	for ( i = 0; i < 3;  ++i )
	{
		read_line (line);
		printf ("%s\n\n", line);
	}
	
	return 0;
}

/******************************************************************************/

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
