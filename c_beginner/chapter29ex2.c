/**
 * Example program #2 from Chapter 29 of Absolute Begnner's Guide to C, 3rd Edition
 * File:    chapter29ex2.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * The program opens the file created in the first program of the chapter and changes one
 * of the letters to an *. It then prints the new list with the altered list of letters.
 *
 */

#include <stdio.h>
#include <stdlib.h>

FILE * fptr;

int main()
{
    char letter;
    int i;
    
    fptr = fopen("letters.txt", "r+");
    
    if  (fptr == 0)
    {
        printf("There was an error opening the file.\n");
        exit(1);
    }
    
    printf("Which # letter would you like to change (1-26)? ");
    scanf(" %d", &i);
    
    // seeks that position position fro  the beginnin of the file
    fseek(fptr, (i - 1), SEEK_SET); //subtract 1 from the position because array begins at 0
    
    // write an * over the letter in that position
    fputc('*', fptr);
    
    // now jump bak to the beginning of the array and print it out
    fseek(fptr, 0, SEEK_SET);
    printf("Here is the file now:\n");
    for (i =0; i <26; i++)
    {
        letter = fgetc(fptr);
        printf("The next letter is %c.\n", letter);
    }
    fclose(fptr); // close file
    return 0;
}
