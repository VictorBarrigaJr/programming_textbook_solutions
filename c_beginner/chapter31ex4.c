/**
 * Example program #4 from Chapter 31 of Absolute Begnner's Guide to C, 3rd Edition
 * File:    chapter31ex4.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * The program demonstrates padding multiple variables to a function.
 *
 */
 
#include <stdio.h>

int change_some(int i, float *new_x, int i_ary[5]);
 
int main()
{
   int i = 10;
   int ctr;
   float x = 20.5;
   int i_ary[] = {10, 20, 30, 40, 50};
   
   puts("Here are main()'s variables before the function:");
   printf("i is %d\n", i);
   printf("x is %.1f\n", x);
   
   for (ctr = 0; ctr < 5; ctr++)
   {
       printf("i_ary[%d] is %d\n", ctr, i_ary[ctr]);
   }
   
   // now chall the change_some function, passing the value of i and the address of x
   change_some(i, &x, i_ary);
   
   puts("\n\nHere are main()'s variables after the function:");
   printf("i is %d\n", i);
   printf("x is %.1f\n", x);
   
   for (ctr = 0; ctr < 5; ctr++)
   {
       printf("i_ary[%d] is %d\n", ctr, i_ary[ctr]);
   }
      
   return(0);
}
 
/**********************************************************************************************/
 
int change_some(int i, float *new_x, int i_ary[5])
{
    /* all variables are changd, but tontly the float and array remain changed when the program
    returns to main. */
    // changed when the program returns to main()
    int j;
    
    i = 47;
    *new_x = 97.6; // same location as x in main
    
    for (j = 0; j < 5; j++)
    {
        i_ary[j] = 100 + 100* j;
    }
    return;
}


