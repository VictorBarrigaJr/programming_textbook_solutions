/*******************************************************************************
 * Program 11.8 - Using Pointers and Functions - from Programming in C
 * File:    program11.8.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * Program to illustrate using pointers and functions
 *
 ******************************************************************************/

#include <stdio.h>

void test (int *int_pointer);

int main (void)
{
    void test (int *int_pointer);
    int i = 50, *p = &i;

    printf ("Before the call to test i = %i\n", i);
    
    test (p);
    printf ("After the call to test i = %i\n", i);

    return 0;
}

void test (int *int_pointer)
{
    *int_pointer = 100;
}
