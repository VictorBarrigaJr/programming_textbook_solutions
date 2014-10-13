/**
 * Example program #1 from Chapter 13 of Absolute Begnner's Guide to C, 3rd Edition
 * File:    chapter13ex1.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * This program asks for a last number from 1 to 100 and tells the user if their 
 * choice is equally divisible by 2 through 9.
 *
 */
 
#include <stdio.h>

int main()
{
    // define the integer to hold the user's guess and then get it from the user.
    
    int num_pick;
    printf("Pick an interger between 1 and 100 (the higher the better!): \n");
    scanf(" %d", &num_pick); // for an int you need the & sign
    
    printf(" %d %s divisible by 2.\n", num_pick, (num_pick % 2 == 0)? ("is") : ("is not"));
    printf(" %d %s divisible by 3.\n", num_pick, (num_pick % 3 == 0)? ("is") : ("is not"));
    printf(" %d %s divisible by 4.\n", num_pick, (num_pick % 4 == 0)? ("is") : ("is not"));
    printf(" %d %s divisible by 5.\n", num_pick, (num_pick % 5 == 0)? ("is") : ("is not"));
    printf(" %d %s divisible by 6.\n", num_pick, (num_pick % 6 == 0)? ("is") : ("is not"));
    printf(" %d %s divisible by 7.\n", num_pick, (num_pick % 7 == 0)? ("is") : ("is not"));
    printf(" %d %s divisible by 8.\n", num_pick, (num_pick % 8 == 0)? ("is") : ("is not"));
    printf(" %d %s divisible by 9.\n", num_pick, (num_pick % 9 == 0)? ("is") : ("is not"));
    
    return 0;
    
}
