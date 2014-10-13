/**
 * Example program #1 from Chapter 22 of Absolute Begnner's Guide to C, 3rd Edition
 * File:    chapter22ex1.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * This program takes an ID number from the user and then checks the ID against a list of
 * customers in the database. If the customer exists, it uses that array element to check
 * their current balance, and warns the user if the balance is more than 100. 
 *
 */

#include <stdio.h>

int main()
{
    int counter; // loop counter
    int id_search; // customer look for key (the key)
    int found = 0; // will be 1 (true) if customer is found
    
    // defines 10 elements in the two parallel arrays
    
    int customer_id[10] = {313, 253, 502, 101, 892, 475, 792, 912, 347, 633};
    float customer_balance[10]= {0.00, 45.53, 71.23, 301.56, 9.08, 192.41, 389.00, 229.67,
                                18.31, 59.54};
    
    // interact with the user for a blance
    printf("\n\n*** Customer Balance Lookup ***\n");
    printf("What customer number do you need to check? ");
    scanf(" %d", &id_search);
    
    // veify cusomer id exists
    for (counter = 0; counter < 10; counter++)
    {
        if (id_search == customer_id[counter])
        {
            found = 1;
            break;
        }
    }
    
    if (found)
    {
        if (customer_balance[counter] > 100.00)
        {
            printf("\n** That customer's balance is $%.2f.\n", customer_balance[counter]);
            printf(" No additional credit.\n");            
        }
        else
        {
            printf("\n** The customer's credit is good.\n");
        }
    }
    else
    {
        printf("** You must have typed an incorect customer ID.");
        printf("\n    ID %3d was not found in list.\n", id_search);
    }
    
    return 0;
}

