 /*******************************************************************************
 * Exercise 11.5 - from Programming in C
 * File:    exercise11.5.c
 *
 * Victor Barriga
 * victorbarriga@live.com
 *
 * Develop  insert_entry and remove_entry functions for a doubly linked list 
 * that are similar in function to those developed in previous exercises for a
 * singly linked list. Why can your remove_entry function now take as its 
 * argument a direct pointer to the entry to be removed from the list.
 *
 * exercise11.5 included the above, modified ll.5 to be accessble in reverse 
 * order without needing to reverse the linked list. 
 ******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

/***
 * typedef for doubly linked list.
 **/
typedef struct node
{
    // pointer to previous node
    struct node *prev;
    // data
    int data;
    // pointer to next node
    struct node *next;
} node;

// pointer to head
node *head = NULL;
// pointer to end of list
node *last = NULL;

/***
 * helper function stubs
 **/
void print_list(node *head);
void new_entry_prepend(node **head, int val);
void new_entry_append(node **head, int val);
void new_entry_middle(node **head, int val, int after);
void remove_entry_data(node **head, int val);
void remove_entry_node(node **head, int val);
void reverse_list(node **head);

int main(int argc, char *argv[])
{
    
    return 0;
}

/***
 * Function to display list to console.
 **/
void print_list(node *head)
{
    node *current = head;
    
    while (current != NULL) 
    {
        printf("-> %i", current->val);
        current = current->next;
    }
}

/***
 * Function to insert new node at beginning
 **/
void new_entry_prepend(node **head, int val)
{

}

/***
 * Function to insert new node at end.
 **/
void new_entry_append(node **head, int val)
{

}

/***
 * Function to insert new node in the middle.
 **/
void new_entry_middle(node **head, int val, int after)
{

}

/***
 * Function to remove all instances of a data value.
 **/
void remove_entry_data(node **head, int val)
{

}

/***
 * Function to remove entry using pointer to node.
 **/
void remove_entry_node(node **head, int val)
{

}

/***
 * Function to reverse the order of a linked list
 **/
void reverse_list(node **head)
{

}
