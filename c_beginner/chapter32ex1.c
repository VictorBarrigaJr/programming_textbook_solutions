/**
 * Example program #1 from Chapter 32 of Absolute Begnner's Guide to C, 3rd Edition
 * File:    chapter32ex1.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * The program demonstrates functions returning a value by passing three floating-point 
 * numbers (grades) and calculating the average of the three.
 *
 */

#include <stdio.h>

float grade_ave(float test_1, float test_2, float test_3);

int main()
{
    float grade_1, grade_2, grade_3, average;
    
    printf("What was the grade on the first test? \n");
    scanf(" %f", &grade_1);
    
    printf("What was the grade on the second test? \n");
    scanf(" %f", &grade_2);
    
    printf("What was the grade on the third test? \n");
    scanf(" %f", &grade_3);
    
    // pass the three grades to the function and return the average
    average = grade_ave(grade_1, grade_2, grade_3);
    printf("\nWith those three test scores, the average is %.2f", average);
    
    return 0;    
}

/****************************************************************************************/

float grade_ave(float test_1, float test_2, float test_3) // recieves the values of three grades
{
    float local_average;
    local_average = (test_1 + test_2 + test_3) / 3;
    return(local_average); // returns the average to main
}
