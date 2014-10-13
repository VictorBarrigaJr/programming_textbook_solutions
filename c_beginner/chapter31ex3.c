/**
 * Example program #3 from Chapter 31 of Absolute Begnner's Guide to C, 3rd Edition
 * File:    chapter31ex3.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * The program demonstrates passing a variable to a function by address.
 *
 */
 
#include <stdio.h>
 
int half();
 
int main()
{
   int i;
    
   printf("Please enter an integer:  \n");
   scanf(" %d", &i);
    
   half(&i); // calls the half function, passing the address of i
   printf("In main(), i is now %d.\n", i);
    
   return(0);
}

/**************************************************************************************/

int half(int *i) // receives the address of i
{
    *i = *i / 2;
    
    return(printf("Your value halved is %d.\n", *i));
}

