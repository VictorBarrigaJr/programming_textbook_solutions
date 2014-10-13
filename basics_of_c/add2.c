/**
* File:     add2.c
* Author:   Victor Barriga
* Email:    victorbarriga@live.com
* the simplest program in c - using the basics of c programming from how stuff works
*/

// program receives two inputs from user, inputs them into variables, and inputs the sum into a third.

#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter the first value: ");
    scanf("%d", &a);
    printf("Enter the econd value: ");
    scanf("%d", &b);
    c = a + b;
    printf("%d + %d = %d\n", a, b, c);
    return 0;    
}
