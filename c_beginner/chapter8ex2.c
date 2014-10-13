/**
 * Example program #2 from Chapter 8 of Absolute beginner's guide to C, 3rd edition.
 * 
 * File chapter8ex2.c
 *
 * This is a sample program that asks users for some basic data and prints it on
 * screen in order to show what was entered
 */

#include <stdio.h>

int main()
{
    char topping[24];
    int slices;
    int month, day, year;
    float cost;

    // the first scanf will look for a floatin-point variable, the cost of pizza
    // if the user doesn't enter a $ before the cost, it could cause problems

    printf("How much does a pizza cost in your area?");
    printf("(enter as $XX.XX)\n");
    scanf(" $%f", &cost);
    
    // the pizza topping is a string, so your scanf doesn't need an &
    printf("What is your favorite one-word pizza topping?\n");
    scanf(" %s", topping);
      
    printf("How many slices of %s pizza", topping);    
    printf(" can you eat in one sitting?\n");
    scanf(" %d", &slices);

    printf("What is today's date (enter it in XX/XX/XX format).\n");
    scanf(" %d/%d/%d", &month, &day, &year);
    
    printf("\n\nWhy not treat yourself to dinner on %d/%d/%d", month, day, year);
    printf("\nand have %d slices of %s pizza!\n", slices, topping);
    printf("It will only cost you $%.2f!\n\n\n", cost);
    
    return 0;
}
