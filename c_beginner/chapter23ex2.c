/**
 * Example program #2 from Chapter 22 of Absolute Begnner's Guide to C, 3rd Edition
 * File:    chapter23ex2.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * This program searches a sorted list of customer ID's in order to get credit totals. 
 *
 */

#include <stdio.h>

int main()
{
    int ctr, id_search; // loop counter & look for (the key)
    int found = 0; // 1 (true) if customer is found
    
    // dedine the 10 elements in each of the parallel arrays
    int customer_id[10] = {313, 453, 502, 101, 892, 475, 792, 912, 343, 633};
    float customer_balance[10] = {0.00, 45.43, 71.23, 301.56, 9.08, 192.41, 389.00, 229.67, 18.31, 59.54};
    
    int temp_id, inner, outer, did_swap; // for sorting
    float temp_balance;
    
    for (outer = 0; outer < 9; outer++) // sort arrays by customer id 
    {
        did_swap = 0; // if list not yet ordered it becomes 1 (true)
        for (inner = outer; inner < 10; inner++)
        {
            if (customer_id[inner] < customer_id[outer])
            {
                temp_id = customer_id[inner]; // must switch both arrays or they are no longer linked
                temp_balance = customer_balance[inner];
                
                customer_id[inner] = customer_id[outer];
                customer_balance[inner] = customer_balance[outer];
                
                customer_id[outer] = temp_id;
                customer_balance[outer] = temp_balance;
                
                did_swap = 1; // true because a swap took place
            }
        }
        if (did_swap == 0)
        {
            break;
        }
    }
    
    // interact with the user lookin to find a blance
    printf("\n\n*** Customer Balance Lookup ***\n\n");
    printf("What is the customer number? \n");
    scanf(" %d", &id_search);
    
    for (ctr = 0; ctr < 10; ctr++) // look for the id in arrays
    {
        if (id_search == customer_id[ctr]) // do they match
        {
            found = 1; // match flag is set to true
            break; // no need to keep looping
        }
        if (customer_id[ctr] > id_search) // no need to keep searching
        {
            break;
        }
    }
    
    // once the loop has completed, the id was wither fond (found = 1) or not
    if (found)
    {
        if (customer_balance[ctr] > 100)
        {
            printf("\n*** That customer's balance is $%.2f. ***\n\n", customer_balance[ctr]);
            printf("*** NO ADDITIONAL CREDIT AVAILABLE ***\n\n");            
        }
        else // balance less than 100
        {
            printf("\n\n Customer's credit is available.\n\n");
        }
    }
    else // id not found
    {
        printf("*** You have entered an incorrect customer ID.");
        printf("\n ID %3d was not found in the list. ***\n", id_search);
    }
    
    return 0;
}
