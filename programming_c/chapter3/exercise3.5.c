/*******************************************************************************
 * Exercises 3.4 from Programming in C
 * File:    exercise3.4.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * 5. Identify the syntactic errors in the following program. Then type in and 
 * run the corrected program to ensure you have correctly identified all mistakes.
 * 
 * #include <stdio.h>
 * int main (Void)
 * (
 *     INT sum;
 *     /* COMPUTE RESULT
 *     sum = 25 + 37 - 19
 *     /* DISPLAY RESULTS //
 *     printf ("The answer is %i\n" sum);
 *     return 0;
 * }
 ******************************************************************************/

// solution follows
#include <stdio.h>

int main (Void)
{ 
	int sum;
	/* COMPUTE RESULT*/
	sum = 25 + 37 - 19;
	/* DISPLAY RESULTS */
	printf ("The answer is %i\n", sum);
	
	return 0;
}
