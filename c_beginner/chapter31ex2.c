/**
 * Example program #2 from Chapter 31 of Absolute Begnner's Guide to C, 3rd Edition
 * File:    chapter31ex2.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * The program demonstrates passing an array to a function.
 *
 */

#include <stdio.h>
#include <string.h>

int change();

int main()
{
    char name[15] = "Michael Hatton";
    change(name);
    printf("Back in main(), the name is now %s.\n", name);
    
    return(0); 
}

/***********************************************************************************/

int change(char name[15]) // recieves the value of i
{
    strcpy(name, "XXXXXXXXXXXXXXX"); // change the string stored at the pointed address to name
    return; // return to main
}

