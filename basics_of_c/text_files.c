/**
* File:     util.c
* Author:   Victor Barriga
* Email:    victorbarriga@live.com
* using the basics of c programming from how stuff works
*/

// program prints a fahrenheit to celsius conversion table using a while loop.


#include <stdio.h>
#include <string.h>

void main()
{
    char s[1000];
    int count = 0;
    while (gets(s))
        count += strlen(s);
    printf("%d\n", count);
}
