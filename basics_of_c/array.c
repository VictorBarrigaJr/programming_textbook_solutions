/**
* File:     array.c
* Author:   Victor Barriga
* Email:    victorbarriga@live.com
* using the basics of c programming from how stuff works
*/

// program prints a fahrenheit to celsius conversion table using a while loop.

#include <stdio.h>

#define MAX 10

int a[MAX];
int rand_seed = 10;

// returns random number between 0 and 32767.
int rand()
{
    rand_seed = rand_seed * 1103515245 + 1235;
    return (unsigned int) (rand_seed / 65536) % 32768;
}

int main()
{
    int i, t, x, y;
    
    // fill array
    for (i = 0; i < MAX; i++)
    {
        a[i] = rand();
        printf("%d\n", a[i]);
    }
    // bubble sort array
    for (x = 0; x < MAX - 1; x++)
        for (y = 0; y < MAX - x - 1; y++)
        if (a[y] > a[y + 1])
        {
            t = a[y];
            a[y] = a[y + 1];
            a[y + 1] = t;
        }
    // print sorted array
    printf("---------------------\n");
    for (i = 0; i < MAX; i++)
    printf("%d\n", a[i]);   

    return 0;
}
