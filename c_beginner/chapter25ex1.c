/**
 * Example program #1 from Chapter 24 of Absolute Begnner's Guide to C, 3rd Edition
 * File:    chapter25ex1.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * This program declares and initializes an array of character pointers and then askes for 
 * the associated ratings.
 *
 */

#include <stdio.h>

int main()
{
    int i;
    int ctr = 0;
    char ans;
    
    // declaring array of 9 characters and then initializing them
    char * movies[9] = {"Amour", "Argo", "Beasts of the Southern Wild", 
                        "Django Unchained", "Les Miserables", 
                        "Life of Pi", "Lincoln", "Silver Linings Playbook",
                        "Zero Dark Thirty"};
    int movie_ratings[9]; // 9 integers for movie ratings
    
    char * temp_movies = "This will be used to sort rated mocies";
    int outer, inner, did_swap, temp_rating; // for sort loop
    
    printf("\n\n*** Oscar seasson 2012 is here ***\n\n");
    printf("Time to rate this year's best picture nominies: ");
    
    for (i = 0; i < 9; i++)
    {
        printf("\nDid you see %s? (Y/N): ", movies[i]);
        scanf(" %c", &ans);
        
        if ((toupper(ans)) == 'Y')
        {
            printf("\nWhat was your rating? (scale of 1-10): ");
            scanf(" %d", &movie_ratings[i]);
            ctr++; // this will only print movies you have seen
            continue;
        }
        else
        {
            movie_ratings[i] = -1;
        }
    }
    
    // sort the movies by ratings (unseen go to bottom)
    for(outer = 0; outer < 8; outer++)
    {
        did_swap = 0;
        for (inner = outer; inner < 9; inner++)
        {
            if (movie_ratings[inner] < movie_ratings[outer])
            {
                temp_movies = movies[inner];
                temp_rating = movie_ratings[inner];
                
                movies[inner] = movies[outer];
                movie_ratings[inner] = movie_ratings[outer];
                
                movies[outer] = temp_movies;
                movie_ratings[outer] = temp_rating;
                
                did_swap = 1;                
            }
        }
        if (did_swap == 0)
        {
            break;
        }
    }
    
    // prints movies seen in order of ratings
    printf("\n\n*** Your movie ratings for the 2012 Oscar contenders ***\n\n");
    
    for (i = 0; i < ctr; i++)
    {
        printf(" %s rated a %d.\n", movies[i], movie_ratings[i]);
    }
    
    return 0;
}

