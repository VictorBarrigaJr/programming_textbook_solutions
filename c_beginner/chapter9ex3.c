/**
 * Example program #1 from Chapter 9 of Absolute Begnner's Guide to C, 3rd Edition
 * File:    chapter9ex3.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * This program calculates the average of four grades and also does some other basic math.
 */

#include <stdio.h>

int main()
{
    int grade1, grade2, grade3, grade4;
    float average_grade, grade_delta, percent_diff;
    
    // the student got 88s on the first and third test, so a multiple assignment statement works.
    grade1 = grade3 = 88;
    
    grade2 = 79;
    
    // the user needs to enter the fourth grade
    printf("What did you get on the fourth test (An integer between 0 and 100)?\n");
    scanf(" %d", &grade4);
    
    average_grade = (grade1 + grade2 + grade3 + grade4) / 4;
    
    grade_delta = 95 - average_grade;
    printf("Your average is %.1f.\n", average_grade);
    percent_diff = 100 * ((95 - average_grade) / 95);
    printf("Your grade is %.1f points lower than the top grade in the class (95)\n", grade_delta);
    printf("You are %.1f percent behind that grade!\n\n\n", percent_diff);
    
    return 0;
}
