/**
 * Example program #2 from Chapter 22 of Absolute Begnner's Guide to C, 3rd Edition
 * File:    chapter22ex2.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * This program fills three arrays with a player's total points, rebounds, and assits. 
 * It loops through the scoring array and finds the game with the most points. Once it
 * knows that info., it prints the totals from all three categories. 
 *
 */
 
 #include <stdio.h>
 
 int main()
 {
    int game_scores[10] = {12, 5, 21, 15, 32, 10, 6, 31, 11, 10};
    int game_rebounds[10] = {5, 7, 1, 5, 10, 3, 0, 7, 6, 4};
    int game_assists[10] = {2, 9, 4, 3, 6, 1, 11, 6, 9, 10};
    int best_game = 0; // the comparison variable for the best scoring game.
    int game_mark = 0; // this will mark which game is the best scoring game.
    
    int i;
    
    for (i = 0; i < 10; i++)
    {
        // if loop will compare each game to the current best total if current score is
        // higher, it becomes the new best and the counter variable becomes te new flag.
        if (game_scores[i] > best_game)
        {
            best_game = game_scores[i];
            game_mark = i;
        }  
    }
    
    // print out the details of the best scoring game because arrays start at 0 +1 to game num.
    printf("\n\nThe player's best scoring game totals: \n");
    printf("The best game was game #%d\n", game_mark + 1);
    printf("Scored %d points\n", game_scores[game_mark]);
    printf("Grabbed %d rebounds\n", game_rebounds[game_mark]);
    printf("Dished %d assists\n", game_assists[game_mark]);
    
    return 0;
 
 }
