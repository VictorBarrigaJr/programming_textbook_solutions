/*******************************************************************************
 * Exercises 4.3 from Programming in C
 * File:    exercise4.3.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * 3. Which of the follwing are invalid constants? Why?
*******************************************************************************/

/*

123.456		valid
0001		valid
0Xab05		valid 
123.5e2		valid
98.6F		valid
0996		digits 8 and 9 invalid in octal constant 
1234uL		valid
1.234L		valid
0XABCDEFL	valid
0x10.5		decimal point not valid in integer constant 
0xFFFF		valid
0L			valid
.0001		valid
98.7U		unasigned qualifier only valid for integers
-12E-12		valid
1.2Fe-7		can't use F and e together
197u		valid
0xabcu		valid
0X0G1		G is not a valid hexadecimal figure
123L		valid
-597.25		valid
+12			valid
17777s		s is not a valid qualifier
07777		valid
15,000		commas are not allowed
100U		valid
+123 		valid

*/
