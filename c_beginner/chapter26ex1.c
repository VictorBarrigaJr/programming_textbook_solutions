/**
 * Example program #1 from Chapter 26 of Absolute Begnner's Guide to C, 3rd Edition
 * File:    chapter26ex1.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * This program looks for a number of random integers, allocates an array and fills it with
 * numbers between 1 and 500 and thenb loops through all the numbers and figures out the 
 * smalles, the biggest and the average. It then frees the memory.
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i, a_size, biggest, smallest;
    int * random_nums;
    time_t t;
    srand(time(&t));
    double total = 0;
    float average;

    printf("How many random numbers do you want in your array? ");
    scanf(" %d", &a_size);
    
    // allocate an array of integers equal to the number of elements requested by the user
    random_nums = (int *) malloc(a_size * sizeof(int));
    if (!random_nums) // tests to ensure the array allcated properly
    {
        printf("Random array allocation failed!\n");
    }
    
    // loops throught the array and assigns a random num between 1 and 500 to each element.
    for (i = 0; i < a_size; i++)
    {
        random_nums[i] = (rand() % 500) + 1;
    }
    
    // initialize the biggest and amallest number for comparison's sake
    biggest = 0;
    smallest = 500;
    
    // loop through the now-filling array testin for random nums that are biggest, 
    // smallest, and adding all the numbers together to calculate an average
    for (i = 0; i < a_size; i++)
    {
        total += random_nums[i];
        if (random_nums[i] > biggest)
        {
            biggest = random_nums[i];
        }
        if (random_nums[i] < smallest)
        {
            smallest = random_nums[i];
        }
    }
    
    average = ((float)total) / ((float)a_size);
    printf("The biggest random number is %d.\n", biggest);
    printf("The smallest random number is %d.\n", smallest);
    printf("The average of the random numbers is %.2f.\n", average);
    
    free(random_nums); // frees malloc
    
    return 0;    
}
