/**
 * Example program #1 from Chapter 15 of Absolute Begnner's Guide to C, 3rd Edition
 * File:    chapter15ex1.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * This program will program wil ask the user how many movies they've seen this year,
 * and then loop through asking the name of each movie and a rating from 1 to 10.  It 
 * will remember their favorite movie and their least favorite movie.
 *
 */
 
 #include <stdio.h>
 #include <string.h>
 
 int main()
 {
    int ctr, num_movies, rating, fav_rating, least_rating;
    char movie_name[40], favorite[40], least[40];
    
    // initiate te fav_rating to 0 so any movie with any rating of 1 or higher will replace it
    // and the least_rating to 10 so any movie rated 9 or lower will replace it.
    fav_rating = 0;
    least_rating = 10;
    
    // find out how many movies the user has seen and can rate the loop will continue until 
    // they enter a number more tha 0
    do 
    {
        printf("How many movies have you seen this year? \n");
        scanf(" %d", &num_movies);
        
        // if the user enters 0 o a negative num, the program will remind them to enter a positive 
        // num and prompt them again.
        if (num_movies < 1)
        {
            printf("No movies! How cany9ou rank them?\nTrey again!\n\n");
        }
    }
    while (num_movies < 1);
    
    for (ctr = 1; ctr <= num_movies; ctr++)
    {
        // get the name of the movie and the user's rating
        printf("\nWhat was the name of te movie (1-word titles only.)? \n");
        
        scanf(" %s", movie_name);
        printf("On a scale of 1 to 10, what would you rate it? \n");
        scanf(" %d", &rating);
        
        // check if it's their best-rated movie so far
        if (rating > fav_rating)
        {
            strcpy(favorite, movie_name);
            fav_rating = rating;
        }
        
        // check if it's their worst-rated movie so far
        if (rating < least_rating)
        {
            strcpy(least, movie_name);
            least_rating = rating;
        }
    }
    
    printf("\nYour favorite movie was %s.\n", favorite);
    printf("\nYour least favorite movie was %s.\n", least);
    
    return 0;    
 
 }
