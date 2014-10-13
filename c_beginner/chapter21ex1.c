/**
 * Example program #1 from Chapter 21 of Absolute Begnner's Guide to C, 3rd Edition
 * File:    chapter21ex1.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * This program creates an array of 10 game scores for a basketball player. The scores from the
 * first six games are in the program and the scores from the last four are input by the user. 
 *
 */

#include <stdio.h>

int main()
{
    int game_scores[10] = {12, 5, 21, 15, 32, 10};
    int total_points = 0;
    int i;
    float average;
    
    // only need scores for the last 4 games so the loop will cover array 6-9
    for (i = 6; i < 10; i++)
    {
        // add one to the array number as th user wont think of the 1st game as game 0 but game 1
        printf("What did the player score in game %d? ", i + 1);
        scanf(" %d", &game_scores[i]);
    }
    
    // now loop through tyhe scores to get total points in order to calculate the agerage
    for (i = 0; i < 10; i++)
    {
        total_points += game_scores[i];
    }
    
    // use floating point for the avg as it will likely be between two ints
    average = ((float) total_points / 10);
    printf("\n\nThe layer's scoring average is %.1f.\n", average);
    
    return 0;
}
