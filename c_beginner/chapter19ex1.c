/**
 * Example program #1 from Chapter 19 of Absolute Begnner's Guide to C, 3rd Edition
 * File:    chapter19ex1.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * This program asks a user for a username and a password. It tests whether their password
 * has an uppercase letter, lowercase letter, and a digit. If it does, the program congratulates
 * their selection. If not, it suggests they might want to consider a password with more variety
 * for the sake of security
 *
 */

#include <stdio.h> // needed for printf() and scanf()
#include <string.h> // needed for strlen()
#include <ctype.h> // needed for isdigit, isupper, and islower

int main()
{
    int i;
    int has_upper, has_lower, has_digit;
    char user[25], password[25];
    
    // initialize all three test variable to 0 i.e. false
    has_upper = has_lower = has_digit = 0;
    
    printf("What is your username? ");
    scanf(" %s", user);
    
    printf("Please create a password: ");
    scanf(" %s", password);
    
    /* this loop goes through each character of the password and tests whether it is a digit,
    uppercase letter, then lowercase letter.*/
    for (i = 0; i < strlen(password); i++)
    {
        if (isdigit(password[i]))
        {
            has_digit = 1;
            continue;
        }
        if (isupper(password[i]))
        {
            has_upper = 1;
            continue;
        }
        if (islower(password[i]))
        {
            has_lower = 1;
        }
    }
    
    /* the following portion will only execute if all three variables are 1(true), and the variables
    will only equal 1 if the appropriate characters were found*/
    if ((has_digit) && (has_upper) && (has_lower))
    {
        printf("\n\nExellent work, %s, your password has upper and lowercase letters and a number.\n", user);
    }
    else
    {
        printf("\n\nYou should consider a new password, %s, one that uses upper and lowrcase letters and a number\n", user);
    }
    
    return 0;

}

