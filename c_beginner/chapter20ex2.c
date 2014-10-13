/**
 * Example program #2 from Chapter 20 of Absolute Begnner's Guide to C, 3rd Edition
 * File:    chapter20ex2.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * This program rolls two dice and presents the total. It then asks the user to guess if 
 * the next total will be higher, lower, or equal. It then rolls two more dic and tells the 
 * user how they did.
 *
 */

#include <stdio.h>
#include <string.h>
#include <time.h>
#include <ctype.h>

int main()
{
    int dice1, dice2, total1, total2;
    time_t t;
    char answer;
    srand(time(&t)); //this is needed to make sure each random number generated is different
    
    // first roll - this will give you a number between 0 and 5, so the + 1 makes it 1 to 6
    dice1 = (rand() % 5) +1;
    dice2 = (rand() % 5) +1;
    total1 = dice1 + dice2;
    printf("First roll of the dice was %d and %d for a total of %d.\n\n\n", dice1, dice2, total1);
    
    do 
    {
        printf("Do you think the next roll will be (H)igher, (L)ower, or (S)same?\n");
        printf("Enter H, L, or S to reflect your guess. \n");
        
        scanf(" %c", &answer);
        answer = toupper(answer);
        
    }
    while ((answer != 'H') && (answer != 'L') && (answer!= 'S'));
    
    // second roll - second total
    dice1 = (rand() % 5) +1;
    dice2 = (rand() % 5) +1;
    total2 = dice1 + dice2;
    printf("The second roll of the dice was %d and %d for a total of %d.\n\n\n", dice1, dice2, total2);
    
    // compares the two dice totals agains the user's guess, and prints if they were right or wrong
    if (answer == 'L')
    {
        if (total2 < total1)
        {
            printf("Good job! You were right, %d is lower than %d\n", total2, total1);
        }
        else
        {
            printf("Sorry! %d is not lower than %d\n\n", total2, total1);
        }
    }
    else if (answer == 'H')
    {
        if (total2 > total1)
        {
            printf("Good job! You were right, %d is higher than %d\n", total2, total1);
        }
        else
        {
            printf("Sorry! %d is not higher than %d\n\n", total2, total1);
        }
    }
    else if (answer == 'S')
    {
        if (total2 == total1)
        {
            printf("Good job! You were right, %d is the same as %d\n", total2, total1);
        }
        else
        {
            printf("Sorry! %d is not the same as %d\n\n", total2, total1);
        }
    }
    
    return 0;
}
