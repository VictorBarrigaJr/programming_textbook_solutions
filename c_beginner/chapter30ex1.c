/**
 * Example program #1 from Chapter 30 of Absolute Begnner's Guide to C, 3rd Edition
 * File:    chapter30ex1.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * This sprogram is a simple demonsttration of the difference between global variables and
 * local variables
 *
 */

#include <stdio.h>

int g1 = 10;


int pr_again();

int main()
{
    float ll;
    ll = 9.0;
    
    printf(" %d %.2f\n", g1, ll); // prints the 1st global and 1st locan variable
    
    pr_again(); // calls our first function
    return 0;
}

float g2 = 19.0;

int pr_again()
{
    int 12 = 5;
    
    printf(" %d %.2f %d\n", 12, g2, g1); // can't print 11-- it is a local to main
    return(int);
}
