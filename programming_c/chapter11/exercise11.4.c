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

int main(void)
{
    
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
    node_t *new = malloc(sizeof(node_t);

    if (new = NULL)
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
 *
 **/
void new_entry_append(node_t **head, int val)
{

}

