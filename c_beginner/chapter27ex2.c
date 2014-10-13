/**
 * Example program #2 from Chapter 27 of Absolute Begnner's Guide to C, 3rd Edition
 * File:    chapter27ex2.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * The program fills in 3 book structures with information, but uses pointer array.
 *
 */

#include "bookinfo.h" // first include the file with the header definition
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ctr;
    struct book_info * books[3]; // array of 3 stucture variables
    
    for (ctr = 0; ctr < 3; ctr++) // get info about each book from the user
    {
        books[ctr] = (struct book_info*) malloc(sizeof(struct book_info));
        
        printf("\nWhat is the name of the book #%d?\n", (ctr + 1));
        scanf(" %s", books[ctr]->title);
        printf("\nWho is the authur? \n");
        scanf(" %s", books[ctr]->author);
        printf("\nHow much did the book cost? \n");
        scanf(" $%f", &books[ctr]->price);
        printf("\nHow many pages in the book? \n");
        scanf(" %d", &books[ctr]->pages);
        getchar(); // clears last newline for next loop.
    }
    
    // print a header line and the loop through and print the information
    printf("\n\nHere is the collection of books: \n\n");
    for (ctr = 0; ctr < 3; ctr++)
    {
        printf("#%d: %s by %s", (ctr + 1), books[ctr]->title, books[ctr]->author);
        printf("\nIt is %d pages and costs $%.2f", books[ctr]->pages, books[ctr]->price);
        printf("\n\n");
    }
    
    return 0;
}
