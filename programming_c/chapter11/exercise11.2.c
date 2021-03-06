/*******************************************************************************
 * Exercise 11.2 - from Programming in C
 * File:    exercise11.2.c
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

// structure for linked list - singly-linked
typedef struct node
{
    // the value to store this node
    int data;
    // the link to the next node in the list
    struct node *next;
}node;

node *head = NULL;

void insert_entry(node *list, struct node *entry);

int main(void)
{
    // linked list
    node n2, n4, n6;
    node *head = &n2;

    n2.data = 200;
    n2.next = &n4;

    n4.data = 400;
    n4.next = &n6;

    n6.data = 600;
    n6.next = NULL;

    // print linked list
    printf("Printing linked list prior to new node insertion: \n");
    while ( head != NULL )
    {
        printf ("%i\n", head->data);
        head = head->next;
    }
    printf("done!\n");

    head = &n2;
    // create  a new node
    node *n5 = malloc(sizeof(node));
    // initialize new node
    n5->data = 500;
    n5->next = NULL;

    // insert new node
    insert_entry(head, n5);

    // print new linked list
    printf("Printing linked list after new node insertion: \n");
    while ( head != NULL )
    {
        printf ("%i\n", head->data);
        head = head->next;
    }
    printf("done!\n");

    head = &n2;
    // create  a new node
    node *n1 = malloc(sizeof(node));
    // initialize new node
    n1->data = 100;
    n1->next = NULL;

    // insert new node
    insert_entry(head, n1);

    // print new linked list
    printf("Printing linked list after new node insertion: \n");
    while ( head != NULL )
    {
        printf ("%i\n", head->data);
        head = head->next;
    }
    printf("done!\n");
    
    return 0;
}

/***
 * Function to append new previously constructed node to the end of a singly
 * linked list by traversing the list with two pointers. If the list is empty, 
 * it becomes the root/ head, else it inserts at end. Function accepts two 
 * arguments: 1) node *head, which is the root/ head of the singly linked list. 
 * 2) struct node *new, which is the previously constructed node. 
 **/
void insert_entry(node *head, struct node *new)
{
    // traverse list with two pointers
    node *prev = NULL;
    node *cur;
    for (cur = head; cur != NULL; cur = cur->next) 
    {
        prev = cur;
    }

    // if the list is empty, prepend
    if (prev == NULL)
    {
        head = new;
    }
    // else add new node to end of the list
    else
    {
        prev->next = new;
    }
}
