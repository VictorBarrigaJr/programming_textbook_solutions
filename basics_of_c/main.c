/**
* File:     util.c
* Author:   Victor Barriga
* Email:    victorbarriga@live.com
* using the basics of c programming from how stuff works
*/

// program prints a fahrenheit to celsius conversion table using a while loop.


#include <stdio.h>
#include "util.h"

#define MAX 10

int a[MAX];

void main()
{
    int i, t, x, y;
    // fill array
    for (i = 0; i < MAX; i++)
    {
        a[i] = rand();
        printf("%d\n", a[i]);
    }
    
    bubble_sort(MAX, a);
    
    // print sorted array
    printf("-------------------\n");
    for (i = 0; i < MAX; i++)
        printf("%d\n", a[i]);
    
}
