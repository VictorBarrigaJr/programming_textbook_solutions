/*******************************************************************************
 * Program 11.14 - Revised Version of the copyString Fundtions
 * - from Programming in C
 * File:    program11.14.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * Function to copy one string to another. Pointer ver.2
 *
 ******************************************************************************/

#include <stdio.h>

void copy_string (char *to, char *from);

int main(void)
{
    char string1[] = "A string to be copied.";
    char string2[50];

    copy_string (string2, string1);
    printf ("%s\n", string2);

    copy_string (string2, "So is this.");
    printf ("%s\n", string2);
    
    return 0;
}

void copy_string (char *to, char *from)
{
    while ( *from )
        *to++ = *from++;
    
    *to = '\0';
}
