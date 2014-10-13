/**
 * Example program #2 from Chapter 19 of Absolute Begnner's Guide to C, 3rd Edition
 * File:    chapter19ex2.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * This program asks a suser for their hometown and the two-letter abbreviation of their home state.
 * It then uses string concatenation to build a new string with both town and state and prints it using puts.
 *
 */

#include <stdio.h> // is needed for puts() and gets()
#include <string.h> // is needed for strcat()

int main()
{
    char city[15];
    // 2 chars for the state abbrev, and one for the null zero
    char state[3];
    char full_location[18] = "";
    
    puts("What town do you live in? ");
    gets(city);
    
    puts("What state do you live in, (2-letter abbreviation)? ");
    gets(state);
    
    /* concatenates the strings */
    strcat(full_location, city);
    strcat(full_location, ", "); //adds comma and space between the city and the state abbreviation
    strcat(full_location, state);
    
    puts("\nYou live in ");
    puts(full_location);
    return 0;

}

