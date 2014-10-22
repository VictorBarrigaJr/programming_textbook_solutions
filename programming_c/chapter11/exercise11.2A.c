/*******************************************************************************
 * Exercise 11.2 - from Programming in C
 * File:    exercise11.2A.c
 *
 * Victor Barriga
 * victorbarriga@live.com
 *
 * Write a function called insert_entry to insert a new entry into a linked
 * list. Have the procedure take as arguments a pointer to the list entry to be
 * inserted (of type struct entry as defined in the chapter), and a pointer to
 * an element in the list after which the new entry is inserted.
 *
 ******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

/***
 * definel linked list node
 **/
typedef struct node
{
    int val;
    struct node *prev;
    struct node *next;
} node_t;

node_t *head = NULL;

void print_list(node_t *head);
void new_entry_append(node_t **head, int val);

int main(void)
{    
    // create list
    printf("Appending int's 0-%i onto the list...\n", SIZE - 1);
    for (int i = 0; i < SIZE; i++) 
    {
        new_entry_append(&head, i);
    }
    printf("done!\n");
    
    // print out list
    printf("Your list contains: \n");
    print_list(head);
    printf("\n");

    printf("Append new entry 25...\n");
    new_entry_append(&head, 25);
    printf("done!\n");
    
    // print out list
    printf("Your list contains: \n");
    print_list(head);
    printf("\n");

    return 0;
}

/***
 * prints linked list
 **/
void print_list(node_t *head)
{
    node_t *current = head;
    
    while (current != NULL) 
    {
        printf("%i\n", current->val);
        current = current->next;
    }
}

void new_entry_append(node_t **head, int val)
{    
    // create new list entry
    node_t *new = malloc(sizeof(node_t));
    if (new == NULL)
    {
        printf("Error -- out of memory\n");
        exit(1);
    }
    // initialize new entry
    new->val = val;
    new->next = NULL;

    // if list is empty
    if (*head == NULL)
    {
        // create start of list
        *head = new;
        new->prev = NULL;        
    }
    else
    {
        // find end of list
        //for (node_t *rover = head; rover->next != NULL; rover = rover->next);
        node_t *current = *head;
        while (current->next != NULL) 
        {
            current = current->next;
        }
        // append to the end of the list
        new->prev = current;//rover;
        current->next = new;//rover->next = new;
    }
}
