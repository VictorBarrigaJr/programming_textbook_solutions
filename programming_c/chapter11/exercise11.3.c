/*******************************************************************************
 * Exercise 11.3 - from Programming in C
 * File:    exercise11.3.c
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

typedef struct node
{
    // the valude to store in this node
    int data;
    // the link to the next node in the list
    struct node *next;
} node;

//node *head = NULL;

void insert_entry(node *head, struct node *new);

int main(void)
{
    // linked list
    node n2, n4, n6;
    
    node head;
    
    head->data = &n2;
    //head.next = &n2;

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
    node n5;
    // initialize new node
    n5.data = 500;
    n.next = NULL;

    // insert new node
    insert_entry(&head, &n5);

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

void insert_entry(node *head, struct node *new)
{
    new->next = head;
    head = new;
}
