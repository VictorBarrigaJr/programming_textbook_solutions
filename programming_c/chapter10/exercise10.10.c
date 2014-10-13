/*******************************************************************************
 * Exercise 10.10 from Programming in C
 * File:    program10.10.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * Write a function called dictionary_sort that sorts a dictionary, as defined
 * in Programs 10.9 and 10.10, into alphabetical order. 
 *
*******************************************************************************/

#include <stdio.h>
#include <stdbool.h>

struct entry
{
	char word[20];
	char definition[50];
};

int main (void)
{	
	void display_dictionary (struct entry d[], int elements);	
	struct entry sort_elements (struct entry d[], int elements);
		
	struct entry dictionary[] =
	{
		{ "acumen",		"mentally sharp keen"				},
		{ "renounce",	"to give up"						},
		{ "affix",		"to append; attach"					},
		{ "ajar",		"partially opened"			 		},
		{ "addle",		"to become confussed"		 		},
		{ "nugget",		"a solid lump"						},
		{ "aardvark",	"a burrowing African mammal" 		},
		{ "ahoy",		"a nautical call of greeting" 		},
		{ "aerie",		"a high nest"				 		},
		{ "ensure",		"to make sure"						},
		{ "abyss",		"a bottomless pit"					},		
		{ "agar",		"a jelly made from seaweed"			},
		{ "aigrette",	"an ornamental cluster of feathers"	}
	};
	
	// counts the total number of struct entry elements withing dictionary. 
	int num_of_elements = sizeof(dictionary) / sizeof(dictionary[0]);
	
	printf ("\n***************************************\n");
	printf ("TEST FOR FUNCTION sort_elements, prior to sort:\n");
	display_dictionary (dictionary, num_of_elements);
	
	sort_elements (dictionary, num_of_elements);	
	
	printf ("TEST FOR FUNCTION sort_elements, after sort:\n");
	display_dictionary (dictionary, num_of_elements);
		
	return 0;
}

/******************************************************************************/

// Function to display dictionary to console:
// TEST PASSED
void display_dictionary (struct entry d[], int elements)
{
	printf ("\n************************************************\n");
	printf ("\tWORD\t\tDEFINITION\n");
	printf ("\n************************************************\n");
	int row;
	for ( row = 0; row < elements; ++row )
	{
		printf ("\t%-10s - %10s\n", d[row].word, d[row].definition);
	}
	
	printf ("\n***********************************************\n");
	printf("\n");
}

// Function to count the characters in a word.
// TEST PASSED 
int word_length (struct entry d[], int element)
{
	int count = 0;
	
	while ( d[element].word[count] != '\0' )
		++count;
		
	return count;
}

// Function to count the characters in a definition.
// TEST PASSED
int definition_length (struct entry d[], int element)
{
	int count = 0;
	
	while ( d[element].definition[count] != '\0' )
		++count;
		
	return count;
}

// Function to copy and paste a char struct array into another
// TEST PASSED
struct entry copy_and_paste (struct entry paste[], int paste_element, 
							struct entry copy[], int copy_element)
{	
	int word_length (struct entry d[], int element); 
	int definition_length (struct entry d[], int element);
	
	int i, j; 
	for ( i = 0; i < word_length (copy, copy_element); ++i )
		paste[paste_element].word[i] = copy[copy_element].word[i];
	paste[paste_element].word[i] = '\0';
	
	for ( j = 0; j < definition_length(copy, copy_element); ++j )
		paste[paste_element].definition[j] = copy[copy_element].definition[j];	
	paste[paste_element].definition[j] = '\0';
}

// Function to sort a structure alphabeticaly, uses bubble sort. 
// TEST PASSED
struct entry sort_elements (struct entry d[], int elements)
{	
	struct entry copy_and_paste (struct entry paste[], int paste_element, 
								struct entry copy[], int copy_element);
	int i, j;
	struct entry temp[1];
			
	for ( i = 0; i < elements - 1; ++i ) 
	{
		for ( j = i + 1; j < elements; ++j )
			if  ( strcmp (d[i].word, d[j].word) > 0 )
			{
				copy_and_paste (temp, 0, d, i);
				copy_and_paste (d, i, d, j);
				copy_and_paste (d, j, temp, 0);				
			}
	}
}

