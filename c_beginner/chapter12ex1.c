/**
 * Example program #3 from Chapter 12 of Absolute Begnner's Guide to C, 3rd Edition
 * File:    chapter12ex1.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * This program defines a  series of variables and expressions and then uses both
 * rational and logical operators to test them against each other.
 *
 */
 
 #include <stdio.h>
 
 int main()
 {
 
    // set up some common integers for the program
    //int planets = 8;
    int friends = 6;
    int potter_books = 7;
    int star_wars = 6;
    int months = 12;
    int beatles = 4;
    int avengers = 6;
    int baseball = 9;
    int basketball = 5;
    int football = 11;
    
    // this first logical statment uses AND operator to test whether the cast of Friends
    // and the Beatles would have enough people to make a baseball team AND the cast of
    // friends and the Avengers would have enought people to field a football team. if so,
    // the statements will print.
    
    if ((friends + beatles >= baseball) && (friends + avengers >= football))
    {
        printf("The cast of Friends and the Beatles could make a baseball team,\n");
        printf("AND the cast of Friends plus the Avengers could make a football team.\n");
    }
    else
    {
        printf("Either the Friends cannot make a baseball team with the Fab Four, \n");
        printf("OR they can't make a Gridiron Gang with the Avengers (or both!)\n");
    }
    // this second logical statement uses the OR operator to test whether the number of 
    // Star Wars movies is less than months in the year OR the number of Harry Potter books
    // is less than months in the year.  if either statement is true, the statments will print.
    
    if ((star_wars <= months) || (potter_books <= months))
    {
        printf("\nYou could read one Harry Potter book a month, and finish them all in less than a year, \n");
        printf("OR you could see one Star Wars movie a month, and finish them all in less than a year.\n");
    }
    else
    {
        printf("Neither can happe--too many books or movies,\n");
        printf("Not enough time!\n\n");
    }
    // this final logical statement uses the NOT operator to test whether the number of 
    // baseball players on a team added to the number basketball players on a team is NOT
    // greater than the number of football players on a team.  if so, the statements will print.
    
    if (!(baseball + basketball > football))
    {
        printf("\nThere are fewer baseball and basketball players combined than football players.\n");
    }
    else
    {
        printf("\nThere are more baseball and basketball players combined than football players.");
    }
    return 0;
 
 }
 
