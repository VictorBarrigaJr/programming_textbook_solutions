/**
 * Example program #1 from Chapter 29 of Absolute Begnner's Guide to C, 3rd Edition
 * File:    chapter29ex1.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * The program opens a file named letters.txt and prints A through Z into the file. It then
 * loops backward through the file printing each of the letters from Z to A.
 *
 */

#include <stdio.h>
#include <stdlib.h>

FILE * fptr;

int main()
{
    char letter;
    int i;
    
    fptr = fopen("letters.txt", "w+");
    
    if (fptr == 0)
    {
        printf("There was an error whole opening the file.\n");
        exit(1);
    }
    
    for (letter = 'A'; letter <= 'Z'; letter++)
    {
        fputc(letter, fptr);
    }
    
    puts("Just wrote the letter A through Z");
    
    // now read the file backwards
    fseek(fptr, -1, SEEK_END); // minus 1 byte from the end
    printf("Here is the file backwards:\n");
    for (i = 26; i > 0; i--)
    {
        letter = fgetc(fptr);
        // reads a letter, then backs up 2
        fseek(fptr, -2, SEEK_CUR);
        printf("The next letter is %c.\n", letter);
    }
    
    fclose(fptr); // close file
    return 0;
}
