/*******************************************************************************
 * Program 10.10 from Programming in C
 * File:    program10.10.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * Function to use a dictionary look up program - modified to use binary search.
 *
*******************************************************************************/

// Dictionary loo kup program.

#include <stdio.h>

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
	int look_up (const struct entry dictionary[], const char search[], 
			const int entries);
			
	printf ("Enter word: ");
	scanf ("%14s", word);
	entry = look_up (dictionary, word, entries);
	
	if ( entry != -1 )
		printf ("%s\n", dictionary[entry].definition);
	else
		printf ("Sorry, the word %s is not in my dictionary.\n", word);
		
	return 0;
	
}

/******************************************************************************/

// Function to compare two character strings

int compare_strings (const char s1[], const char s2[])
{
	int i = 0, answer;
	
	while ( s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' )
		++i;
		
	if ( s1[i] < s2[i] )
		answer = -1;		// s1 < s2
	else if (s1[i] == s2[i])
		answer = 0;			// s1 == s2
	else
		answer = 1;			// s1 > s2
	
	return answer;
}

// Function to look up word inside a dictionary

int look_up (const struct entry dictionary[], const char search[],
	 		const int entries)
{
	int low = 0;
	int high = entries -1;
	int mid, result;
	int compare_strings (const char s1[], const char s2[]);
	
	while ( low <= high )
	{
		mid = ( low + high ) / 2;
		result = compare_strings (dictionary[mid].word, search);
		
		if ( result == -1 )
			low = mid + 1;
		else if ( result == 1 )
			high = mid -1;
		else
			return mid;		// found it
	}
	
	return -1;				// not found
}
