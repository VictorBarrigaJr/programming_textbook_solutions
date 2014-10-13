/**
* File:     array2.c
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

void bubble_sort(int m)
{
    int x, y, t;
    for (x = 0; x < m - 1; x++)
        for (y = 0; y < m - x - 1; y++)
            if (a[y] > a[y + 1])
                {
                    t = a[y];
                    a[y] = a[y + 1];
                    a[y + 1] = t;
                }
}

int main()
{
    int i;             // declare variables
    // fill array 
    for (i = 0; i < MAX; i++)   // i has value of 0, if i is less than MAX, MAX defined as 10, keep looping
    {
        a[i] = rand();          // array[i] will contain random seed from rand function
        printf("%d\n", a[i]);   // outputs the random seed from array one on each line.
    }
    // bubble sort array
    bubble_sort(MAX);
    
    // print sorted array
    printf("---------------------\n");
    for (i = 0; i < MAX; i++)
    printf("%d\n", a[i]);   

    return 0;
}
