/**
 * Example program #1 from Chapter 9 of Absolute Begnner's Guide to C, 3rd Edition
 * File:    chapter9ex1.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * Thi si s asample program that demonstrates math operators, 
 * and the different types of division.
 */
 
#include <stdio.h>

int main()
{
    // two sets of equivalent variables, with one set floating-point and the other integer
    float a = 19.0;
    float b = 5.0;
    float float_answer;
    
    int x = 19;
    int y = 5;
    int int_answer;
    
    float_answer = a / b; // using two float variables creats an answer of 3.8
    printf("%.1f divided by %.1f equals %.1f\n", a, b, float_answer);
    
    float_answer = x / y; // take 2 creates an answer of 3.0
    printf("%d divided by %d equals %.1f\n", x, y, float_answer);

    int_answer= a / b; // this will also be 3, as it truncates and doesn't round up
    printf("%.1f divided by %.1f equals %d\n", a, b, int_answer);
    
    int_answer = x %y; // this calculates the remainder (4)
    printf("%d modulus (i.e. remainder of) %d equals %d", x, y, int_answer);
    
    return 0;
    
}
