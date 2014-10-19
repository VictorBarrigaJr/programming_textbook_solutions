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
#include <time.h>

#define SIZE 10

// structure for linked list - singly-linked
typedef struct node
{
    // the value to store this node
    int data;
    // the link to the next node in the list
    struct node *next;
}node;

void insert_entry(struct node *entry);

int main(void)
{
    // linked list
    node n2, n4, n6;
    node *list_pointer = &n2;

    n2.data = 200;
    n2.next = &n4;

    n4.data = 400;
    n4.next = &n6;

    n6.data = 600;
    n6.next = NULL;

    // print linked list
    printf("Printing linked list prior to new node insertion: \n");
    while ( list_pointer != NULL )
    {
        printf ("%i\n", list_pointer->data);
        list_pointer = list_pointer->next;
    }
    printf("done!\n");

    // create  a new node
    node n5 = malloc(sizeof(node));
    n5->data = 500;
    n5->next = NULL;

    return 0;
}

void insert_entry(struct node *entry)
{
    
}
