/*******************************************************************************
 * Exercises 6.9from Programming in C
 * File:    program6.9.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * This is an example program that revises program6.8A into an equivalent switch
 * statement that evaluates a simple  * expression of the form:
 *		 number 	operator 	number.
 *
*******************************************************************************/

#include <stdio.h>

int main (void)
{
	float 	value1, value2;
	char 	operator;
	
	printf ("Type in your expression.\n");
	scanf ("%f %c %f", &value1, &operator, &value2);
	
	switch (operator)
	{
		case '+':
			printf ("%.2f\n", value1 + value2);
			break;	
		case '-':
			printf ("%.2f\n", value1 - value2);
			break;
		case '*':
			printf ("%.2f\n", value1 * value2);
			break;
		case '/':
			if ( value2 == 0 )
			{
				printf ("Dividing by zero.\n");
			}
			else 
			{	
				printf ("%.2f\n", value1 / value2);
			}			
			break;
		default:
			printf ("Unknown operator.\n");
			break;
	}
	
	return 0;
}
