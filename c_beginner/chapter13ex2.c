/**
 * Example program #2 from Chapter 13 of Absolute Begnner's Guide to C, 3rd Edition
 * File:    chapter13ex2.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * This program increases a counter from 1 to 5, printing updates and then counts it back
 * down to 1.  However, it uses the increment and decrement operators. 
 * choice is equally divisible by 2 through 9.
 *
 */
 
 #include <stdio.h>
 
 int main()
 {
 
    int ctr = 0;
    
    printf("Counter is at %d.\n", ++ctr);
    printf("Counter is at %d.\n", ++ctr);
    printf("Counter is at %d.\n", ++ctr);
    printf("Counter is at %d.\n", ++ctr);
    printf("Counter is at %d.\n", ++ctr);
    
    printf("Counter is at %d.\n", --ctr);
    printf("Counter is at %d.\n", --ctr);
    printf("Counter is at %d.\n", --ctr);
    printf("Counter is at %d.\n", --ctr);
    
    return 0;
 }

