/**
 * Example program #1 from Chapter 31 of Absolute Begnner's Guide to C, 3rd Edition
 * File:    chapter31ex1.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * The program demonstrates passing a variable to a function by value.
 *
 */

#include<stdio.h>

int half();

int main()
{
    int i;
    
    printf("Please enter an integer: \n");
    scanf(" %d", &i);
    
    half(i); // now call the half function, passing the value of i
    printf("In main(), i is still %d.\n", i); // the function did not alter i's value'
    
    return(0); // end program
}

/*****************************************************************************************/
/* sometimes putting dividers like the one above is a nice break between your functions */

int half (int i) // recieves the value of i
{
    i = i / 2;
    
    return(printf("Your value halved is %d.\n", i)); // returns to main
}
