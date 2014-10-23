/*******************************************************************************
 * Exercise 11.3 - from Programming in C
 * File:    exercise11.3A.c
 *
 * Victor Barriga
 * victorbarriga@live.com
 *
 * The function developed in exercise 2 only inserts an element after an
 * existing element in the list, thereby preventing you from inserting a new
 * enty at the front of the list. How can you use this same function and yet
 * overcome this problem? (Hint: Think about setting up a special structure to 
 * point to the beginning of the list)
 *
 ******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

// define linked list
typedef struct node
{
    int val;
    struct node *prev;
    struct node *next;
} node_t;

node_t *head = NULL;

void print_list(node_t *node);
void new_entry_append(node_t **head, int val);
void new_entry_prepend(node_t **head, int val);

int main(int argc, char *argv[])
{
    // create list
    printf("Apending int's 0-%i onto the list... ", SIZE - 1);
    for (int i = 0; i < SIZE; i++) 
    {
        new_entry_append(&head, i);
    }
    printf("done!\n");

    // print out list
    printf("Your list contains: \n");
    print_list(head);
    printf("\n");

    // prepend into list
    printf("Prepend new entry 25...\n");
    new_entry_prepend(&head, 25);
    printf("done!\n");

    // print out list
    printf("Your list contains: \n");
    print_list(head);
    printf("\n");
    
    return 0;
}

/***
 * function appends new node to linked list. fuction accepts two arguments
 * 1) node_t **head which is pointer to the beggining of a linked list. 2)
 * 2) int val, which is an int value to append to the currentl list.
 **/
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

/***
 * function prints a linked list, starting at root node. function accepts one
 * argument: 1) node_t *node, the root node.
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
 * function prepends node to the beginning of a linked list. function accepts
 * two arguments: 1) node_t **head, which is a pointer to the root node, 2)
 * int val, which is the new data int for the new node to hold.
 **/
void new_entry_prepend(node_t **head, int val)
{
    // create new list entry
    node_t *new = malloc(sizeof(node_t));
    if (new == NULL)
    {
        printf("Error -- out of memory\n");
        exit(1);
    }
    
    new->val = val;

    // insert into the start of list
    if (*head != NULL)
    {
        (*head)->prev = new;
    }
    new->prev = NULL;
    new->next = *head;
    *head = new;    
}
