/**
 * Example program #1 from Chapter 22 of Absolute Begnner's Guide to C, 3rd Edition
 * File:    chapter23ex1.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * This program generates 10 random numbers and then sors them, 
 *
 */

 #include <stdio.h>
 #include <stdlib.h>
 #include <time.h>
 
 int main()
 {
    int ctr, inner, outer, did_swap, temp;
    int nums[10];
    time_t t;
    
    srand(time(&t)); // generates random numbers
    
    // fills the array with random numbers from 1 to 100
    for (ctr = 0; ctr < 10; ctr++)
    {
        nums[ctr] = (rand() % 99) + 1;
    }
    
    // list the array, before sorting
    printf("\nHere is the list before the sort: \n");
    for (ctr = 0; ctr < 10; ctr++)
    {
        printf(" %d\n", nums[ctr]);
    }
 
    // sort the array
    for (outer = 0; outer < 9; outer++)
    {
        did_swap = 0; // becomes 1(true) if list is not yet ordered
        for(inner = outer; inner < 10; inner++)
        {
            if (nums[inner] < nums[outer])
            {
                temp = nums[inner];
                nums[inner] = nums[outer];
                nums[outer] = temp;
                did_swap = 1;
            }
        }
        if (did_swap == 0)
        {
            break;
        }
    }
        
    // list the array after sorting
    printf("\nHere is the list after the sort: \n");
    for (ctr = 0; ctr < 10; ctr++)
    {
        printf(" %d\n", nums[ctr]);
    }
    
    return 0;
 }
