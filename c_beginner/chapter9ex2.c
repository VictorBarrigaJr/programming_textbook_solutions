/**
 * Example program #1 from Chapter 9 of Absolute Begnner's Guide to C, 3rd Edition
 * File:    chapter9ex2.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * This program asks the user for a number of tires and price per tire.
 * It then calculates a total price, adding sales tax.
 */
 
// if you find you use a sales tax rate that may change, use #define to set it in one place.
#include <stdio.h>
#define SALESTAX .07

int main()
{
    // variables for the number of tires purchased, price, a before-tax total, and total cost with tax
    int num_tires;
    float tire_price, before_tax, net_sales;
    
    // get the number of tires purchased and pice per tire.
    printf("How many tires did you purchase? ");
    scanf(" %d", &num_tires);
    
    printf("What was the cost per tire (enter in $XX.XX format)? ");
    scanf(" $%f", &tire_price);
    
    // compute the price
    before_tax = tire_price * num_tires;
    net_sales = before_tax + (before_tax * SALESTAX);
    
    printf("You spent $%.2f on your tires\n\n\n", net_sales);
    
    return 0;    
}
