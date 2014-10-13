/**
 * Example program #1 from Chapter 17 of Absolute Begnner's Guide to C, 3rd Edition
 * File:    chapter17ex1.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * This program presents a menu of choices, gets the user's choice, and then uses they
 * switch statement o execute a line or two of code based on that choice.  What the 
 * user wants to do is not truly implemented-it is just a series of stubs to teach the
 * the value of the switch statment.
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int choice;
    
    printf("What do you want to do?\n");
    printf("1. Add New Contact\n");
    printf("2. Edit Existing Contact\n");
    printf("3. Call Contact\n");
    printf("4. Text Contact\n");
    printf("5. Exit\n");
    
    do
    {
        printf("Enter your choice: ");
        scanf(" %d", &choice);
        
        switch (choice)
        {
            case (1):
                printf("\nTo add you will need the contact's first name, last name, and number.\n'");
                break;
            case (2):
                printf("\nGet ready to enter the name of the contact you wish to change.\n");
                break;
            case (3):
                printf("\nWhich contact do you wish to call?\n");
                break;
            case (4):
                printf("\nWhich contact do you wish to text?\n");
                break;
            case (5):
                exit(1); // exits the program early
            default:
                printf("\n%d is not a valid choice.\n", choice);
                printf("\nPlease try again.\n");
                break;                      
        }         
    }
    while ((choice < 1) || (choice > 5));
    
    return 0;
}

