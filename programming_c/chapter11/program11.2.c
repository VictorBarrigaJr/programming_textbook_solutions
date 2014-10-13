/*******************************************************************************
 * Program 11.2 - More Pointer Basics - from Programming in C
 * File:    program11.2.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * Further examples of pointers
 *
 *******************************************************************************/

#include<stdio.h>

int main(void)
{
    char c = 'Q';
    char *char_pointer = &c;

    printf("%c %c\n", c, *char_pointer);

    c = '/';
    printf("%c %c\n", c, *char_pointer);

    *char_pointer = '(';
    printf("%c %c\n", c, *char_pointer);

    return 0;
}
