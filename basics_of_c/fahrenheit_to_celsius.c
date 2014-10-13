/**
* File:     fahrenheit_to_celsius.c
* Author:   Victor Barriga
* Email:    victorbarriga@live.com
* fahrenheit_to_celsius - using the basics of c programming from how stuff works
*/

// program prints a fahrenheit to celsius conversion table using a while loop.

#include <stdio.h>

int main()
{
    int a;
    a = 0;
    while (a <= 100)
    {
        printf("%4d degrees F = %4d degrees C\n", 
            a, (a -32) * 5 / 9);
        a = a + 10;
    }
    return 0; 
}
