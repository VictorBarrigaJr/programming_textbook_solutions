/**
 * Example program #1 from Chapter 28 of Absolute Begnner's Guide to C, 3rd Edition
 * File:    chapter28ex1.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * The program takes the book info program from chapter 27 and writes the info to a file named bookinfo.txt
 *
 */

#include "bookinfo.h" // first include the file with structure definition
#include <stdio.h>
#include <stdlib.h>
FILE * fptr;

int main()
{
    int ctr;
    struct book_info books[3]; // array of 3 structures
    
    for (ctr = 0; ctr < 3; ctr++)
    {
        printf("What is the name of the book #%d\n", (ctr + 1));
        scanf(" %s", books[ctr].title);
        
        printf("Who is the author? \n");
        scanf(" %s", books[ctr].author);
        
        printf("How many pages in the book? \n");
        scanf(" %d", &books[ctr].pages);
        
        printf("How much did the book cost? \n");
        scanf(" $%f", &books[ctr].price);
        
        getchar(); // clears last newline for next loop.
    }
    
    // remember when typing your filename path to double up the backslashes or C
    // will think your putting in a conversion character.
    fptr = fopen("book_info.txt", "w");
    
    if (fptr == 0) 
    {
        printf("Error--file could not be opened.\n");
        exit (1);
    }
    
    // print a header line and then loop through and print the ino to your file,
    // but this time printout will be in your file not the screen
    fprintf(fptr, "\n\nHere is the collection of books: \n");
    for (ctr = 0; ctr < 3; ctr++)
    {
        fprintf(fptr, "#%d: %s by %s", (ctr + 1), books[ctr].title, books[ctr].author);
        fprintf(fptr, "\nIt is %d pages and cost $%.2f", books[ctr].pages, books[ctr].price);
        fprintf(fptr, "\n\n");
    } 
    
    fclose(fptr); // always close your files
    return 0;
}
