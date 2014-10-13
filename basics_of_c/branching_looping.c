/**
* File:     branching_looping.c
* Author:   Victor Barriga
* Email:    victorbarriga@live.com
* the simplest program in c - using the basics of c programming from how stuff works
*/

// program demonstrates and if statement, receive input from user, and determine if the value is negative.

#include <stdio.h>

int main()
{
    int b;
    printf("Enter a value: \n");
    scanf("%d", &b);
    if (b < 0)
    {
        printf("The value is negative.\n");
    }
    return 0;
}
