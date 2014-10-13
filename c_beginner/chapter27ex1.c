/**
 * Example program #1 from Chapter 27 of Absolute Begnner's Guide to C, 3rd Edition
 * File:    chapter27ex1.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * The program gets the book_info structure by including bookinfo.h and asks the user 
 * to fill in three structures and then prints them.
 *
 */

#include "bookinfo.h" // first include the file with the header definition
#include <stdio.h>

int main()
{
    int ctr;
    struct book_info books[3]; // array of 3 stucture variables
    
    for (ctr = 0; ctr < 3; ctr++) // get info about each book from the user
    {
        printf("\nWhat is the name of the book #%d?\n", (ctr + 1));
        scanf(" %s", books[ctr].title);
        printf("\nWho is the authur? \n");
        scanf(" %s", books[ctr].author);
        printf("\nHow much did the book cost? \n");
        scanf(" $%f", &books[ctr].price);
        printf("\nHow many pages in the book? \n");
        scanf(" %d", &books[ctr].pages);
        getchar(); // clears last newline for next loop.
    }
    
    // print a header line and the loop through and print the information
    printf("\n\nHere is the collection of books: \n\n");
    for (ctr = 0; ctr < 3; ctr++)
    {
        printf("#%d: %s by %s", (ctr + 1), books[ctr].title, books[ctr].author);
        printf("\nIt is %d pages and costs $%.2f", books[ctr].pages, books[ctr].price);
        printf("\n\n");
    }
    
    return 0;
}
