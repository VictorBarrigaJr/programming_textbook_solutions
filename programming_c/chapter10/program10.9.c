/*******************************************************************************
 * Program 10.9 from Programming in C
 * File:    program10.9.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * Function to use a dictionary loopup program.
 *
*******************************************************************************/

// Program to use the dictionary lookup program.

#include <stdio.h>
#include <stdbool.h>

struct entry
{
	char word[15];
	char definition[50];
};

int main (void)
{
	const struct entry dictionary[100] =
	{
		{ "aardvark",	"a burrowing African mammal"		},
		{ "abyss",		"a bottomless pit"					},
		{ "acumen",		"mentally sharp; keen"				},
		{ "addle",		"to become confuesed"				},
		{ "aerie",		"a high nest"						},
		{ "affix",		"to append; attach"					},
		{ "agar",		"a jelly made from seaweed"			},
		{ "ahoy",		"a nautical call of greeting"		},
		{ "aigrette",	"an ornamental cluster of feathers"	},
		{ "ajar",		"partially opened"					}
	};
	
	char word[10];
	int entries = 10;
	int entry;
	int lookup (const struct entry dictionary[], const char search[], 
			const int entries);
			
	printf ("Enter word: ");
	scanf ("%14s", word);
	entry = lookup (dictionary, word, entries);
	
	if ( entry != -1 )
		printf ("%s\n", dictionary[entry].definition);
	else
		printf ("Sorry, the word %s is not in my dictionary.\n", word);
		
	return 0;
}

/******************************************************************************/

// Function to determine if two strings are equal.
bool equal_strings (const char s1[], const char s2[])
{
	int i = 0;
	bool are_equal;
	
	while ( s1[i] == s2[i] && s1[i] != '\0' && s2 != '\0' )
		++i;
		
	if ( s1[i] == '\0' && s2[i] == '\0' )
		are_equal = true;
	else
		are_equal = false;
		
	return are_equal;
}

// Function to loop up a word inside a dictionary.
int lookup (const struct entry dictionary[], const char search[], 
			const int entries)
{
	int i;
	bool equal_strings (const char s1[], const char s2[]);
	
	for ( i = 0; i < entries; ++i )
		if  ( equal_strings (search, dictionary[i].word) )
			return i;
			
	return -1;
}
