/**
 * Example program #2 from Chapter 12 of Absolute Begnner's Guide to C, 3rd Edition
 * File:    chapter12ex2.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * This program asks for a last name, and if the user has a last name that starts with 
 * a letter between p and q, they will be sent to a sppecil room for their tickers.
 *
 */
 
 #include <stdio.h>
 
 int main()
 {
    // set up an array for the last name anbd then get it from the user
    
    char name[25];
    printf("What is your last name (Please capitalize the first letter.)? \n");
    scanf(" %s", name); // for a string array you do not need the &
    
    if ((name[0] >= 'P') && (name[0] <= 'S'))
    {
        printf("You must go to room 2432 fo your tickets.\n");
    }
    else
    {
        printf("You can get your tickets here.\n");
    }
    
    return 0;
 
 }
 
