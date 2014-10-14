/*******************************************************************************
 * Program 11.11 - Working with Pointers to Arrays - from Programming in C
 * File:    program11.11.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * Function to sum the elements of an integer array
 *
 ******************************************************************************/

#include <stdio.h>

int array_sum (int array[], const int n);

int main (void)
{
    int values[10] = { 3, 7, -9, 3, 6, -1, 7, 9, 1, -5 };

    printf ("The sum is %i\n", array_sum (values, 10));

    return 0;
}

int array_sum (int array[], const int n)
{
    int sum = 0, *ptr;
    int * const array_end = array + n;

    for ( ptr = array; ptr < array_end; ++ptr)
        sum += *ptr;

    return sum;

}
