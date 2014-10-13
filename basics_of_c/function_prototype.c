/**
* File:     function_prototype.c
* Author:   Victor Barriga
* Email:    victorbarriga@live.com
* using the basics of c programming from how stuff works
*/

// program prints a fahrenheit to celsius conversion table using a while loop.

#include <stdio.h>

int add(int, int);


void main()
{
    printf("%d\n", add(3));
}

int add(int i, int j)
{
    return i + j;
}
