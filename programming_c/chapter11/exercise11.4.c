/*******************************************************************************
 * Exercise 11.4 - from Programming in C
 * File:    exercise11.4.c
 *
 * Victor Barriga
 * victorbarriga@live.com
 *
 * Write a function called remove_entry to remove an entry from a linked list.
 * The sole argument to the procedure should be a pointer to the list. Have the
 * function remove the entry after the one pointed to by the argument. (why 
 * can't you remove the entry pointed to by the arbument?). You need to use the
 * special structure you set up in exercise 3 to handle the special case of
 * removing the first element from the list.
 *
 ******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

/***
 * Linked list typedef
 **/
typedef struct node

{
    int val;
    struct node *prev;
    struct node *next;
} node_t;

node_t *head = NULL;

void print_list(node_t *node);
void new_entry_prepend(node_t **head, int val);
void new_entry_append(node_t **head, int val);
void remove_entry(node_t **head, int val);

int main(void)
{
    // create list
    printf("Appending int's 0-%i onto the list... ", SIZE - 1);
    for (int i = 0; i < SIZE; i++) 
    {
        new_entry_append(&head, i);
    }
    printf("done!\n");

    // print out list
    printf("Your list contains: \n");
    print_list(head);
    printf("done!\n");

    // remove entry
    printf("Removing int 0, 3, 7 and 9 from linked list... ");
    remove_entry(&head, 0);
    remove_entry(&head, 3);
    remove_entry(&head, 7);
    remove_entry(&head, 9);
    printf("done!\n");

    // print out list
    printf("Your list contains: \n");
    print_list(head);
    printf("done!\n");

    return 0;
}

/***
 * Function prints a linked list, starting at root node. Function accepts one
 * argument: 1) struct node_t *node, pointer to the root node.
 **/
void print_list(node_t *node)
{
    node_t *current = head;
    
    while (current != NULL)
    {
        printf("%i\n", current->val);
        current = current->next;
    }
}

/***
 * Function prepends node to the begginging of a linked list. Function accepts
 * two arguments: 1) struct node_t **head, which is a pointer to the root node
 * 2) int val, which is the new data int for the new node to hold.
 **/
void new_entry_prepend(node_t **head, int val)
{
    // create new node
    node_t *new = malloc(sizeof(node_t));

    if (new == NULL)
    {
        printf("Error -- out of memory\n");
        exit(1);
    }

    // initialize new node
    new->val = val;
    // insert into the start of list
    if (*head != NULL)
    {
        (*head)->prev = new;
    }    
}

/***
 * Function appends new node to linked list. Function accepts two arguments: 1)
 * node_t **head, which is a pointer to the root node, beginning of list. 2) int
 * val, which is an int value to append to the current list.
 **/
void new_entry_append(node_t **head, int val)
{
    // create new node
    node_t *new = malloc(sizeof(node_t));
    if (new == NULL)
    {
        printf("Error -- out of memory\n");
        exit(1);
    }

    // iniitalize new node
    new->val = val;
    new->next = NULL;

    // if list is empty attach to start
    if (*head == NULL)
    {
        // create start of list
        *head = new;
        new->prev = NULL;
    }
    // find end of list, append to last node
    else
    {
        node_t *current = *head;
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
 * Function removes an entry from a linked list. Function accepts two arguments:
 * 1) a pointer to the root/ head of a linked list 2) an int value to be removed
 * from the linked list.
 **/
void remove_entry(node_t **head, int val)
{
    unsigned int entries_removed;
    node_t *current = *head;
    node_t *next;
    
    entries_removed = 0;
    
    // iterate over the entries in the list
    while (current != NULL) 
    {
        next = current->next;
        
        if (current->val == val)
        {
            // if current->val matches val, val needs to be removed, unlink
            if (current->prev == NULL)
            {
                // this is the first entry in the list
                *head = current->next;
            }
            else
            {
                // point to previous entry at its new location
                current->prev->next = current->next;
            }
        
            if (current->next != NULL)
            {
                current->next->prev = current->prev;
            }
            // free entry
            free(current);
            ++entries_removed;
        }
        // advance to the next list entry
        current = next;
    }    
}

