 /*******************************************************************************
 * Exercise 11.5 - from Programming in C
 * File:    exercise11.5.c
 *
 * Victor Barriga
 * victorbarriga@live.com
 *
 * A doubly linked list is a list in which each entry contains a pointer to the
 * preceeding entry in the list as well as a pointer to the next entry in the
 * list. Define the appropriate structure definition for a doubly linked list
 * entry and then write a small program that implements a small doubly linked
 * list and prints out the elements of the list.
 *
 ******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

/***
 * Doubly linked list typedef
 **/
typedef struct node
{
    // data
    int val;
    // pointer to previous node
    struct node *prev;
    // pointer to next node
    struct node *next;
} node;

// root/ head pointer to doubly linked list
node *head = NULL;

// function stubs
void print_list(node *head);
void new_entry_prepend(node **head, int val);
void new_entry_append(node **head, int val);
void remove_entry(node **head, int val);
void reverse_list(node **head);

int main(int argc, char *argv[])
{
    // create list - append
    printf("Appending int's 0-%i onto the doubly linked list...", SIZE - 1);
    for (int i = 0; i < SIZE; i++) 
    {
        new_entry_append(&head, i);
    }
    printf("done!\n");
    // print list
    printf("Your list contains: \n");
    print_list(head);
    printf("done!\n");
    
    // create list - prepend
    printf("Prepending int 20 onto the doubly linked list...");
    new_entry_prepend(&head, 20);
    printf("done!\n");
    // print list
    printf("Your list contains: \n");
    print_list(head);
    printf("done!\n");
    
    // remove enties
    printf("Removing int 20, 4 and 9 from list... ");
    remove_entry(&head, 20);
    remove_entry(&head, 4);
    remove_entry(&head, 9);
    printf("done!\n");
    // print list
    printf("Your list contains: \n");
    print_list(head);
    printf("done!\n");

    // reverse list
    printf("Reversing doubly linked list to print reversed...");
    reverse_list(&head);
    printf("done!\n");
    // print list
    printf("Your list contains: \n");
    print_list(head);
    printf("done!\n");
    
    return 0;
}

/***
 * Function prints doubly linked list starting at the root node. Function
 * accepts one argument: 1) a pointer type node to root pointer.
 **/
void print_list(node *head)
{
    node *current = head;

    while (current != NULL) 
    {
        printf("-> %i ", current->val);
        current = current->next;
    }
    printf("\n");
}

/***
 * Function prepends entry onto a doubly linked list. Function accepts two 
 * arguments: 1) a pointer type node to root pointer, 2) a int type indicating
 * the new data to be inserted into the new node.
 **/
void new_entry_prepend(node **head, int val)
{
    // create new node
    node *new = malloc(sizeof(node));

    if (new == NULL)
    {
        printf("Error -- out of memory\n");
        exit(1);
    }

    // initialize new node
    new->val = val;

    // insert into the start of the list
    if (*head != NULL)
    {
        (*head)->prev = new;
    }
    
    // swap head with new
    new->prev = NULL;
    new->next = *head;
    *head = new;
}

/***
 * Function appends entry onto a doubly linked list. Function accepts two 
 * arguments: 1) a pointer type node to root pointer, 2) a int type indicating
 * the new data to be inserted into the new node.
 **/
void new_entry_append(node **head, int val)
{
    // create new node
    node *new = malloc(sizeof(node));
    
    if (new == NULL)
    {
        printf("Error -- out of memory\n");
        exit(1);
    }

    // initialize new node
    new->val = val;
    new->next = NULL;

    // if list is empty attach to start
    if (*head == NULL)
    {
        // create start of list
        *head = new;
        new->prev = NULL;
    }
    // else find end of list, append to last node
    else
    {
        node *current = *head;
        
        while (current->next != NULL) 
        {
            current = current->next;
        }

        // append to the end of the list
        new->prev = current;
        current->next = new;
    }
}

/***
 * Function removes entry based on value from a doubly linked list. Will remove
 * all instances of int val data type. Function accepts two arguments: 1) a 
 *struct node pointer to head, 2) an int value to remove.
 **/
void remove_entry(node **head, int val)
{
    node *current = *head;
    node *next;

    // iterate over the entries in the list
    while (current != NULL) 
    {
        next = current->next;

         // if current->val matches val, val needs to be removed, unlink
        if (current->val == val)
        {
            // this is the first enty in the list
            if (current->prev == NULL)
            {
                *head = current->next;
            }
            // point to previous entry at its new location
            else
            {
                current->prev->next = current->next;
            }
            if (current->next != NULL)
            {
                current->next->prev = current->prev;
            }
            // free entry
            free(current);
        }
        // advance to the next list entry
        current = next;
    }
}

/***
 * Function reverses a doubly linked list. Function accepts one argument: 1)
 * a pointer node to head.
 **/

void reverse_list(node **head)
{
    node *temp = NULL;
    node *current = *head;

    // swap next and prev for all nodes of doubly linked list
    while (current != NULL) 
    {
        temp = current->prev;
        current->prev = current->next;
        current->next = temp;
        current = current->prev;
    }

    // before changing head, check if list is empty list or only one node list
    if(temp != NULL)
    {
        *head = temp->prev;
    }
}
