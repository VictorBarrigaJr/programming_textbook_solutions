/**
 * Example program #1afrom Chapter 27 of Absolute Begnner's Guide to C, 3rd Edition
 * File:    bookinfo.h
 * 
 * Victor Barriga 
 * victorbarriga@live.com
 * 
 * This header file defines a structure for information about a book.
 *
 */

struct book_info 
{
    char title[40];
    char author[25];
    int pages;
    float price;
};

