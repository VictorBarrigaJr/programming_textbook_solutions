#include <stdio.h>

int main (void)
{
    int i, j;
    
        
    i = 365 ,j = 7 ;
    printf ("i = %i, j = %i, Next Largest Multiple = %i\n\n",i,j,i + j - i % j);
    
    i = 12258 ,j = 23 ;
    printf ("i = %i, j = %i, Next Largest Multiple = %i\n\n",i,j,i + j - i % j);
        
    i = 996 ,j = 4 ;
    printf ("i = %i, j = %i, Next Largest Multiple = %i\n\n",i,j,i + j - i % j);  
     
    return 0;
}
