/*******************************************************************************
 * Program 11.15 - Using Pointers to find the Lengths of a String
 * - from Programming in C
 * File:    program11.15.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * Function to count the characters ina string - Pointer version
 *
 ******************************************************************************/

#include <stdio.h>

int string_length (const char *string);

int main(void)
{
    printf ("%i ", string_length("stringLength test"));
    printf ("%i ", string_length(""));
    printf ("%i\n", string_length("complete"));

    return 0;
}

int string_length (const char *string)
{
    const char *cptr = string;
    while ( *cptr )
        ++cptr;
    return cptr - string;
}
