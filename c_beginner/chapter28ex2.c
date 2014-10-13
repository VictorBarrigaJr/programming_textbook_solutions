/**
 * Example program #2 from Chapter 28 of Absolute Begnner's Guide to C, 3rd Edition
 * File:    chapter28ex2.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * The program takes the book info file from chpter28ex1.c and reads each line from the file 
 * and outputs it to the screen.
 *
 */

#include <stdio.h>
#include <stdio.h>
FILE * fptr;

int main()
{
    char file_line[100]; // will hold each line of input
    fptr = fopen("book_info.txt", "r");
    
    if (fptr != 0)
    {
        while (!feof(fptr))
        {
            fgets(file_line, 100, fptr);
            if (!feof(fptr))
            {
                puts(file_line);
            }
        }
    }
    else
    {
        printf("\nError opening file.\n");
    }
    fclose(fptr); // always close files
    return 0;
}
