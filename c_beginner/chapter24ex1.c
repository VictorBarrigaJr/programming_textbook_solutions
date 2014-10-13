/**
 * Example program #1 from Chapter 24 of Absolute Begnner's Guide to C, 3rd Edition
 * File:    chapter24ex1.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * This program demonstrates pointers by declaring and initializing both regular and 
 * pointer variables for int, float, nd char types and then displays the value of each.
 *
 */

#include <stdio.h>

int main()
{
    int kids;
    int * p_kids;
    
    float price;
    float * p_price;
    
    char code;
    char * p_code;
    
    price = 17.50;
    p_price = &price;
    
    printf("\nHow many kids are you takin to the water park? \n");
    scanf(" %d", &kids);
    
    p_kids = &kids;
    
    printf("\nDo yo have a discount ticket for the park?");
    printf("\nEnter E for Employee Discount, S for Sav-More Discount, or N for No Discount: ");
    scanf(" %c", &code);
 
    p_code = &code;
    
    printf("\nFirst let's do it with the variables:\n");
    printf("You've got %d kids...\n", kids);
    
    switch (code)
    {
        case('E'):
            printf("The employee discount saves you 25%% on the $%.2f prince.", price);
            printf("\nTotal ticket cost: $%.2f\n\n", (price * .75 * kids));
            break;
        case('S'):
            printf("The sav-more discount saves you 15%% on the $%.2f price.", price);
            printf("\nTotal ticket cost: $%.2f\n\n", (price * .85 * kids));
            break;
        default: // either entered N for no discount or an invalid letter
            printf("You will be paying full price of $%.2f for your tickets\n\n", price);
    }
    
    // repeat the same code, but use derefrenced pointes and get the same results
    printf("\n\n\nNow lets do it with pointers:\n");
    printf("You've got %d kids...\n", *p_kids);
    
    switch (*p_code)
    {
        case('E'):
            printf("The employee discount saves you 25%% on the $%.2f prince.", *p_price);
            printf("\nTotal ticket cost: $%.2f\n\n", (*p_price * .75 * *p_kids));
            break;
        case('S'):
            printf("The sav-more discount saves you 15%% on the $%.2f price.", *p_price);
            printf("\nTotal ticket cost: $%.2f\n\n", (*p_price * .85 * *p_kids));
            break;
        default: // either entered N for no discount or an invalid letter
            printf("You will be paying full price of $%.2f for your tickets\n\n", *p_price);
    } 
    
    return 0;
    
}
