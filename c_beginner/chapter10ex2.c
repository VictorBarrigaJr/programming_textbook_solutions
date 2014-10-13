/**
 * Example program #2 from Chapter 10 of Absolute Begnner's Guide to C, 3rd Edition
 * File:    chapter10ex2.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * This program also increases counter 1 to 5, printing updates and then counts it back down o 1.
 * However, it uses coumpound operators.
 *
 */
 
 #include <stdio.h>
 
 int main()
 {
    int ctr = 0;
    
    ctr += 1; // increases counter to 1
    printf("Counter is at %d.\n", ctr);
    ctr += 1; // increases counter to 2
    printf("Counter is at %d.\n", ctr);
    
    printf("Counter is at %d.\n", ctr += 1);
    ctr += 1; // increases counter to 4
    printf("Counter is at %d.\n", ctr);
    
    printf("Counter is at %d.\n", ctr += 1);
    ctr -= 1; // decreases counter to 4
    printf("Counter is at %d.\n", ctr);
    printf("Counter is at %d.\n", ctr -= 1);
    printf("Counter is at %d.\n", ctr -= 1);
    printf("Counter is at %d.\n", ctr -= 1);
    
    return 0;
 
 }
 
