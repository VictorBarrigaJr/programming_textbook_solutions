/*******************************************************************************
 * Program 11.12 - Summing the Elemnts of an Array - from Programming in C
 * File:    program11.12.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * Function to sum the elements of an integer array ver. 2
 *
 ******************************************************************************/

#include <stdio.h>

int array_sum (int *array, const int n);

int main (void)
{
    int values[10] = { 3, 7, -9, 3, 6, -1, 7, 9, 1, -5 };

    printf ("The sum is %i\n", array_sum (values, 10));

    return 0;
}

int array_sum (int *array, const int n)
{
    int sum = 0;
    int * const array_end = array + n;

    for (  ; array < array_end; ++array)
        sum += *array;

    return sum;
}
