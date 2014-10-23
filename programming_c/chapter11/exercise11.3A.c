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
void insert_entry_prepend(node_t **head, int val);


int main(int argc, char *argv[])
{
    // create list
    // print out list
    return 0;
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
 *
 **/
void insert_entry_prepend(node_t **head, int val)
{

}
