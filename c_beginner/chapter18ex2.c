/**
 * Example program #2 from Chapter 18 of Absolute Begnner's Guide to C, 3rd Edition
 * File:    chapter18ex2.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * This program is nothing more than a simple demonstration of the getchar() function.
 * getchar() is defined in stdio.h, but string.h is needed for strlen() function.
 *
 */

#include <stdio.h>
#include <string.h>

int main()
{
    int i;
    char msg[25];
    
    printf("Type up to 25 characters and then press Enter: \n");
    
    for(i = 0; i < 25; i++)
    {
        msg[i] = getchar(); // outputs a single character
        if (msg[i] == '\n')
        {
            i--;
            break;
        }
    }
    
    putchar('\n'); // one line break after the loop is done
    
    for (; i>= 0; i--)
    {
        putchar(msg[i]);
    }
    putchar('\n');
    
    return 0;
}

