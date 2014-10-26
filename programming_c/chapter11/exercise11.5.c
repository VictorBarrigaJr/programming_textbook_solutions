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

#define SIZE 10;

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

int main(int argc, char *argv[])
{
    
    return 0;
}

/***
 * Function prints doubly linked list.
 **/
void print_list(node *head)
{

}

/***
 * Function prepends entry onto a doubly linked list
 **/
void new_entry_prepend(node **head, int val)
{

}

/***
 * Function appends entry onto a doubly linked list
 **/
void new_entry_append(node **head, int val)
{

}

/***
 * Function removes entry based on value from a doubly linked list
 **/
void remove_entry(node **head, int val)
{

}

