/* The first code listing from Chaper 3 of The Absolute Beginner's Guide to C
Teaching new programmers to create kick-butt code since 1994! */
/* A Dean Miller joint */
/* Filename chapter3ex1.c */
/* Totals how much money will be spent on holiday gifts. */

#include <stdio.h>

int main()
{
    float gift1, gift2, gift3, gift4, gift5; // variables to hold costs.
    float total; // variable to hold total amount
    
    // asks for each gift amount
    printf("How much do you want to spend on your Mom? ");
    scanf(" %f", &gift1);
    printf("How much do you want to spend on your Dad? ");
    scanf(" %f", &gift2);
    printf("How much do you want to spend on your Sister? ");
    scanf(" %f", &gift3);
    printf("How much do you want to spend on your Brother? ");
    scanf(" %f", &gift4);
    printf("How much do you want to spend on your favorite ");
    printf("C Programming author?");
    scanf(" %f", &gift5);
    
    total = gift1 + gift2 + gift3 + gift4 + gift5; // computes total amount spent on gifts
    printf("\nThe total you will be spending on gifts is $%.2f\n", total);
    return 0; //ends the program    
} 
