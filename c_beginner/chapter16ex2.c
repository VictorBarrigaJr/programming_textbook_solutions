/**
 * Example program #2 from Chapter 16 of Absolute Begnner's Guide to C, 3rd Edition
 * File:    chapter16ex2.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * this program loops through 10 numbners and prints a message that varies whether 
 * the program is odd or even. it tests for odd and if the number is odd, it prints 
 * the message and then starts the next iteration of the loop using continue. 
 * Otherwise, it prints the even message.
 *
 */

#include <stdio.h>

int main()
{
    int i;
    // loops through the numbers 1 through 10
    for (i = 1; i <= 10; i++)
        {
            if ((i % 2) == 1) // odd numbers have a remainder of 1
            {
                printf("I'm rather odd...\n");
                continue; // will jump to the next itereaton of the loop 
            }
            printf("Even up!\n");
        }
        
    return 0;

}
