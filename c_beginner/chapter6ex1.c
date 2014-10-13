/**
 * Example program #1 from Chapter 6 of Absolute Begnner's Guide to C, 3rd Edition
 * File:    chaper6ex1.c
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * This program pairs three kids with their favorite superhero
 */
 
 #include <stdio.h>
 #include <string.h>
 
 int main()
 {
    char kid1[12]; // kid1 can hold an 11-character name
    char kid2[] = "Maddie"; // kid2 will be 7 characters (Maddie plus null 0)) 
    char kid3[7] = "Andrew"; // kid3 is also 7 characters, but specifically defined
    char hero1[]= "Batman"; // hero1 will be 7 characters (adding null 0!)
    char hero2[34] = "Spiderman"; // hero2 will have extra room just in case
    char hero3[25];
        
        kid1[0] = 'K'; // kid1 is being defined character-by-character
        kid1[1] = 'a'; // not effecient, but it does work
        kid1[2] = 't';
        kid1[3] = 'i';
        kid1[4] = 'e';
        kid1[5] = '\0'; // never forget the null o so C knows when the string ends
        
        strcpy(hero3, "The Incredible Hulk");
        
        printf("%s\'s favorite hero is %s.\n", kid1, hero1);
        printf("%s\'s favorite hero is %s.\n", kid2, hero2);
        printf("%s\'s favorite hero is %s.\n", kid3, hero3);
        
        return 0;
 }
 
 
