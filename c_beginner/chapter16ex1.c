/**
 * Example program #1 from Chapter 16 of Absolute Begnner's Guide to C, 3rd Edition
 * File:    chapter16ex1.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * this program will ask users to input test grades for the 25 students in a class and
 * then compute an average test grade. if fewer than 25 students took the test, the user 
 * can enter -1 as a grade and break the loop, and only those entered grades will be used 
 * to compute the average.
 *
 */

#include <stdio.h>

int main()
{
    int num_test;
    float st_test, avg, total = 0.0;
    
    // ask for up to 25 tests
    
    for (num_test = 0; num_test < 25; num_test++)
        {
            // get the test scores, and check if -1 was entered
            printf("\nWhat is the next student's test score? ");
            scanf(" %f", &st_test);
            if (st_test < 0.0)
            {
                break;
            }
            total += st_test;
        }
    avg = total / num_test;
    printf("\nThe average is %.1f%%.\n", avg);
    
    return 0;
    
}
