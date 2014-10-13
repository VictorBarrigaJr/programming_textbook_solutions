/**
 * Example program #1 from Chapter 8 of Absolute Begnner's Guide to C, 3rd Edition
 * File:    chapter8ex1.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * This is a sample program that asks users for some basic data and
 * prints it on the screen in order to show what was entered
 */
 
 #include <stdio.h>
 
 int main()
 {
    // set up the variables that scanf will fill
    char first_initial;
    char last_initial;
    int age;
    int favorite_number;
    
    printf("What letter does your first name begin with?\n");
    scanf(" %c", &first_initial);
    
    printf("What letter does your last name begin with?\n");
    scanf(" %c", &last_initial);
    
    printf("How old are you?\n");
    scanf(" %d", &age);
    
    printf("What is your favorite number (integer only)?\n");
    scanf(" %d", &favorite_number);
    
    printf("\nYour initials are %c. %c. and you are %d years old.", first_initial, last_initial, age);
    printf("\nYour favorite number is %d.\n\n", favorite_number);
    
    return 0;
 }
