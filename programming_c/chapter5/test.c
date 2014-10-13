#include <stdio.h>

int main (void)
{
    //variables are named  
    int n, n_temp, secondary_counter, f, f_temp;
    
    //header    
    printf ("Table That Displays First 10 Factorals\n\n");
    printf (" Root  Factoral\n");
    printf ("=================\n");
    
    n = 1;
    
    //initial counter that also counts root     
    while ( n <= 10 ) {
          
          //temporary variables are defined        
          n_temp = n;
          f = n;
          secondary_counter = 1;
         
          //secondary routine limited by n (root)       
          while (secondary_counter <n){                
                //f_temp calculates first factor               
                f_temp = f * (n_temp -1);                
                //it gets transferred to f                
                f = f_temp;               
                //n_temp factor is reduced -1               
                n_temp = n_temp - 1;               
                //secondary counter increases +1                
                ++secondary_counter;
          }
          
          printf ("  %2i   %7i\n",n,f);  
          ++n;
    }

    printf ("\n");
  
    return 0;
}
