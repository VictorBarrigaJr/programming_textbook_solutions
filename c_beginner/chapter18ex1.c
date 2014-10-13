/**
 * Example program #1 from Chapter 17 of Absolute Begnner's Guide to C, 3rd Edition
 * File:    chapter18ex1.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * This program is nothing more than a simple demonstration of the putchar() function.
 * putchar() is defined in stdio.h, but string.h is needed for the strlen() function
 *
 */

#include <stdio.h>
#include <string.h>

int main()
{
    int i;
    char msg[] = "C is fun";
    
    for (i = 0; i < strlen(msg); i++)
    {
        putchar(msg[i]); // outputs a single character
    }
    putchar('\n'); // one line break ater the loop is done.
    
    return 0;
}


