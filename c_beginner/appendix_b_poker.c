/**
 * Example program #B from Apendix of Absolute Begnner's Guide to C, 3rd Edition
 * File:    appendix_b_pchapter32ex1.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * This program plays draw poker. Users can play as often as they want, betting between 1 and 5.
 * They are dealt 5 cards to keep, and which cards to replace. The new hand is then reviewed and 
 * the user's payout is set based on the value of the hand. The user's new bankroll is displayed
 * as they are given the option to continue.
 *
 */

#include <stdio.h>
#include <time.h>
#include <ctype.h>
#include <stdlib.h>

// two constants defined for determining whether hads are flushes or straights
#define FALSE 0
#define TRUE 1

// function plototyping

void print_greeting();
int get_bet();
char get_suit(int suit);
char get_rank(int rank);
void get_first_hand(int card_rank[], int card_suit[]); 
void get_final_hand(int card_rank[], int card_suit[], int final_rank[], 
                    int final_suit[], int ranks_in_hand[], int suits_in_hand[]);
int analyze_hand(int ranks_in_hand[], int suits_in_hand[]);

int main()
{
    int bet, i, winnings;
    int bank = 100;
    int card_rank[5]; // will be one of 13 values (ace-king)
    int card_suit[5]; // will be one of 4 values (for clubs, diamonds, hearts, spades)
    int final_rank[5];
    int final_suit[5];
    int ranks_in_hand[13]; // used for evaluating final hand
    int suits_in_hand[4]; // used for evaluating the final hand
    time_t t;
    char suit, rank, still_play;
    
    /* this function is called utside the do... while loop because the greeting only needs
    to be displayed once, while everything else in main will run multiple times, depending
    on how many times the user wants to play.*/
    print_greeting();
    
    // loop runs each time the user plays a hand of draw poker
    do 
    {
        bet = get_bet();
        srand(time(&t));
        get_first_hand(card_rank, card_suit);
        printf("Your five cards: \n");
        
        for (i = 0; i < 5; i++)
        {
            suit = get_suit(card_suit[i]);
            rank = get_rank(card_rank[i]);
            printf("Card #%d: %c%c\n", i + 1, rank, suit);
        }    
        
        /* these two arrays are used to figure out the value of the player's hand. However, 
        they must be zeroed out in case the user plays multiple hands */
        for (i = 0; i < 4; i++)
        {
            suits_in_hand[i] = 0;
        }
    
        for (i = 0; i < 13; i++)
        {
            ranks_in_hand[i] = 0;
        }
    
        // the players final hand.
        get_final_hand(card_rank, card_suit, final_rank, final_suit, ranks_in_hand, suits_in_hand);
    
        printf("Your five final cards: \n");
        for (i = 0; i < 5; i++)
        {
            suit = get_suit(final_suit[i]);
            rank = get_rank(final_rank[i]);
            printf("Card %d: %c%c\n", i + 1, rank, suit);
        }
    
            winnings = analyze_hand(ranks_in_hand, suits_in_hand);
            printf("You won %d!\n", bet * winnings);
            bank = bank - bet + (bet * winnings);
            printf("\nYour bank is now %d.\n", bank);
            printf("\nDo you want to play again? ");
            printf("\nPlease answer (Y/N): ");
            scanf(" %c", &still_play);
    }
    while (toupper(still_play) == 'Y');
    
    return 0;
}
/***********************************************************************************************/
// print a quick greeting as well as tell the user the value of different hands.
void print_greeting()
{
    printf("********************************************************************************\n");
    printf("\n\n\tWelcome to the Absolute Beginner's Casino\n\n");
    printf("\tHome of Video Draw Poker\n\n");
    printf("********************************************************************************\n");
    
    printf("Here are the rules:\n");
    printf("You start with 100 credits, and you make a bet from 1 to 5 credits. \n");
    printf("You are dealt 5cards, and yo then choose whick cards to keep or discard.\n");
    printf("You want to make the best possible hand.\n");
    printf("\nHere is the table for winnings (assuming a bet of 1 credit):");
    printf("\nPair\t\t\t\t1 credit ");
    printf("\nTwo pairs\t\t\t2 credits");
    printf("\nThree of a kind\t\t\t3 credits");
    printf("\nStraight\t\t\t4 credits");
    printf("\nFlush\t\t\t\t5 credits");
    printf("\nFull House\t\t\t8 credits");
    printf("\nFour of a Kind\t\t\t10 credits");
    printf("\nStraight Flush\t\t\t20 credits");
    printf("\n\nHave fun!!\n\n");
    
}

// function to deal the first five catds
void get_first_hand(int card_rank[], int card_suit[])
{
    int i, j;
    int card_dup;
    
    for (i = 0; i < 5; i++)
    {
        card_dup = 0;
        do
        {
            card_rank[i] = (rand() % 13); // card rank is one of 13 (2-10, J, Q, K, A)
            card_suit[i] = (rand() % 4); // card suit is one of 4 (club, diamond, heart, spade)
            
            for (j = 0; j < i; j++) // loop that ensures each card is unique
            {
                if ((card_rank[i] == card_rank[j]) && (card_suit[i] == card_suit[j]))
                {
                    card_dup = 1;
                }
            }
        } 
        while (card_dup == 1);
    }
}

// function that changes the suit integer value to a character representing the suit
char get_suit(int suit)
{
    switch(suit)
    {
        case 0:
            return('c');
        case 1:
            return('d');
        case 3:
            return('h');
        case 4:
            return('s');
    }
}

// function that changes the rank integer value to a character representing the rank 
char get_rank(int rank)
{
    switch (rank)
    {
        case 0:
            return('A');
        case 1:
            return('2');
        case 2:
            return('3');
        case 3:
            return('4');
        case 4:
            return('5');
        case 5:
            return('6');
        case 6:
            return('7');
        case 7:
            return('8');
        case 8:
            return('9');
        case 9:
            return('T');
        case 10:
            return('J');
        case 11:
            return('Q');
        case 12:
            return('K');
    }
}

// function to get user's bet between 1 and 5
int get_bet()
{
    int bet;
    
    do // will keep running until the user enters 0-5
    {
        printf("How much do you want to bet? (enter a number 1 to 5, or 0 to quit the game): ");
        scanf(" %d", &bet);
        
        if (bet >= 1 && bet <= 5)
        {
            return(bet);
        }
        else if (bet == 0)
        {
            exit(1);
        }
        else
        {
            printf("\n\nPlease enter a bet from 1 to 5, or 0 to quit the game.\n ");
        }
    }
    while ((bet < 0) || (bet > 5));
}

// function reviews the final hand and determines the value of the hand 
int analyze_hand(int ranks_in_hand[], int suits_in_hand[])
{
    int num_consec = 0;
    int rank, suit;
    int straight = FALSE;
    int flush = FALSE;
    int four = FALSE;
    int three = FALSE;
    int pairs = 0;
    
    for (suit = 0; suit < 4; suit++)
    {
        if (suits_in_hand[suit] == 5)
            flush = TRUE;
    }
    
    rank = 0;
    while (ranks_in_hand[rank] == 0)
    {
        rank++;
    }
    
    for (; rank < 13 && ranks_in_hand[rank]; rank++)
    {
        num_consec++;
    }
    
    if (num_consec == 5)
    {
        straight = TRUE;
    }
    
    for (rank = 0; rank < 13; rank++)
    {
        if (ranks_in_hand[rank] == 4)
        {
            four = TRUE;
        }
        if (ranks_in_hand[rank] == 3)
        {
            three = TRUE;
        }
        if (ranks_in_hand[rank] == 2)
        {
            pairs++;
        }    
    }
    
    if (straight && flush)
    {
        printf("Straight flush\n\n");
        return(20);
    }
    else if (four)
    {
        printf("Four of a kind\n\n");
        return(10);
    }
    else if (three && pairs == 1)
    {
        printf("Full house\n\n");
        return(8);
    }
    else if (flush)
    {
        printf("Flush\n\n");
        return(5);
    }
    else if (straight)
    {
        printf("Straight\n\n");
        return(4);
    }
    else if (three)
    {
        printf("Three of a kind\n\n");
        return(3);
    }
    else if (pairs == 2)
    {
        printf("Two pairs\n\n");
        return(2);
    }
    else if (pairs == 1)
    {
        printf("Pair\n\n");
        return(1);
    }
    else
    {
        printf("High Card\n\n");
        return(0);
    }
}

// function looks through each of the five cards in the first hand and askes the user if 
// they want to keep the card. if they say no, they get a replacement card.
void get_final_hand(int card_rank[], int card_suit[], int final_rank[], 
                    int final_suit[], int ranks_in_hand[], int suits_in_hand[])
{
    int i, j, card_dup;
    char suit, rank, ans;
    
    for (i = 0; i < 5; i++)
    {
        suit = get_suit(card_suit[i]);
        rank = get_rank(card_rank[i]);
        printf("Do you want to keep card #%d: %c%c?", i + 1, rank, suit);
        printf("\nPlease answer (Y/N): ");
        scanf(" %c", &ans);
        
        if (toupper(ans) == 'Y')
        {
            final_rank[i] = card_rank[i];
            final_suit[i] = card_suit[i];
            ranks_in_hand[final_rank[i]]++;
            suits_in_hand[final_suit[i]]++;
            continue;
        }
        else if (toupper(ans) =='N')
        {
            card_dup = 0;
            do
            {
                card_dup = 0;
                final_rank[i] = (rand() % 13);
                final_suit[i] = (rand() % 4);
                
                // first check your new card agains the 5 original cards to avoid duplication
                for (j = 0; j < 5; j++)
                {
                    if ((final_rank[i] == card_rank[j]) && (final_suit[i] == card_suit[j]))
                    {
                        card_dup = 1;
                    }
                }
                
                // check the new card against any newly drawn cards to avoid duplication
                for (j = 0; j < i; j++)
                {
                    if ((final_rank[i] == final_rank[j]) && (final_suit[i] == final_suit[j]))
                    {
                        card_dup = 1;
                    }
                }
            }
            while (card_dup == 1);
            ranks_in_hand[final_rank[i]]++;
            suits_in_hand[final_suit[i]]++;
        }
    }
}
