/**
 * Example program #3 from Chapter 28 of Absolute Begnner's Guide to C, 3rd Edition
 * File:    chapter28ex3.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * The program opens the existing book info file from the first example of ch 28, and adds
 * a line to the end.
 *
 */

#include <stdio.h>
#include <stdlib.h>

FILE * fptr;

int main()
{
    fptr = fopen("book_info.txt", "a");
    
    if (fptr == 0)
    {
        printf("Error opening the file.\n");
        exit (1);
    }
    
    fprintf(fptr, "\nMore books to come.\n");
    
    fclose(fptr);
    return(0);
}

