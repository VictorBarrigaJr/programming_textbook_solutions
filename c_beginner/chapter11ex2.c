/**
 * Example program #2 from Chapter 11 of Absolute Begnner's Guide to C, 3rd Edition
 * File:    chapter11ex2.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * This program asks the user for their bith year and calculates
 * how old they will be in the current. It also chekcs to make sure 
 * a future year has not been entered. It then tells the user if they
 * were born in a leap year.
 *
 */
 
 #include <stdio.h>
 #define CURRENTYEAR 2014   
 
 int main()
 {
    int year_born, age;
    
    printf("What year were you born?\n");
    scanf(" %d", &year_born);
    
    // this if statement can do some data validation, making sure the year makes sense.
    // the statements will only execute if the year is after the current year.
    
    if (year_born > CURRENTYEAR)
    {
        printf("Really? You haven't been born yet?");
        printf(" Want to try again with a differnt year?\n\n");
        printf("What year were you born?\n");
        scanf(" %d", &year_born);
    }
    else
    {
        age = CURRENTYEAR - year_born;
    
        printf("\n\nSo this year you will turn %d on your birthday!\n\n\n", age);
    
        // the second if statment uses the modulus operator to test if the year of birth was a leap year.
        // again, only if it is will the code exedute.
    
        if ((year_born %4) == 0)
        {
            printf("You were born in a Leap Year--cool!\n\n\n");
        }
    }
    return 0;
 }
