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
 * Function to display list to console. Function accepts one argument: 1) a
 * pointer type root pointer.
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
    // create new node
    // insert into start of the list
    // swap head with new
}

/***
 * Function to insert new node at end.
 **/
void new_entry_append(node **head, int val)
{
    // create new node
    // initialize new node
    // if list is empty attach to start
    // else find end of list, append to last node
    // append to the end of the list
}

/***
 * Function to insert new node in the middle.
 **/
void new_entry_middle(node **head, int val, int after)
{
    // initialize temp node malloc
    // if head = null, assign val, and next = null
    // else while temp->data != afteter temp = tem -> next
    // swap variables
}

/***
 * Function to remove all instances of a data value.
 **/
void remove_entry_data(node **head, int val)
{
    // iterate over the entries in the list
    // if current->val matches val, val needs to be removed, unlink
    // this is the first entry in the list
    // point to previous entry at its new location
    // free entry
    // advance to the next list entry
}

/***
 * Function to remove entry using pointer to node.
 **/
void remove_entry_node(node **head, int val)
{
    // if list is empty, or entry is NULL, always fail
    // if entry is the first in the list
    // unlink the first entry and update the starting pointer
    // update the second entry prev pointer, if there is a second entry
    // else this is not the fiest, prev entry exist, update next pointer to new
    // if entry follows, update prev pointer to the new value
    // fee the list entry
}

/***
 * Function to reverse the order of a linked list
 **/
void reverse_list(node **head)
{
    // swap next and prev for all nodes of doubly linked list
    // before changing head, check if list is empty list or only one node list
}
