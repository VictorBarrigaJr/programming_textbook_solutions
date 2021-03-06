/**
* File:     pointers2.c
* Author:   Victor Barriga
* Email:    victorbarriga@live.com
* using the basics of c programming from how stuff works
*/

#include <stdio.h>

void swap(int *i, int *j)
{
    int t;
    
    t = *i;
    *i = *j;
    *j = t;
}

void main()
{
    int a, b;
    
    a = 5;
    b = 10;
    printf("%d %d\n", a, b);
    swap(&a, &b);
    printf("%d %d\n", a, b);
}
